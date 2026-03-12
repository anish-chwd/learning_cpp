#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
using namespace std;
// void my_fnx(function<void()> func){
//     func();
//     func();
// }
int main(){
    // for (int i = 0; i <= 10; i++) {
    //     auto show =[i](){
    //         cout << "Number : " << i << endl;
    //     };
    //     show();
    // }
    int x =10;
    auto show = [&x](){
        cout << x;
    };
    x =20;
    show();

    return 0;
}