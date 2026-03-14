#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class myclass{
    private:
        int x;
    public:
        void set_x(int s){
            x=s;
        }
        int get_x(){
            return x;
        }
};

int main(){
    myclass obj1;
    obj1.set_x(100);
    cout << obj1.get_x() << endl;
    return 0;
}