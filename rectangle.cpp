#include <iostream>
using namespace std;

class Rectangle {
    public:
        int l, b, area1; 

        void display() {
            cout << "Please enter the length and width: " << endl;
            cin >> l >> b;
            cout << "You have entered length " << l << " and width " << b << endl;
        }

        void area() {
            area1 = l * b; 
            cout << "Area of rectangle is: " << area1 << endl; 
        }
};
int main() {
    Rectangle obj; 
    obj.display(); 
    obj.area();    
    return 0;
}