#include <iostream>
using namespace std;
int main(){
            int num1 , num2 , num3;
            cout <<"enter the 1st numbers:";
            cin>>num1;
            cout<<"enter the 2nd number:";
            cin>>num2;
            cout<<"enter the 3rd number:";
            cin>>num3;
            if (num1>num2 && num1>num3){
                        cout << "num1 is greatest";
            }
            else if (num2>num1 && num2>num3){
                        cout <<"num2 is greatest";
            }
            else
            cout << "num3 is greatest";
            return 0;
}