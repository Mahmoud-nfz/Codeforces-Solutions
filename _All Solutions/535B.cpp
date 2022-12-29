#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int len = 0 , ans = 0 ;
    while(n)
    {
        if(n%10 == 7)
            ans += (1<<len) ;
        len ++ ;
        n /= 10 ;
    }
    for(int i = 1 ; i < len ; i++)
    {
        ans += (1<<i) ;
    }
    cout << ans+1 << endl ;
}