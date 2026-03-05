#include <iostream>
#include <string>
#include "factorial.h"

using namespace std;

int check_factorial(int n)
{
    int result = 1;

    for(int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int main(){

    
    for (int i = 0; i < 20; i++)
    {
        if (factorial(i) == check_factorial(i))
        {
            cout << "\033[32mTEST CASE : \033[0m"<< i << "\033[32m :: PASSED\033[0m";
        }
        else if (factorial(i) != check_factorial(i))
        {
            cout<< "\033[31mTEST CASE : \033[0m"<< i << "\033[31m :: FAILED\033[0m";
        }
        
        
    }
    return 0;
    
}

