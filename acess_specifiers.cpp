#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class myclass{
    private: // public:    // protected:
        int x;
};

int main(){
    myclass obj1;
    obj1.x = 23;//ERROR
    cout << obj1.x<<endl;//ERROR
    return 0;
}

// ERROR