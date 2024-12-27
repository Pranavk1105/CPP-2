#include <iostream>
using namespace std;
class employee{
            public:
            employee()
            {
                        cout << "Constructor invoked" << endl;
            }
            ~employee()
            {
                        cout << "Destructor invoked" << endl;
            }
};
int main() 
{
            employee e1;
            employee e2;
  return 0;
}