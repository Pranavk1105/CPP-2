#include <iostream>
using namespace std;
string Reverse(string x){
    string y = "";
    for(int i =x.length()-1; i>=0; i--){       
        y += x[i];
    }
    return y;
}
string IsPalindrome(string x){
    if(x == Reverse(x)){
        return "Is palindrome";
    }
    else{
        return "Not palindrome";
    }
}
int main(){
    string x = "mom";
    string y = "I am a genius";
    cout<<Reverse(y)<<endl;
    cout<<IsPalindrome(x);
    return 0;
}