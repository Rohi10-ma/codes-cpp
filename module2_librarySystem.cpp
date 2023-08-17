//This is A Program for Library Management System
#include<iostream>
#include<string>
#include<limits>
#include<fstream>

using namespace std;

const int maxBooks = 100;
const int maxDVDs = 100;
const int maxMagazines = 10;

//Creating a Student class for Identification Purposes
class Student{
    protected:
    struct info{
        string Name;
        string Address;
        string contactNumber;
    }
    Info;
    public:
	
    void studentInfo(){
        cout << "Enter Your Name : " <<endl;
        getline(cin, Info.Name);
        cout << "Enter Your Address : " <<endl;
        getline(cin, Info.Address);
        cout << "Enter Your Contact Number :" <<endl;
        cin >> Info.contactNumber;
    }
};

//Using Inheritance
class libraryManagemnet : public Student{

protected:

    string books[maxBooks];
    int totalBooks = 0;
    string DVDs[maxDVDs];
    int totalDVDs = 0;
    string magazines[maxMagazines];
    int totalMagazines = 0;

    string borrowedBooks[maxBooks];
    string borrowedDVDs[maxDVDs];
    string borrowedMagazines[maxMagazines];


    int totalBorrowedBooks =0 ;
    int totalBorrowedDVDs =0 ;
    int totalBorrowedMagazines =0 ;


    static int bookCount;
    static int DVDCount; 
    static int magazineCount;

  // Composition: Embedding Student class
  Student student;       

public:
libraryManagemnet(){

}

//Adiing Book To Library
void addBook(string book){ 
  
    if (totalBooks >= maxBooks)
	 {

    cout << "Library is full, cannot add more books." << endl;
        return;
    }
else {

    books[totalBooks] = book;
    
    totalBooks++;
       // Save book to file
        ofstream bookFile("books.txt", ios::app);
        if (bookFile.is_open()){
          	bookFile << "New Book Added To Library : "<<book<< endl;
            bookFile.close();
            cout << "Book Name Is Added To Books File !" << endl;
            cout<<endl;
            cout << "Book Added to Library!" << endl;  
        }

 }
}
//Adding DVD to Library
void addDVD(string DVD){ 
  
    if (totalDVDs >= maxDVDs)
	 {

    cout << "Library is full, cannot add more books." << endl;
        return;
    }
else {

        DVDs[totalDVDs] = DVD;
    
        totalDVDs++;
        // Saving DVD to File
        ofstream DVDFile("DVDs.txt", ios::app);
        if (DVDFile.is_open()){
          	DVDFile << "New DVD Added To Library : "<<DVD<< endl;
            DVDFile.close();
            cout << "DVD Name Is Added To DVD File !" << endl;
            cout<<endl;
            cout << "DVD Added to Library!" << endl;  
        }

    }
}
//Adding Magazine To Library
void addMagazine(string magazine){ 
  
    if (totalMagazines >= maxMagazines)
	 {

    cout << "Library is full, cannot add more Magazines." << endl;
        return;
    }
else {

    books[totalMagazines] = magazine;
    
    totalMagazines++;
       // Save Magazine to file
        ofstream MagazineFile("Magazines.txt", ios::app);
        if (MagazineFile.is_open()){
          	MagazineFile << "New Magazine Added To Library : "<<magazine<< endl;
            MagazineFile.close();
            cout << "Magazine Name Is Added To Maazines File !" << endl;
            cout<<endl;
            cout << "Magazine Added to Library!" << endl;  
        }

 }
}
//Borrowing Books 
void borrowBook(string book) {
    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (books[i] == book) {

            // Move the book from books array to borrowedBooks array  
            borrowedBooks[totalBorrowedBooks] = book;
            totalBorrowedBooks++;
            for (int j = i; j < totalBooks - 1; j++) {
                books[j] = books[j + 1];
            }
            totalBooks--;
            found = true;
            ofstream bookFile("books.txt", ios::app);
            if (bookFile.is_open()) {
                bookFile << "Borrowed Book name : "<<book<< endl;
            }
            bookFile.close();
            cout << "Book Borrowed!" << endl;
            break;
        }
    }
    if(!found) {
        cout << "Book Not Found In Library." << endl;
    }
}
//Borrowing DVDs

