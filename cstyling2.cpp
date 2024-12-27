#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
            string cpp = "Welcome to C++ Program";
            int x = cpp.length();
            cout << "Length of string is :" << x << endl;

            string ex = cpp.substr(0,7);
            cout << ex << endl;

            cpp.append(" Btech");
            cout << "New string is: " << cpp << endl ;

  return 0;
}