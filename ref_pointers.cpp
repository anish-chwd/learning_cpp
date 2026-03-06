#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string food = "pizza";
    string *ptr = &food;

    cout << food << endl << &food << endl << ptr <<endl << *ptr <<endl;
    *ptr = "burger";
    cout << "************" << endl <<food << endl << &food << endl << ptr <<endl << *ptr <<endl;



    return 0;
}