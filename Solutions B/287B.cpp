#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

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
typedef long long ll ;


using namespace std;

int main()
{
    ll n , k , l , r , ans ;
    cin >> n >> k ;
    n -- ;
    k -- ;
    l = 1 ;
    r = k ;
    if(n==0)
        cout << 0 << endl ;
    else if((k*(k+1))/2 < n )
        cout << -1 << endl ;
    else if(n <= k)
        cout << 1 << endl ;
    else
    {
        while(l<r)
        {
            ans = (l+r)/2 ;
            if((k*(k+1))/2 -(ans*(ans-1))/2 == n)
                l = ans + 1 , r = ans + 1 ;
            else if((k*(k+1))/2 -(ans*(ans-1))/2 >= n)
                l = ans + 1 ;
            else
                r = ans  ;
            //printf("l : %lld ; r : %lld ;\n",l,r) ;
        }
        cout << k - l + 2 << endl ;
    }
}