#include<iostream>
#include<string>
#include<limits>
#include<fstream>

using namespace std;

const int maxBooks = 100;

class Student {
	
protected:

struct info         // structure  
{

string Name;
string Address;
string contactNumber;
}
Info;
public:
	
void studentInfo()
{
    cout << "Enter your name : " << endl;

    getline(cin, Info.Name);

    cout << "Enter your Address : " << endl;

    getline(cin, Info.Address);

    cout << "Enter your Contact number :" << endl;
    cin >> Info.contactNumber;

}
};

class libraryManagemnet : public Student { // class for Book management 

protected:

string books[maxBooks];

int totalBooks = 0;

string borrowedBooks[maxBooks];

int totalBorrowedBooks =0 ;

static int bookCount;

  Student student;       // Composition: Embedding Student class

public:
libraryManagemnet() {

}


void addBook(string book) {  // function for adding a book
  
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
        if (bookFile.is_open()) {
          	bookFile << "New Book Added to Library : "<<book<< endl;
            bookFile.close();
    cout << "Book Name is added to Books file !" << endl;
    cout<<endl;
    cout << "Book added to library!" << endl;  
}

 }}
void borrowBook(string book) {
    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (books[i] == book) {
            // move the book from books array to borrowed_books array  
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
            cout << "Book borrowed!" << endl;
            break;
        }
    }
    if(!found) {
        cout << "Book not found in library." << endl;
    }
}
void displayBooks() {
    if (totalBooks == 0) {
        cout << "No books available in the library." << endl;
        return;
    }
    cout << "Available books:" << endl;
    for (int i = 0; i < totalBooks; i++) {
        cout << "- " << books[i] << endl;
    }
    cout << endl;
}

void displayborrowedBooks() {
    if (totalBorrowedBooks == 0) {
        cout << "No books currently borrowed." << endl;
    }
    else {
        cout << "Borrowed books:" << endl;
        for (int i = 0; i < totalBorrowedBooks; i++) {
            cout << "- " << borrowedBooks[i] << endl;
        }
    }
    cout << endl;
}

};


void Options(libraryManagemnet& library) {
int i = 10;
string choice;
string book;
int Admin_option = 0;
int Student_option = 0;
string book_return;


while (i > 0) {
    cout << "1) Admin " << endl;
    cout << "2) Student  " << endl;
    cout << "3) Exit " << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;	
    cout << "Your choice is : " << choice << endl;
    if (choice == "1") {
        // Admin actions  
        while (i > 0) {
            cout << "What do you want to do?" << endl;
            cout << "1. Add book to library" << endl;
            cout << "2. Display books in library" << endl;
            cout << "3. Quit" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> Admin_option;
            cout << "Your choice is : " << Admin_option << endl;
            if (Admin_option == 1) {
                // Add book to library  
                cout << "Enter book name: " << endl;
            cin.ignore();
                getline(cin, book);

                library.addBook(book);

            }
            else if (Admin_option == 2)
            {
                // Display books in library  
                library.displayBooks();
                library.displayborrowedBooks();
            }
            else if (Admin_option == 3)
            {
                cout << " Exiting from Admin portal " << endl;
                break;
            }
            else
            {
                cout << "Invalid choice " << endl;
                // clear the error flag  
                cin.clear();

                cin.ignore(numericLimits<streamsize>::max(), '\n');
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
            cout << "What do you want to do?" << endl;
            cout << endl;
            cout << "1. Borrow book " << endl;
            cout << "2. Display books in library" << endl;
            cout << "3. Quit" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> Student_option;
            cout << "Your choice is : " << Student_option << endl;
            cin.ignore();
            if (Student_option == 1) {
            		
                cout << "Enter book name: " << endl;
                getline(cin,book_return);
                library.borrowBook(book_return);

            }
            else if (Student_option == 2) {
                    
                library.displayBooks();

            }
            else if (Student_option == 3) {
                cout << "Exiting from Student portal" << endl;
                break;

            }
            else {
                cout << "Invalid input." << endl;
                cin.clear(); // clear the error flag
                cin.ignore(numericLimits<streamsize>::max(), '\n');
                // ignore the remaining characters in the input buffer  
            }
        }
    }
    else if (choice == "3") {
        cout << "Thanks  " << endl;
        cout << "bye bye " << endl;
        break;
    }

    else {
        cout << "Invalid Input  " << endl;
        cin.clear(); // clear the error flag  
        cin.ignore(numericLimits<streamsize>::max(), '\n');
    }
}
}

int main() {

libraryManagemnet library;
Options(library);
return 0  ; 
}

