#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class myClass {
    public:
        void myFnx(){
            cout << "Content @ base class "<< endl;
        }
};

class otherClass{
    public:
        void otherFnx(){
            cout << "Content @ other class"<<endl;
        }
};

class child : public myClass, public otherClass{
};


int main(){
    child obj1;
    obj1.myFnx();
    obj1.otherFnx();
    return 0;
}