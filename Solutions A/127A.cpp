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
    int t , n , i , k , x , y , x1 , y1 , *a ;
    float ans ;
    t = 1 ;
    while(t--)
    {
        ans = 0 ;
        cin >> n >> k ;
        cin >> x >> y ;
        fr(i,0,n-1)
        {
            cin >> x1 >> y1 ;
            ans += sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)) ;
            x = x1 ;
            y = y1 ;
        }
        ans *= k ;
        ans = ans / 50 ;
        printf("%8f",ans) ;
    }
}