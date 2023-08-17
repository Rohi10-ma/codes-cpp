/////Writing a Program Using Basic Concepts: Structure, Function, Static and Pointers////
#include<iostream>

using namespace std;

// Creating a "Structure" 
struct MovieData{
    string title;
    string director;
    int yearReleased;

    //Creating a Display Function to Display the Movies
    void displayMovie(MovieData& movie){

    cout<<endl<<"Title: "<<movie.title<<endl;
    cout<<"Director: "<<movie.director<<endl;
    cout<<"Year Realesed: "<<movie.yearReleased<<endl;
}

};

// Creating a "Function" Of Type 'MovieData' To Input Movies
MovieData createMovieData(){
    //Creating Object 'movie'
    MovieData movie;

    cout<<"Enter The Title: "<<endl;
    getline(cin>>ws, movie.title);
    cout<<"Enter The Name Of Director: "<<endl;
    getline(cin>>ws, movie.director);
    cout<<"Enter Year Released: "<<endl;
    cin>>movie.yearReleased;

    

    return movie;
}
int main(){

    MovieData movie1= createMovieData();
    MovieData movie2= createMovieData();

    //Using Pointers to Display The Data

    //Pointer for Movie 1
    MovieData* ptr1; 
    ptr1=&movie1;
    cout<<endl<<"/'Movie 1/'"<<endl<<endl;
    ptr1->displayMovie(movie1);

    //Pointer For Movie 2
    MovieData* ptr2;
    ptr2=&movie2;
    cout<<endl<<"/'Movie 2/'"<<endl<<endl;
    ptr2->displayMovie(movie2);

    return 0;
}
/*This is a program that takes movie data from user and then displays it. I've used struct, functions, static and pointers. The struct will create a Structure MovieData
with private members title, director and yearReleased. Inside the structure I've created a displayMovie() function to display the movie data.
Outside of the structure, I've created another fucnction of type MovieData(An Object Function) to input movie data from user.
In main I've made objects of two movies, taken the data from user and diplayed it using the pointers ptr1 and ptr2 respectively.*/

//At the Time Of Submission this programe was working properly. The ScreenShots are attached.