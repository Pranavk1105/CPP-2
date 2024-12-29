#include <iostream>  
using namespace std;
void swap(int* x, int* y) {
    int temp = *x; 
    *x = *y;      
    *y = temp;      
}
int main() {
    int x = 5, y = 10;  
    cout << "Before swapping: x = " << x << ", y = " << y << endl;  
    swap(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;  
    return 0;  
}
