#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    Book(const std::string& bookTitle, const std::string& bookAuthor, int year)
        : title(bookTitle), author(bookAuthor), publicationYear(year) {}

    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << ", Year: " << publicationYear << std::endl;
    }
};

class Library {
private:
    std::string name;
    Book* books;
    int capacity;
    int numBooks;

public:
    Library(const std::string& libraryName, int libraryCapacity)
        : name(libraryName), capacity(libraryCapacity), numBooks(0) {
        books = new Book[capacity];
    }

    ~Library() {
        delete[] books;
    }

    void addBook(const std::string& title, const std::string& author, int year) {
        if (numBooks < capacity) {
            books[numBooks] = Book(title, author, year);
            numBooks++;
            std::cout << "Book added successfully." << std::endl;
        } else {
            std::cout << "Library is full. Cannot add more books." << std::endl;
        }
    }

    void displayBooks() const {
        std::cout << "Library: " << name << std::endl;
        if (numBooks == 0) {
            std::cout << "No books available." << std::endl;
        } else {
            for (int i = 0; i < numBooks; i++) {
                books[i].display();
            }
        }
    }

    void searchBook(const std::string& title) const {
        std::cout << "Searching for book with title: " << title << std::endl;
        bool found = false;
        for (int i = 0; i < numBooks; i++) {
            if (books[i].getTitle() == title) {
                books[i].display();
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "Book not found." << std::endl;
        }
    }
};

int main() {
    Library myLibrary("Public Library", 5);

    myLibrary.addBook("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    myLibrary.addBook("To Kill a Mockingbird", "Harper Lee", 1960);
    myLibrary.addBook("Pride and Prejudice", "Jane Austen", 1813);
    myLibrary.addBook("1984", "George Orwell", 1949);
    myLibrary.addBook("Moby Dick", "Herman Melville", 1851); // exceeds library capacity
    myLibrary.addBook("The Catcher in the Rye", "J.D. Salinger", 1951); // exceeds library capacity

    myLibrary.displayBooks();

    std::cout << std::endl;

    myLibrary.searchBook("To Kill a Mockingbird");
    myLibrary.searchBook("The Catcher in the Rye");

    return 0;
}
