#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;
class myClass
{
    private:
        int a = 0;
    public:
        void myFnx(){
            cout << "Value of a at base : "<<a<<endl;
        };
    };

    class myChild: public myClass{

    };

    class myGrandChild : public myChild{
    };

int main(){
    myGrandChild myObj;
    myObj.myFnx();

    return 0;
}