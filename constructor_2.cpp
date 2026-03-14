#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class car{
    public:
        int year;
        string model;
        string brand;
        car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }
};

int main(){
    car obj1("FORD", "MUSTANG" , 2005);
    car obj2("TATA", "nano", 2010);
    cout << obj1.brand << " "<< obj1.model<<" "<<obj1.year<<endl;
    cout << obj2.brand << " "<< obj2.model<<" "<<obj2.year<<endl;

    return 0;
}