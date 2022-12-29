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

using namespace std;

int par[50] {} ;

int parent(int x)
{
    while(par[x] != x)
        x = par[x] ;
    return x ;
}
void uni(int x, int y)
{
    x = parent(x) ; y = parent(y) ;
    par[x] = y ;
}

int main()
{
    int t , n , m , i , j , k , x , y , *a ;
    fr(i,0,50)
        par[i] = i ;
    cin >> n >> m ;
    fr(i,0,m)
    {
        cin >> x >> y ; --x ; --y ;
        uni(x,y) ;
    }
    ll ans = 1ll << n ;
    fr(i,0,n)
    {
        if(par[i] == i)
            ans /= 2 ;
    }
    cout << ans << endl ;
}