void borrowDVD(string DVD) {
    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (DVDs[i] == DVD) {

            // Move the book from books array to borrowedBooks array  
            borrowedDVDs[totalBorrowedDVDs] = DVD;
            totalBorrowedDVDs++;
            for (int j = i; j < totalDVDs - 1; j++) {
                DVDs[j] = DVDs[j + 1];
            }
            totalDVDs--;
            found = true;
            ofstream DVDFile("DVDs.txt", ios::app);
            if (DVDFile.is_open()) {
                DVDFile << "Borrowed DVD name : "<<DVD<< endl;
            }
            DVDFile.close();
            cout << "DVD Borrowed!" << endl;
            break;
        }
    }
    if(!found) {
        cout << "DVD Not Found In Library." << endl;
    }
}
//Borrowing Magazines 
void borrowMagazine(string magazine) {
    bool found = false;
    for (int i = 0; i < totalMagazines; i++) {
        if (magazines[i] == magazine) {

            // Move the Magazine from Magaizne array to borrowedMagazine array  
            borrowedMagazines[totalBorrowedMagazines] = magazine;
            totalBorrowedMagazines++;
            for (int j = i; j < totalMagazines - 1; j++) {
                magazines[j] = magazines[j + 1];
            }
            totalMagazines--;
            found = true;
            ofstream MagazineFile("Magaiznes.txt", ios::app);
            if (MagazineFile.is_open()) {
                MagazineFile << "Magazines name : "<<magazine<< endl;
            }
            MagazineFile.close();
            cout << "Magazines Borrowed!" << endl;
            break;
        }
    }
    if(!found) {
        cout << "Magazines Not Found In Library." << endl;
    }
}
//Displaying Books
void displayBooks() {
    if (totalBooks == 0) {
        cout << "No Books Available In The Library." << endl;
        return;
    }
    cout << "Available Books:" << endl;
    for (int i = 0; i < totalBooks; i++) {
        cout << "- " << books[i] << endl;
    }
    cout << endl;
}
//Displaying DVDs
void displayDVDs() {
    if (totalDVDs == 0) {
        cout << "No DVDs Available In The Library." << endl;
        return;
    }
    cout << "Available DVDs:" << endl;
    for (int i = 0; i < totalDVDs; i++) {
        cout << "- " << DVDs[i] << endl;
    }
    cout << endl;
}
//Displaying DVDs
void displayMagazines() {
    if (totalMagazines == 0) {
        cout << "No Magazines Available In The Library." << endl;
        return;
    }
    cout << "Available Magaiznes:" << endl;
    for (int i = 0; i < totalMagazines; i++) {
        cout << "- " << magazines[i] << endl;
    }
    cout << endl;
}
// Displaying Borrowed Books
void displayborrowedBooks() {
    if (totalBorrowedBooks == 0) {
        cout << "No Books Currently Borrowed." << endl;
    }
    else {
        cout << "Borrowed Books:" << endl;
        for (int i = 0; i < totalBorrowedBooks; i++) {
            cout << "- " << borrowedBooks[i] << endl;
        }
    }
    cout << endl;
}
// Displaying Borrowed DVDs
void displayborrowedDVDs() {
    if (totalBorrowedDVDs == 0) {
        cout << "No DVDs Currently Borrowed." << endl;
    }
    else {
        cout << "Borrowed DVDs:" << endl;
        for (int i = 0; i < totalBorrowedDVDs; i++) {
            cout << "- " << borrowedDVDs[i] << endl;
        }
    }
    cout << endl;
}
// Displaying Borrowed Magazines
void displayborrowedMaazines() {
    if (totalBorrowedMagazines == 0) {
        cout << "No Magaiznes Currently Borrowed." << endl;
    }
    else {
        cout << "Borrowed Magazines:" << endl;
        for (int i = 0; i < totalBorrowedMagazines; i++) {
            cout << "- " << borrowedMagazines[i] << endl;
        }
    }
    cout << endl;
}

};

