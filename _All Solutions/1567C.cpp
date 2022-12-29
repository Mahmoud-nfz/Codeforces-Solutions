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

mapi dp ;
int mx = 0;
ll dpf(int n)
{
    cout << mx ++<< " " ;
    if(n==0)
        return 1ll ;
    if(dp.find(n) != dp.end())
        return dp[n] ;
    int a = 0 , b = 0 ;
    fr(i,0,10)
    {
        a += (n%2 - i >= 0) ;
        b += ((n%2 + 10 -i < 10) && n>=10) ;
    }
    dp[n] = a*(dpf(n/10)) + b*dpf(n/10-1) ;
    return dp[n] ;
}

int main()
{
    int t , n , m , i , j , k , x , y ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        cout << dpf(n) << endl ;
    }
}