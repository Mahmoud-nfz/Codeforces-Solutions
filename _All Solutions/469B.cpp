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
    int t , n , i , j , p , q , l , r , a[50] , b[50] , c[50] , d[50] ;
    cin >> p >> q >> l >> r ;
    fr(i,0,p)
        cin >> a[i] >> b[i] ;
    fr(i,0,q)
        cin >> c[i] >> d[i] ;
    int ans  = 0 ;
    fr(t,l,r+1)
    {
        i = 0 ; j = 0 ;
        while(i < p && j < q)
        {
            if(b[i] < c[j]+ t)
                i++ ;
            else if (d[j] + t < a[i])
                j ++ ;
            else
            {
                ans ++ ;
                break ;
            }
        }
    }    
    cout << ans << endl ;
}