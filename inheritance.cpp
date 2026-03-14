#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class vehicle{
    public:
        string brand ="Ford";
        double mileage(double distance_travelled, double fuel_consumed){
            return (distance_travelled/fuel_consumed);
        }
};
class car: public vehicle{
    public:
        string model = "mustang";
};

int main(){
    car mycar;
    cout<<mycar.brand<<" "<<mycar.model<<" " << mycar.mileage(345.81, 10.91)<<endl;
    return 0;
}