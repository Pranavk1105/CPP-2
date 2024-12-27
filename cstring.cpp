#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
            string sig;
            cout << "Enter any string: " ;
            getline(cin , sig);
            
            int x = sig.length();
            cout << "Length of string is :" << x << endl;


  return 0;
}