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
#define arr(a,n,val) a = new int[n] ; fr(i,0,n) a[i] = val
#define matrix(M,n,m) M = new int*[n] ; fr(i,0,n) M[i] = new int[m]
#define outA(a,n) fr(_,0,n) cout << a[_] ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

int main()
{
    int t , n , m , i , j , k , x , y , *a ;
    cin >> n ;
    int f[2002] {} , s[2002] {} ;
    while(n--)
    {
        cin >> x >> y ;
        if(x>=y)
        {
            f[x-y] ++ ;
        }
        else
        {
            f[1000+y-x] ++ ;
        }
        if(1000-y>=x)
        {
            s[y+x] ++ ;
        }
        else
        {
            s[1000 + x - (1000-y)] ++ ;
        }
    }
    ll ans = 0 ;
    fr(i,0,2002)
    {
        x = f[i] , y = s[i] ;
        ans += x*(x-1)/2 + y*(y-1)/2 ;
    }
    cout << ans << endl ;
}