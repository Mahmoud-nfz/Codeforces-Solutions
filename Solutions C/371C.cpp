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
    int nb , ns , nc , pb , ps , pc ;
    ll money , l = 0 , r = 1e13 ;
    string s ;
    cin >> s ;
    cin >> nb >> ns >> nc ;
    cin >> pb >> ps >> pc ;
    cin >> money ;
    int hb = 0 , hs = 0 , hc = 0 ;
    for(char c : s)
        hb += c == 'B' , hs += c == 'S' , hc += c == 'C' ;
    while(l < r)
    {
        ll md = ceil(1.0*(r+l) / 2) ;
        ll price = max(0ll,md*hb-nb)*pb + max(0ll,md*hs-ns)*ps + max(0ll,md*hc-nc)*pc ;
        if(price <= money)
            l = md;
        else
            r = md-1 ;
        //cout << l << " " << r << endl ;
    }
    cout << l ;
}