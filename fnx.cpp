#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_fnx(int x = 987)
{
    cout << "print_fnx got executed"<< endl << "also value of x is " << x << endl;
}
void change_var_val(int &num){
    num = 50 ;
}

int main(){
    int x = 34;
    print_fnx(90);
    print_fnx();
    print_fnx(x);
    change_var_val(x);
    cout << "value of x : " << x <<endl;
    return 0;

}

// void print_fnx(int x = 987){
//      cout << "print_fnx got executed"<< endl << "also value of x is " << x << endl;
// }