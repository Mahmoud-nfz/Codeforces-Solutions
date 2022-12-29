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
        cin >> n >> m ;
        matrix(M,n,m) ;
        matrix(pref,n,m) ;
        fr(i,0,n)
            fr(j,0,m)
                cin >> M[i][j] ;
        // calculating prefix sums matrix
        pref[0][0] = M[0][0] ;
        fr(i,1,m)
            pref[0][i] = pref[0][i-1] + M[0][i] ;
        fr(i,1,n)
            pref[i][0] = pref[i-1][0] + M[i][0] ;
        fr(i,1,n)
        {
            fr(j,1,m)
            {
                pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + M[i][j] ;
            }
        }
        10000
        11111
        00000
        11000
        00000
        
        int ans = 1e9 ;
        fr(i,0,n)
        {
            fr(j,0,m)
            {
                fr(k,i+4,n)
                {
                    fr(l,j+3)
                }
            }
        }

        
    }
}