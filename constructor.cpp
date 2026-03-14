#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class myClass {
    public:
        myClass(){
            cout << "Hello World!";
        }
};
/*
Constructor Rules
The constructor has the same name as the class.
It has no return type (not even void).
It is usually declared public.
It is automatically called when an object is created.
*/


int main(){
    myClass myObj;
    return 0;
}