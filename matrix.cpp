#include <iostream>
#include <string>
using namespace std;
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Toyota"};
    int num[] = {0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 10; i++)
    {
        cout << num[i];
        if (i < 4)
        {
            cout << " " << cars[i] ;
        }
        cout << endl;
    }

    cars[0] = "Audi";
    cars [3] = "TATA";
    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << endl ;
    }
    
    

    return 0;
}
