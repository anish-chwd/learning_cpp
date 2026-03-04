#include <iostream>
using namespace std;

int add(int a, int b) {
    return (a + b);
}

int main() {

    int a = 90 ,b = 67;

    int z,x,y;

    z=x=y=1000;

    float price = 14.99f;

    cout << "add: " << add(b,a) << endl;

    a=100;
    b=200;

    cout << "total price: " << price + add(a,b) << endl;

    cout << "z: " << z << " x: " << x << " y: " << y << endl;
    return 0;

}


