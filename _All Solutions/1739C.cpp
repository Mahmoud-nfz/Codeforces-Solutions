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
#define outA(a,n) fr(_,0,n) cout << (a)[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA((M)[__],m) ; }
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

const int MAX = 105 ;
const int MOD = 998244353 ;
int mat[MAX][MAX];

int pascal(int m, int n) {
    int i, j;
    if (n > m) return 0;
    if( (n == 0) || (m == n) ) return 1;
    if(mat[m][n] != -1)
        return mat[m][n] ;
    return mat[m][n] = (pascal(m - 1, n) + pascal(m - 1, n - 1)) % MOD;
}
 
int main()
{
    // #warning TODO : comment out freopen
    // freopen("in","r",stdin) ;
    // freopen("out","w",stdout) ;
    int t , n , m , i , j , k , x , y ;
    fr(i,0,MAX){
        fr(j,0,MAX){
            mat[i][j] = -1 ;
        }
    }
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        int a = 0 , b = 0 , rema = n/2 , remb = n/2 ;
        fr(i,0,n){
            if(i%4 == 0 || i%4 == 3){
                a += pascal(n-i-1,rema-1) ;
                a %= MOD ;
                remb -- ;
            }
            else{
                b += pascal(n-i-1,remb-1) ;
                b %= MOD ;
                rema -- ;
            }
        }
        cout << a << " " << b << " 1" << endl ;
        
    }
}