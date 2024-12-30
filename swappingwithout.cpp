#include <iostream>
using namespace std;
void swap(int x , int y)
{
            x = x+y;
            y = x-y;
            x = x-y;
            cout << "after swapping x is " << x << " and " << "y is " << y << endl;
}
int main() 
{
            int x = 1 , y = 2;
            cout << "before swapping x=1 , y=2 ";
            swap(x,y);
  return 0;
}