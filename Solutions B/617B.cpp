#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

typedef long long ll ;

#define pairi pair <int,int>
#define pairll pair <long long,long long>
#define vi vector <int> 
#define vll vector <long long> 
#define mapi map <int,int> 
#define mapill map <int,long long> 
#define seti set <int> 
#define setll set <long long> 
#define pb push_back
#define fr(i,a,b) for(int i = a ; i < b ; i++)
#define fir(i,a,b) for(int i = b ; i >= a ; i--)

using namespace std;

int main()
{
    int t , n , m , i , j , k , x , a[100] ;
    cin >> n ;
    x = 0 ;
    fr(i,0,n)
    {
        cin >> a[i] ;
        x += a[i] ;
    }
    if(!x)
    {
        cout << 0 << endl ;
        return 0 ;
    }

    i = 0 ;
    ll ans = 1 ;
    while(i < n && !a[i])
        i++ ;
    while(n > 0 && !a[n-1])
        n-- ;
    while(i<n)
    {
        x = 1 ;
        while(i < n && !a[i++])
            x ++ ;
        //cout << i << endl ;
        ans *= 1ll*x ;
    }
    cout << ans << endl ;
}