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
#define yes(check) cout << (check ? "YES" : "NO") << endl

using namespace std;

void solve(){
    ll a,b,c,d,x,y ;
    cin >> a >> b >> c >> d ;
    if(a*b == 1){
        cout << a+1 << " " << b+1 << endl ;
        return ;
    }
    fr(i,a+1,c+1){
        cout << "here : " << i << endl ;
        x = i ;
        if(x % (a*b) == 0){
            cout << x << " " << b+1 << endl ;
            return ;
        }
        cout << a*b <<  "here : " << i << endl ;
        x = (x % (a*b)) ;
        if((a*b) % x)
            continue;
        cout << "here : " << i << endl ;
        y = (a*b)/x ;
        y = (d/y)*y ;

        cout << "now : " << i << endl ;

        if(y > b){
            cout << i << " " << y << endl ;
            return ;
        }
    }
    cout << -1 << " " << -1 << endl ;
}

int main()
{
    #warning TODO : comment out freopen
    freopen("in","r",stdin) ;
    freopen("out","w",stdout) ;
    ll t , n , m , i , j , k , x , y ;
    cin >> t ;
    while(t--)
    {
        solve() ;
    }
}