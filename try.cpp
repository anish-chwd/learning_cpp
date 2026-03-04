#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name = "anish";
    string last_name = "chowdhury";
    string full_name = first_name.append(last_name);
    cout << full_name << endl;
    cout << full_name.length()<<endl;
    cout << full_name.at(6)<< endl;
    full_name[0] = 'B';
    cout << full_name << endl;
    cout << "hello \"h\ti\" \\lkfjslfj";


    return 0;
}