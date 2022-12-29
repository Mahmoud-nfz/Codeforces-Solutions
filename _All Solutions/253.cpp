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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t , n , m , i , j , k , x , *a , f , l ;
    cin >> n ; 
    a = new int[n] ;
    fr(i,0,n)
        cin >> a[i] ;
    sort(a,a+n) ;
    int ans = 1e5+9 , sum ;
    fr(_min,1,5001)
    {
        sum = 0 ;
        f = 0 ;
        l = n-1 ;
        while(f <= l && a[f++] < _min)
            sum ++ ;
        f-- ;
        while(f <= l && a[l--] > 2*_min)
            sum ++ ;
        ans = min(ans,sum) ;
    }
    cout << ans << endl ;
}