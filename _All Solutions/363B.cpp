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
    int t , n , i , k , x , *a ;
    cin >> n >> k ;
    a = new int[n+1] ;
    a[0] = 0 ;
    fr(i,1,n+1)
    {
        cin >> a[i] ;
        a[i] += a[i-1] ;
    }
    int ans = 0 , sum = 1e9 ;
    fr(i,0,n+1)
    {
        if(i+k >= n+1)
            break ;
        if(a[i+k] - a[i] < sum)
        {
            ans = i ;
            sum = a[i+k] - a[i] ;
        }
    }
    cout << ans+1 << endl ;
}