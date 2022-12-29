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
    int t , n , m , i , j , k , l , r , x , y ;
    cin >> n >> m ;
    arr(winner,n+1,0) ;
    seti s ;
    fr(i,1,n+1)
        s.insert(i) ;
    fr(i,0,m)
    {
        cin >> l >> r >> x ;
        auto fl = s.lower_bound(l) ;
        auto fr = s.upper_bound(r) ;
        seti temp ;
        for(auto elem = fl ; elem != fr ; elem ++)
        {
            winner[*elem] = x ;
            if(*elem!=x)
                temp.insert(*elem) ;
        }
        for(auto o : temp)
            s.erase(o) ;
    }
    //outA(winner,n+1) ;
    
    fr(i,1,n+1)
    {
        if(winner[i]==i)
            winner[i] = 0 ;
        cout << winner[i] << " " ;
    }
    
    cout << endl ;
}
