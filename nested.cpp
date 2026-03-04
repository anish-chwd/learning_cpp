#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int age, legal_voting_age = 18;
    cout << "input : ";
    cin >> age;
    string out = (age > legal_voting_age)? "eligible"
        :(age == legal_voting_age) ? "exactly 18 eligible"
        :"NOT eligible";
    cout << out ;
    
    return 0;

}