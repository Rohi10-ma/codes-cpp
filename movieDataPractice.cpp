#include<iostream>
using namespace std;

struct MovieData{

    string title;
    string director;
    int yearReleased;
};
MovieData createMovieData(){

    MovieData movie;

    cout<<"Enter Movie Name: ";
    getline(cin, movie.title);
    cout<<"Enter Name Of Director: ";
    getline(cin, movie.director);
    cout<<"Enter Year Released: ";
    cin>>movie.yearReleased;

    return movie;
}
void displayMovieData(MovieData& movie){

    cout<<movie.title<<endl;
    cout<<movie.director<<endl;
    cout<<movie.yearReleased<<endl;

}
int main(){

    MovieData movie1=createMovieData();
    MovieData movie2=createMovieData();


    cout<<"/'Movie 1/'"<<endl;
    displayMovieData(movie1);
    cout<<"/'Movie 2/'"<<endl;
    displayMovieData(movie2);


    return 0;
}