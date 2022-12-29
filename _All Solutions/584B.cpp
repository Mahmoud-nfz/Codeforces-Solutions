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
    int t , n , m , i , j , k , x , *a ;
    cin >> n ;
    //3^(3n) - 7^n
    //27^n - 7 ^n
    ll ans1 = 1 , ans2 = 1 , mod = 1e9+7 ;
    while(n--)
        ans1 = (ans1 * 27) % mod , ans2 = (ans2 * 7) % mod ;
    ll ans = (ans1 - ans2) % mod ;
    if(ans < 0)
        ans += mod ;
    cout << ans << endl ;
}