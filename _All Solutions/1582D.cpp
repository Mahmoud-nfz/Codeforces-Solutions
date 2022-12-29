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
        cin >> n ;
        arr(a,n,0) ;
        fr(i,0,n)
            cin >> a[i] ;
        arr(b,n,0) ;
        m = n - 3*(n%2) ;
        fr(i,0,m/2)
        {
            b[2*i] = a[2*i+1] ;
            b[2*i+1] = -a[2*i] ;
        }
        if(n%2)
        {
            if(a[n-2]+a[n-3] != 0)
                b[n-3] = a[n-1] , b[n-2] = a[n-1] , b[n-1] = -(a[n-2]+a[n-3]) ;
            else if(a[n-2]+a[n-1] != 0)
                b[n-3] = -(a[n-2]+a[n-1]) , b[n-2] = a[n-3] , b[n-1] = a[n-3] ;
            else
                b[n-3] = a[n-2] , b[n-2] = -(a[n-1]+a[n-3]) , b[n-1] = a[n-2] ;
        }
        outA(b,n) ;
    }
}