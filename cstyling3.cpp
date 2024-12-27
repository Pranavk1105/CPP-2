#include <iostream>
#include <cstring>  

using namespace std;

int main() 
{
    char str1[] = "Welcome to c++ program  ";
    cout << str1 << endl;  

    int len = strlen(str1);
    cout << "Length of string is: " << len << endl;

    char sub[8];  
    strncpy(sub, str1, 7);
    sub[7] = '\0'; 
    cout << "Extracted string is: " << sub << endl;

    char str2[] = "Btech";
    char str3[100];  
    
    strcpy(str3, str1);  
    strcat(str3, str2);  
    cout << "Updated string: " << str3 << endl;

    return 0;
}