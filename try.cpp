#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name = "anish";
    string last_name = "chowdhury";
    string full_name = first_name.append(last_name);
    cout << full_name << endl;
    cout << full_name.length() ;

    return 0;
}