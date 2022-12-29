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
    cin >> n ;
    a = new int[n] ;
    fr(i,0,n)
        cin >> a[i] ;
    int hr[1000] , hl[1000] ;
    hr[n-1] = n-1 ;
    hl[0] = 0 ;
    fir(i,0,n-2)
    {
        if(a[i]>=a[i+1])
            hr[i] = hr[i+1] ;
        else
            hr[i] = i ;
    }
    fr(i,1,n)
    {
        if(a[i]>=a[i-1])
            hl[i] = hl[i-1] ;
        else
            hl[i] = i ;
    }
    int ans  = 0 ;
    fr(i,0,n)
        ans = max(ans,hr[i] - hl[i] + 1) ;
    cout << ans << endl ;

}