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
    cin >> n >> k ;
    set <pairi> s ;
    fr(i,0,n)
    {
        cin >> x ;
        s.insert(make_pair(x,i+1)) ;
    }
    tarr(moves,10001,pairi,make_pair(0,0)) ;
    arr(vals,1001,0) ;
    vals[0] = s.rbegin()->first - s.begin()->first ;
    fr(i,0,k)
    {
        pairi p1 = *s.rbegin() , p2 = *s.begin() ;
        s.erase(p1) ;
        s.erase(p2) ;
        p1.first -- ;
        p2.first ++ ;
        s.insert(p1) ;
        s.insert(p2) ;
        vals[i+1] = s.rbegin()->first - s.begin()->first ;
        moves[i] = make_pair(p1.second,p2.second) ;
    }
    x = min_element(vals,vals+k+1) - vals ;
    i = x ;
    while(i >= 0 && vals[i] == vals[x])
    {
        i -- ;
    }
    cout << vals [i+1] << " " << i + 1 << endl ;
    fr(j,0,i+1)
        cout << moves[j].first << " " << moves[j].second << endl ;
}