#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int factorial(int x){
    if (x <= 0)
    {
        return 1;
    }
    else
    {
        return (x*factorial(x-1));
    }    
}

int main(){
    for (int i = 0; i < 11; i++) {
        cout << (factorial(i))<< endl;
    }
    return 0;
}