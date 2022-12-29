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
#define arrv(a,n,val) tarr(a,n,int,val)
#define arr(a,n) tarr(a,n,int,0)
#define tmatrix(M,n,m,typ) typ**M = new typ*[n] ; fr(i,0,n) M[i] = new typ[m]
#define matrix(M,n,m) tmatrix(M,n,m,int)
#define outA(a,n) fr(_,0,n) cout << a[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

bool comp(pairi x , pairi y)
{
    return x.second < y.second ;
}

int main()
{
    int t , n , m , i , j , r , k , x , y ;
    ll avg , sum = 0 , ans = 0 ;
    cin >> n >> r >> avg ;
    avg *= 1ll*n ; 
    tarr(a,n,pairi,make_pair(0,0)) ;
    fr(i,0,n)
    {
        cin >> a[i].first >> a[i].second ;
        sum += a[i].first ;
    }
    sort(a,a+n,comp) ;
    i = 0 ;
    while(sum < avg)
    {
        x = min(avg-sum,1ll*r-a[i].first) ;
        ans += 1ll*x*a[i].second ;
        sum += x ;
        i++ ;
    }
    cout << ans << endl ;
}