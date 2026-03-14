#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class aircraft{
    public:
        string brand;
        string model;
        int mfg_year;
        aircraft(string x, string y , int n);
};

aircraft::aircraft(string x, string y , int n){
    brand = x;
    model = y;
    mfg_year = n;
}

int main(){
    aircraft plane1("AIRBUS", "A350", 2020);
    aircraft plane2("BOEING", "777", 1998);

    cout << plane1.brand << " " << plane1.model << " "<< plane1.mfg_year<<endl;
    cout << plane2.brand << " " << plane2.model << " "<< plane2.mfg_year<<endl;

    return 0;
}