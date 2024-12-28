#include <iostream>
using namespace std;
int main(){
            int sub1,sub2,sub3,sub4,sub5,avg1,avg2;
            cout << "Enter subject 1 marks:";
            cin >> sub1;
            cout << "Enter subject 2 marks:";
            cin >> sub2;
            cout << "Enter subject 3 marks:";
            cin >> sub3;
            cout << "Enter subject 4 marks:";
            cin >> sub4;
            cout << "Enter subject 5 marks:";
            cin >> sub5;

            avg1 = sub1+sub2+sub3+sub4+sub5;
            avg2 = avg1/5;

            if (avg2>=90 && avg2<=100){
                        cout << "your grade is A+";
            }
            else if (avg2>=80 && avg2<=89){
                        cout<<"your grade is A";
            }
            else if (avg2>=70 && avg2<=79){
                        cout << "your grade is B+";
            }
            else if (avg2>=60 && avg2<=69){
                        cout<< "your grade is B";
            }
            else if (avg2>=50 && avg2<=59){
                        cout<<"your grade is C";
            }
            else if (avg2>=40 && avg2<=49){
                        cout << "your grade is D";
            }
            else if (avg2>=30 && avg2<=39){
                        cout << "your grade is E";
            }
            else 
            cout << "enter valid numbers";
                        return 0;
            }
            

