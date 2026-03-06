#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
struct car
{
    string brand;
    int mfg_year;
};

void print_details_function(car &ch1){
    cout << "Brand : " << ch1.brand << " -- Year : "<< ch1.mfg_year << endl;
}

int main(){
    car varcar = {"toyota", 2019}; //car *varcar ; <-- INVALID
    print_details_function(varcar);
    // varcar.mfg_year ++;
    // print_details_function(varcar);
    return 0;
}