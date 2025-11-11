// copy constructor
#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;
public:
    
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    
    Book(const Book &b) {
        title = b.title;
        pages = b.pages;
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1("C++ Basics", 250);
    Book b2("Data Structures", 400);
    Book b3(b1); 

    cout << "Book Details:\n";
    b1.display();
    b2.display();
    b3.display(); 

    return 0;
}
