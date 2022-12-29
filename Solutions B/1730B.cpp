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

#include <iomanip>
using namespace std;

int main()
{
    // #warning TODO : comment out freopen
    // freopen("in","r",stdin) ;
    // freopen("out","w",stdout) ;
    ll q , n , m , i , j , k ,  y ;
    cin >> q ;
    while(q--)
    {
        cin >> n ;
        ll sum = 0 ;
        tarr(x,n,ll,0) ;
        tarr(t,n,ll,0) ;
        fr(i,0,n){
            cin >> x[i] ;
            sum += x[i] ;
        }
        double c = (double) sum / n ;
        double time = c , temp ;
        fr(i,0,n){
            cin >> t[i] ;
            temp = max(temp,max((double)0,(double)t[i]-abs(x[i] - c))) ;
        }
        // // fprintf("%f",time+temp) ;
        // cout << c << endl ;

        double step = 1e8 , curr = 0 , eps = 0.0000008 ;
        while(step > 0.0000002){
            double f = curr + eps , s = curr - eps ;
            double fs = 0, ss = 0 ;
            fr(i,0,n){
                fs = max(fs,(double)t[i] + abs(x[i] - f)) ;
                ss = max(ss,(double)t[i] + abs(x[i] - s)) ;
            }
            if(fs > ss){
                curr -= step ;
            }
            else{
                curr += step ;
            }
            step /= 2 ;

        }
        // setprecision(-8) ;
        // cout  << curr << endl ;
        printf("%.8f\n",curr) ;

        
    }
}