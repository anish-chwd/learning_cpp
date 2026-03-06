#include <iostream>
#include <string>
#include <vector>
using namespace std;

// void modify_string(string &str){
//     str += " THE ROOKIE";
// }

void num_print(int numbers[9]){
    for (int i = 0; i < 9; i++) {
        cout << numbers[i] << endl;
    }
}


int main(){
    // string str = "hello world";
    // modify_string(str);
    // cout << str<<endl;
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    // cout << sizeof(numbers) << endl;
    num_print(numbers);

    return 0;
}