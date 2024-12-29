#include <iostream>
using namespace std;
int main(){
            int x=5;
            cout << "x++ is " << x++ << endl; // postfix returns the value first and increaments afterwards
            cout << "++x is "<< ++x << endl; // prefix increaments first and return value after that

            int y=10;
            cout << "y-- is " << y-- << endl;
            cout << "--y is " << --y << endl;
            return 0;
            

}