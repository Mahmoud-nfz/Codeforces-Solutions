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

int main()
{
    ll t , n , i , k , x , *v , *a , m , l , r ;
    cin >> n ;
    v = new ll[n+1] ;
    a = new ll[n+1] ;
    v[0] = 0 ;
    a[0] = 0 ;
    fr(i,1,n+1)
    {
        cin >> v[i] ;
        a[i] = v[i] ;
    }
    sort(a,a+n+1) ;
    fr(i,1,n+1)
    {
        v[i] += v[i-1] ;
        a[i] += a[i-1] ;
    }
    cin >> m ;
    fr(i,0,m)
    {
        cin >> x >> l >> r ;
        if(x==1)
            cout << v[r]-v[l-1] << endl ;
        else
            cout << a[r]-a[l-1] << endl ;
    }
    //fr(i,0,n+1)
    //    cout << v[i] << " " ;
}