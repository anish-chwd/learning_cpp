#include "factorial.h"
int factorial(int count){
    int ans;
    ans = 1;
    for (count; count > 0; count--)
    {
        ans = ans * count ;
        //cout << count << "::" << ans << endl ;

    }
    return ans;
    
}