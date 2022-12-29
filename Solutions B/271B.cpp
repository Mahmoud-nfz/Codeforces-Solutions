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



int main()
{
    // #warning TODO : comment out freopen
    // freopen("in","r",stdin) ;
    // freopen("out","w",stdout) ;
    int t , n , m , i , j , k , x , y ;

    int MAX = 1e5+5;
    vector<bool> is_prime(MAX+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                is_prime[j] = false;
        }
    }
    seti primes ;
    fr(i,0,MAX){
        if(is_prime[i])
            primes.insert(i) ;
    }

    vector<int> nex_prime(MAX+1, 0);
    fr(i,0,MAX)
        nex_prime[i] = *primes.lower_bound(i) ;



    cin >> n >> m ;
    matrix(M,n,m) ;
    fr(i,0,n){
        fr(j,0,m){
            cin >> M[i][j] ;
        }
    }
    tarr(cols,m,ll,0) ;
    tarr(rows,n,ll,0) ;
    fr(i,0,n){
        fr(j,0,m){
            rows[i] += nex_prime[M[i][j]] - M[i][j] ;
            cols[j] += nex_prime[M[i][j]] - M[i][j] ;
        }
    }

    ll ans = 1e18 ;
    fr(i,0,n){
        fr(j,0,m){
            ans = min(ans,rows[i]) ;
            ans = min(ans,cols[j]) ;
        }
    }
    cout << ans << endl ;

}