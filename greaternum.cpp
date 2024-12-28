#include <iostream>
using namespace std;
void greaternum(){
            int a , b ,c;
            cout << "Enter three number";
            cin >> a >> b >>  c;
            if (a > b && a > c){
                        cout << a << " is greatest";
            }
            else if (b > c && b > a){
                        cout << b << " is greatest";
            }
            else 
            cout << c << " is greatest";
}
int main() 
{
            greaternum();
  return 0;
}