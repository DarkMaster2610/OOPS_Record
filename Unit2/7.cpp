// Default constructor
#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
public:
    
    Student() {
        name = "Unknown";
        marks = 0;
    }

    void setData(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1, s2, s3;  

    
    s1.setData("Aarav", 85);
    s2.setData("Bhavna", 92);
    s3.setData("Chetan", 78);

    cout << "Student Details:\n";
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
