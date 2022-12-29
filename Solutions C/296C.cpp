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
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); 
    cout.tie(NULL); 
    int n , m , i , j , k , x , y ;
    cin >> n >> m >> k ;
    arr(a,n,0) ;
    fr(i,0,n)
        cin >> a[i] ;
    arr(l,m,0) ;
    arr(r,m,0) ;
    tarr(d,m,ll,0ll) ;
    fr(i,0,m)
        cin >> l[i] >> r[i] >> d[i] ;
    arr(q1,m+1,0) ;
    arr(q2,m+1,0) ;
    fr(i,0,k)
    {
        cin >> x >> y ;
        q1[x] += 1 ;
        q2[y] += 1 ;
    }
    fr(i,1,m+1)
        q1[i] += q1[i-1] , q2[i] += q2[i-1] ;
    fr(i,0,m)
        d[i] *= 1ll*q1[i+1] - q2[i] ;
    tarr(pref1,n+1,ll,0ll);
    tarr(pref2,n+1,ll,0ll);
    fr(i,0,m)
        pref1[l[i]] += d[i] , pref2[r[i]] += d[i] ;
    fr(i,1,n+1)
        pref1[i] += pref1[i-1] , pref2[i] += pref2[i-1] ;
    fr(i,0,n)
        cout << a[i] + pref1[i+1] - pref2[i] << " " ;
    cout << endl ; 


}