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
        arr(g,n,0) ;
        seti s , r ;
        fr(i,0,n)
            s.insert(i) , g[i] = i ;
        fr(i,0,n)
        {
            cin >> a[i] ;
            a[i] -- ;
            s.erase(a[i]) ;
            g[a[i]] = i ;
        }
        arr(b,n,-1) ;
        k = n - s.size() ;
        fr(i,0,n)
        {
            if(g[i] != i)
                b[g[i]] = i+1 ;
        }
        fr(i,0,n)
        {
            if(b[i] == -1)
            {
                auto e = s.begin() ;
                if(b[i] != *e)
                    b[i] = 1+*e , s.erase(e) ;
                else
                    b[i] = 1 +*(++e) , s.erase(e) ;
            }

        }
        cout << k << endl ;
        outA(b,n) ;

    }
}