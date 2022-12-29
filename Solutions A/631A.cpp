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
    int t , n , m , i , j , k , x  , y , a[1000] , b[1000] ;
    cin >> n ;
    fr(i,0,n)
        cin >> a[i] ;
    fr(i,0,n)
        cin >> b[i] ;
    int ans = 0 ;
    fr(i,0,n)
    {
        x = 0 ;
        y = 0 ;
        fr(j,i,n)
        {
            x |= a[j] ;
            y |= b[j] ;
            ans = max(ans, x + y) ;
        }
    }
    cout << ans << endl ;
    
}