//Creating A Menu Driven Function
void Options(libraryManagemnet& library) {
int i = 10;
string choice;
string book;
string DVD;
string magazine;
int adminOption = 0;
int studentOption = 0;
string bookReturn;
string DVDReturn;
string magazineReturn;


while (i > 0) {
    cout << "1) Admin " << endl;
    cout << "2) Student  " << endl;
    cout << "3) Exit " << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;	
    if (choice == "1") {
        // Admin actions  
        while (i > 0){
            cout <<endl<< "What do you want to do?" << endl;
            cout << "1. Add Book To Library" << endl;
            cout << "2. Add DVD To Library" << endl;
            cout << "3. Add Magazine To Library" << endl;
            cout << "4. Display Books In Library" << endl;
            cout << "5. Display DVDs In Library" << endl;
            cout << "6. Display Magazines In Library" << endl;
            cout << "7. Quit" << endl;
            cout << "Enter Your Choice (1-7): "<<endl;
            cin >> adminOption;
            if(adminOption == 1){
                // Add book to library  
                cout << "Enter Book Name: " << endl;
            cin.ignore();
                getline(cin, book);

                library.addBook(book);

            }
            if(adminOption == 2){
                // Add DVD to library  
                cout << "Enter DVD Name: " << endl;
            cin.ignore();
                getline(cin, DVD);

                library.addDVD(DVD);

            }
            if(adminOption == 3){
                // Add Magaizne to library  
                cout << "Enter Magazine Name: " << endl;
            cin.ignore();
                getline(cin, magazine);

                library.addBook(magazine);

            }
            else if(adminOption == 4)
            {
                // Display Books in library  
                library.displayBooks();
                library.displayborrowedBooks();
            }
            else if(adminOption == 5)
            {
                // Display DVDs in library  
                library.displayDVDs();
                library.displayborrowedDVDs();
            }
            else if(adminOption == 6)
            {
                // Display Magaziness in library  
                library.displayMagazines();
                library.displayborrowedMaazines();
            }

            else if(adminOption == 7)
            {
                cout << " Exiting Admin Portal " << endl;
                break;
            }
            else
            {
                cout << "Invalid Choice " << endl;
                // Clear the error flag  
                cin.clear();

                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                // ignore the remaining characters in the input buffer  
            }
            cout << endl;
        }
    }
    else if (choice == "2") {
        // Student actions  
        cin.ignore();
           library.studentInfo();
        while (i > 0) {
            cout <<endl<< "What do you want to do?" << endl;
            cout << endl;
            cout << "1. Borrow Book " << endl;
            cout << "2. Borrow DVD " << endl;
            cout << "3. Borrow Magazine " << endl;
            cout << "4. Display Books in library" << endl;
            cout << "5. Display DVDs In Library" << endl;
            cout << "6. Display Magazine In Library" << endl;
            cout << "7. Quit" << endl;
            cout << "Enter your choice (1-7): "<<endl;
            cin >> studentOption;
            cin.ignore();
            if (studentOption == 1) {
            		
                cout << "Enter book name: " << endl;
                getline(cin,bookReturn);
                library.borrowBook(bookReturn);

            }
            if (studentOption == 2) {
            		
                cout << "Enter DVD name: " << endl;
                getline(cin,DVDReturn);
                library.borrowDVD(DVDReturn);

            }
            if (studentOption == 3) {
            		
                cout << "Enter Magazine name: " << endl;
                getline(cin,magazineReturn);
                library.borrowMagazine(magazineReturn);

            }
            
            else if (studentOption == 4) {
                    
                library.displayBooks();

            }
            else if (studentOption == 5) {
                    
                library.displayDVDs();

            }
            else if(studentOption == 6)
            {
     
                library.displayMagazines();
                
            }
            else if (studentOption == 7) {
                cout << "Exiting Student portal" << endl;
                break;

            }
            else {
                cout << "Invalid input." << endl;
                cin.clear(); // clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                // ignore the remaining characters in the input buffer  
            }
        }
    }
    else if (choice == "3") {
        cout << "Thanks  " << endl;
        cout << "Bye Bye " << endl;
        break;
    }

    else {
        cout << "Invalid Input  " << endl;
        cin.clear(); // clear the error flag  
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}
}

int main() {

libraryManagemnet library;
Options(library);
return 0  ; 
}

