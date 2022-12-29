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
    int t , n , m , i , j , k , x , y , a ;
    cin >> a >> x >> y ;
    n = y/a ;
    if(abs(x) >= a || !(y%a) || (n < 2 && 2*abs(x) >= a))
    {
        cout << -1 << endl ;
        return 0 ;
    }
    if(n < 2)
    {
        cout << n + 1 << endl ;
        return 0 ;
    }
    int temp = (n-2) % 2 ;
    t = (n - 1) / 2 ;
    if((temp && 2*abs(x) >= a) || (!temp && x == 0))
    {
        cout << -1 << endl ;
        return 0 ;
    }
    int ans = n + t ;
    if(temp)
    {
        cout << ans + 1 << endl ;
        return 0 ;
    }
    if(x > 0)
        cout << ans + 2 ;
    else
        cout << ans + 1 ;
    cout << endl ;

}