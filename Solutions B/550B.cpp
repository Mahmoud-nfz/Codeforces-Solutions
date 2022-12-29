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
    int t , n , m , i , j , k , x , y , a[15] , l , r ;
    cin >> n >> l >> r >> x ;
    fr(i,0,n)
        cin >> a[i] ;
    int temp = 3 ;
    ll ans = 0 ;
    while(temp < (1 << n))
    {
        int mm = 1e9 , MM = 0 , nb = 0 , diff = 0 ;
        i = temp ;
        j = 0 ;
        while(i)
        {
            if(i&1)
            {
                mm = min(mm,a[j]) ;
                MM = max(MM,a[j]) ;
                nb ++ ;
                diff += a[j] ;
            }
            j ++ ;
            i /= 2 ;
        }
        if(diff >= l && diff <= r && MM-mm >= x && nb >= 2)
            ans ++ ;
        temp ++ ;
    }
    cout << ans << endl ;
}