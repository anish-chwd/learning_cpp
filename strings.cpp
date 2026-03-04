#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int age = 30, legal_voting_age = 18;
    cout << boolalpha;
    cout << ((age > legal_voting_age) ? "you are eligible to vote" : "you are NOT eligible to vote");
    
    
    return 0;

}