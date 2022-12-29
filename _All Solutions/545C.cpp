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

int n , x[100000] , h[100000] ;

int main()
{
    int t , m , i , j , k , *a ;
    cin >> n ;
    fr(i,0,n)
        cin >> x[i] >> h[i] ;
    int ans = 1 + (n>1) , prev = x[0] ;
    fr(i,1,n-1)
    {
        if(x[i]-h[i] > prev)
        {
            prev = x[i] ;
            ans ++ ;
        }
        else if(x[i]+h[i] < x[i+1])
        {
            prev = x[i] + h[i] ;
            ans ++ ;
        }
        else
            prev = x[i] ;
    }
    cout << ans << endl ;
}