#include<iostream>
#include<conio.h>
using namespace std;

//Globally Defining an Array for the 3X3 grid of Tic Tac Toe
char spaces[3][3]={{'0','1','2'},{'3','4','5'},{'6','7','8'}};

//String Variables to input the players names
string name1="";
string name2="";

int row, column;
//Token is the symbol assigned to the players
char token= 'X';

bool tie=false;

//This Function is used to display the game grid with 9 cells. The Cells are named from 0 to 8
void displayGrid(){

    
    cout<< "    |     | "<<endl;
    cout<< " "<<spaces[0][0]<<"  | "<<spaces[0][1]<<"   | "<<spaces[0][2]<<" "<<endl;
    cout<< "____|_____|____ "<<endl;
    cout<< "    |     | "<<endl;
    cout<< " "<<spaces[1][0]<<"  | "<<spaces[1][1]<<"   | "<<spaces[1][2]<<" "<<endl;
    cout<< "____|_____|____ "<<endl;
    cout<< "    |     | "<<endl;
    cout<< " "<<spaces[2][0]<<"  | "<<spaces[2][1]<<"   | "<<spaces[2][2]<<" "<<endl;
    cout<< "    |     | "<<endl;   
    
    
}

//This function is going to take Input from the user i.e Their names and token placement.
void getPlayerInput(){

    int digit;

    //This if statement will take input from Player 1
    if(token=='X'){

        cout<<name1<<"! Please Enter Digit: ";
        cin>>digit;
    }

    //This if statement will take input from Player 2
    if(token =='O'){

        cout<<name2<<"! Please Enter Digit: ";
        cin>>digit;
    }

    //This entire if, else if- block is going to assign the token to the entered digit on the grid
    if(digit==0){

        row=0;
        column=0;
    }

    else if(digit==1){

        row=0;
        column=1;
    }

    else if(digit==2){

        row=0;
        column=2;
    }

    else if(digit==3){

        row=1;
        column=0;
    }

    else if(digit==4){

        row=1;
        column=1;
    }

    else if(digit==5){

        row=1;
        column=2;
    }

    else if(digit==6){

        row=2;
        column=0;
    }

    else if(digit==7){

        row=2;
        column=1;
    }

    else if(digit==8){

        row=2;
        column=2;
    }

    //Here, If the player enters any number less than 0 or greater than 8, the program will display Invalid Entry!
    else{

        cout<<endl<<endl<<"INVALID ENTRY!!!"<<endl<<endl;
        cout<<"Please Enter A Digit Between 0 To 8!"<<endl;
        getPlayerInput();
    }

    //These statements will check whether the the cell is empty or not, if it is the token will be entered.
    if(token=='X' && spaces[row][column]!='X' && spaces[row][column]!='O'){

        spaces[row][column]='X';
        token='O';

    }

    else if(token=='O' && spaces[row][column]!='X' && spaces[row][column]!='O'){

    spaces[row][column]='O';
    
    token='X';
    
    }

    //If the cell is filled already, the program will display the following 'cout' message
    else if(spaces[row][column]=='X' || spaces[row][column]=='O'){

        cout<<"The Position is filled already!!";
        getPlayerInput();
    }
    displayGrid();
}

//This Function will check for Win situation of the players
bool checkForWin(){
    for(int i=0;i<3;i++){
        if(spaces[i][0]==spaces[i][1] && spaces[i][0]== spaces[i][2] || spaces[1][i]==spaces[0][i] && spaces[1][i]==spaces[2][i]){
            return true;
        }
        if(spaces[0][0]==spaces[1][1] && spaces[1][1]==spaces[2][2] || spaces[2][0]==spaces[1][1] && spaces[1][1]==spaces[0][2]){
            return true;
        }
    }
    //This Loop checks if the game is tied
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(spaces[i][j]!= 'X' && spaces[i][j]!='O'){

                return false;
            }
        }
    }
    tie=true;

    return true;
}

int main(){

    cout<<endl<<endl<<"---------------------------------------------------"<<endl; 
    cout<<endl<<"WELCOME TO TIC TAC TOE"<<endl<<endl;
    cout<<"A C++ Game by Rohail Iqbal";
    cout<<endl<<endl<<"---------------------------------------------------"<<endl;
    cout<<endl<<"INTSTRUCTIONS!"<<endl;
    cout<<"1. This is a Two Player Game, Player 1 and Player 2."<<endl;
    cout<<"2. Player 1 will have the token \'X\' and Player 2"<<endl<<"will have the token \'O\'."<<endl;
    cout<<"3. Player will have to enter a digit assigned to a"<<endl<<"particular space in the grid to enter thier token!."<<endl;
    cout<<endl<<"Enough Chit Chat, Let's get to TIC TAC and TOE!!"<<endl;
    cout<<endl<<endl<<"---------------------------------------------------"<<endl;
    cout<<"Player 1: Enter Your Name Please: ";
    getline(cin, name1);
    cout<<"Player 2: Enter Your Name Please: ";
    getline(cin,name2);

    cout<<endl<<name1<<"! You Will Start The Game:"<<endl;
    cout<<endl<<name2<<"! You Will Follow:"<<endl;


    while(!checkForWin()){
        displayGrid();
        getPlayerInput();
        checkForWin();
    }

    if(token=='X' && tie==false){

        cout<<endl<<name2<<"! WON!! Siiiuu!! "<<endl<<name1<<"! Better Luck Next Time.";
        cout<<endl<<endl<<"A Game by Rohail Iqbal";
        cout<<endl<<endl<<"---------------------------------------------------"<<endl;
        
    }
    else if(token=='O' && tie==false){

        cout<<endl<<name1<<"! WON!! Siiiuu!! "<<endl<<name2<<"! Better Luck Next Time."; 
        cout<<endl<<endl<<"A Game by Rohail Iqbal";
        cout<<endl<<endl<<"---------------------------------------------------"<<endl;
    }
    else{

        cout<<endl<<"Alas! It's a Tie! You Two Are Just Too Good For Each Other!";
        cout<<endl<<endl<<"A Game by Rohail Iqbal";
        cout<<endl<<endl<<"---------------------------------------------------"<<endl;
    }
    return 0;
}