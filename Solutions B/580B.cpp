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
#define outA(a,n) fr(_,0,n) cout << a[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

bool comp(pairi x , pairi y)
{
    return x.first < y.first ;
}

int main()
{
    int n , i , j , d ;
    cin >> n >> d ;
    pairi * f = new pairi[n] ;
    fr(i,0,n)
        cin >> f[i].first >> f[i].second ;
    sort(f,f+n,comp) ;
    ll *a = new ll[n+1] ;
    a[0] = 0 ;
    fr(i,1,n+1)
        a[i] = f[i-1].second + a[i-1] ;
    ll * dp = new ll[n] ;
    j = 0 ;
    dp[0] = f[0].second ;

    fr(i,1,n)
    {
        while(f[i].first >= f[j].first + d)
            j ++ ;
        dp[i] = a[i+1] - a[j] ;
    }
    cout << *max_element(dp,dp+n) << endl ;
    
}