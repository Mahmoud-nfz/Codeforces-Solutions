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
    int n , i , k , x , a , t[103] ;
    cin >> n >> a ;
    a -- ;
    fr(i,0,n)
        cin >> t[i] ;
    int ans = 0 ;
    ans += t[a] ;
    fr(i,1,n)
    {
        x = ((a + i < n) + (a - i >= 0)) ;
        if((a + i < n))
            x *= t[a+i] ;
        if(a - i >= 0)
            x *= t[a-i] ;
        ans += x ;
    }
    cout << ans << endl ;

}