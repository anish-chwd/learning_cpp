#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class car{
    public:

        string brand;
        string model;

        car(){
            brand = "unknown <NO DATA>";
            model = "unknown <NO DATA>";
        }

        car(string b, string m){
            brand = b;
            model = m;
        }

};

int main(){
    car car1;
    car car2("bmw", "x5");
    car car3("ford", "mustang");

    cout << "Car1: " << car1.brand << " " << car1.model << "\n";
    cout << "Car2: " << car2.brand << " " << car2.model << "\n";
    cout << "Car3: " << car3.brand << " " << car3.model;
  

    return 0;
}