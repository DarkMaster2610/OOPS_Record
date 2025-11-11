//prametreized constructor
#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width
             << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1(4, 5);
    Rectangle r2(6, 3);
    Rectangle r3(10, 2);

    cout << "Rectangle Details:\n";
    r1.display();
    r2.display();
    r3.display();

    return 0;
}
