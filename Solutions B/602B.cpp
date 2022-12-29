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
#define arr(a,n) a = new int[n] 

using namespace std;

int main()
{
    int t , n , m , i , j , k , x , y , *a , *dp[2];
    cin >> n ;
    arr(a,n) ;
    arr(dp[0],n) ;
    arr(dp[1],n) ;
    fr(i,0,n)
        cin >> a[i] ;
    fr(i,0,n)
    {
        dp[0][i] = dp[1][i] = 1 ;
    }
    fr(i,1,n)
    {
        if(a[i]==a[i-1])
        {
            dp[0][i] += dp[0][i-1] ;
            dp[1][i] += dp[1][i-1] ;
        }
        if(a[i]<a[i-1])
        {
            dp[0][i] += dp[1][i-1] ;
        }
        if(a[i]>a[i-1])
        {
            dp[1][i] += dp[0][i-1] ;
        }
    }
    int ans = max(*max_element(dp[0],dp[0]+n),*max_element(dp[1],dp[1]+n)) ;
    cout << ans << endl ;

}