#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
using namespace std;
class myclass{
    public:
        int num;
        string str;
};


int main(){
    myclass obj1;
    obj1.num = 34;
    obj1.str = "jane doe";

    cout << obj1.num<< endl;
    cout << obj1.str <<endl;

    return 0;
}