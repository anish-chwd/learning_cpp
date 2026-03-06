#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

float to_celsius(float farhenheit){
    return ((5.0/9.0) * (farhenheit - 32.0));
}
int main(){
    float farhenheit = 98.8;
    cout << "Farhenheit : " << farhenheit << " --> Celsius : " << to_celsius(farhenheit)<< endl;
    
    return 0;
}