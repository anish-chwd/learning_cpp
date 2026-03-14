#include "factorial.h"

int factorial(int n){
    int ans;
    ans = 1;
    for (n; n > 0; n--)
    {
        ans = ans * n ;
        //cout << count << "::" << ans << endl ;

    }
    return ans;
}