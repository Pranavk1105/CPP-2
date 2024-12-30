#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ofstream my_file("abc.txt" , ios::app);


if (!my_file){

    cout <<"Error: Unable to open the file."<<endl;
    return 1;

}
 my_file<<"Line4"<<endl;
 my_file<<"Line5"<<endl;
 my_file<<"Line6"<<endl;



my_file.close();

return 0 ;
}