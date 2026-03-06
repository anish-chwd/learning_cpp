#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int num_guest ;
    cout << "Enter no of guests : ";
    cin >> num_guest;

    if (num_guest <=0)
    {
        cout << "Number of guests should be at least 1 " << endl;
        return 1;
    }

    string *guests = new string[num_guest];
    cin.ignore();
    for (int i = 0; i < num_guest; i++) {
        cout << "Enter name of guest " << (i+1) << ": ";
        getline(cin, guests[i]);
    }

    cout << endl << "Guests checked in : "<< endl ;
    for (int i = 0; i < 20; i++) {
        cout << "*" ;
    }
    cout << endl;
    for (int i = 0; i < num_guest; i++) {
        cout << guests[i] << endl;
    }

    delete[] guests ;
    
    return 0;
}