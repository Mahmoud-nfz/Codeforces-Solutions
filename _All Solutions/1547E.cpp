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
    int t , n , m , i , j , k , x , y ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> k ;
        arr(a,k,0) ;
        tarr(s,n,ll,1e16) ;
        fr(i,0,k)
            cin >> a[i] ;
        fr(i,0,k)
        {
            cin >> x ;
            s[a[i]-1] = x ;
        }
        tarr(l,n,ll,0) ;
        tarr(r,n,ll,0) ;
        fr(i,0,n)
            l[i] = s[i] , r[i] = s[i] ;
        fr(i,1,n)
            l[i] = min(l[i],l[i-1]+1) ;
        fir(i,0,n-2)
            r[i] = min(r[i],r[i+1]+1) ;
        fr(i,0,n)
            cout << min(r[i],l[i]) << " " ;
        cout << endl ;
    }
}