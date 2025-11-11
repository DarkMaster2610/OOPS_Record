// inline function
#include <iostream>
using namespace std;

class Math {
public:
    inline int square(int x) {   
        return x * x;
    }
};

int main() {
    Math m;
    cout << "Square of 5 = " << m.square(5) << endl;
    cout << "Square of 9 = " << m.square(9) << endl;
    return 0;
}
