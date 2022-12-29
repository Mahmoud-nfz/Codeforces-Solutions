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
    int t , n , i , f ,  j , *k , *l , x , *a ;
    cin >> n >> f ;
    k = new int[n] ;
    l = new int[n] ;
    a = new int[n] ;
    ll ans = 0 ;
    fr(i,0,n)
    {
        cin >> k[i] ;
        cin >> l[i] ;
        ans += min(k[i],l[i]) ;
        a[i] = 0 ;
        if(l[i] > k[i])
            a[i] += min(l[i],2*k[i]) - k[i] ;
    }
    sort(a,a+n) ;
    reverse(a,a+n) ;
    i = 0 ;
    while(f--)
        ans += a[i++] ;
    cout << ans << endl ;


}