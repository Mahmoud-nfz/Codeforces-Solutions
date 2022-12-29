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
        set<pairi> s ;
        fr(i,0,n)
        {
            cin  >> x ;
            if(x>0)
                s.insert(make_pair(x,i+1)) ;
        }
        ll ans = 0 ;
        multiset <pairi> s1 ;
        while(s.size()>1)
        {
            pairi e = *s.rbegin() ;
            s.erase(e) ;
            pairi e1 = *s.rbegin() ;
            s.erase(e1) ;
            s1.insert(make_pair(e.second,e1.second)) ;
            e.first -- ;
            e1.first -- ;
            if(e.first>0)
                s.insert(e) ;
            if(e1.first>0)
                s.insert(e1) ;
            ans ++ ;
        }
        cout << ans << endl ;
        for(auto c : s1)
            cout << c.first << " " << c.second << endl ;
    }
}