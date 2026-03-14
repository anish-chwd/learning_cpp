#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;
class myClass{
    public:
        double speed(double distance, double time);
};

double myClass::speed(double distance, double time){
    return (distance/time);
}




int main(){
    myClass obj;
    double distance ,time;
    cout << "Enter distance : ";
    cin >> distance;
    cout <<"Enter time : ";
    cin >> time ;
    cout << obj.speed(distance,time);

    return 0;
}