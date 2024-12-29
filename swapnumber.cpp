// to swap two numbers

#include <iostream>
using namespace std;
int main(){
            int a=10 ,b=20, temp;
            std::cout << "numbers before swaping a=10 and b=20" ;
            temp = a;
            a = b;
            b = temp;
            cout << " and numbers after swapping :";
            cout << "a= " << a << ", b = " << b << endl;
            return 0;
}