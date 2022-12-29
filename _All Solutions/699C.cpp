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

int M[100][3] ;

int dp(int* a , int i , int n , int prev)
{
    if(M[i][prev] != -1)
        return M[i][prev] ;
    if(i == n-1)
        M[i][prev] = (a[i] == 0 || a[i] == prev)  ;
    else if(a[i] ==  3)
    {
        if(prev == 0)
            M[i][prev] = min(dp(a,i+1,n,1),dp(a,i+1,n,2)) ;
        else
            M[i][prev] = dp(a,i+1,n,-prev+3) ;
    }
    else if(a[i] == prev || a[i] == 0)
        M[i][prev] = 1 + dp(a,i+1,n,0) ;
    else 
        M[i][prev] = dp(a,i+1,n,a[i]) ;
    return M[i][prev] ;
}

int main()
{
    int t , n , m , i , j , k , x , a[100] ;
    cin >> n ;
    fr(i,0,n)
    {
        fr(j,0,3)
            M[i][j] = -1 ;
    }
    fr(i,0,n)
        cin >> a[i] ;
    cout << dp(a,0,n,0) << endl ;
}