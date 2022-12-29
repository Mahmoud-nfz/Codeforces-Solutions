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
#define tarr(a,n,typ,val) typ *a = new typ[n] ; fr(i,0,n) a[i] = val
#define arr(a,n,val) tarr(a,n,int,val)
#define tmatrix(M,n,m,typ) typ**M = new typ*[n] ; fr(i,0,n) M[i] = new typ[m]
#define matrix(M,n,m) tmatrix(M,n,m,int)
#define outA(a,n) fr(_,0,n) cout << a[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

int main()
{
    int t , n , m , i , j , k ;
    cin >> n ;
    map <pairi,int> s ;
    mapi x , y ;
    while(n--)
    {
        cin >> i >> j ;
        s[make_pair(i,j)] ++ ;
        x[i] ++ ;
        y[j] ++ ;
    }
    ll ans = 0 ;
    for(auto elem : x)
        ans += (1ll*elem.second*(elem.second-1))/2 ;
    for(auto elem : y)
        ans += (1ll*elem.second*(elem.second-1))/2 ;
    int dup = 0 ;
    for(auto elem : s)
        ans -= (1ll*elem.second*(elem.second-1))/2 ;
    cout << ans << endl ;

}