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
    int t , n , m , xc , yc , i , j , k , x , dx , dy ;
    cin >> n >> m ;
    cin >> xc >> yc ;
    xc -- ;
    yc -- ;
    ll ans = 0 ;
    cin >> k ;
    fr(i,0,k)
    {
        //cout << "b" ;
        cin >> dx >> dy ;
        int ax = 1e9+7 , ay = 1e9+7 , a ;
        //cout << "c" ;
        if(dx > 0)
            ax = (n-xc)/dx - ((n-xc)%dx == 0) ;
        if(dx < 0)
            ax = -xc/dx ;
        //cout << "d" ;
        if(dy > 0)
            ay = (m-yc)/dy - ((m-yc)%dy == 0) ;
        if(dy < 0)
            ay = -(yc/dy) ;
        a = min(ax,ay) ;
        ans += a ;
        //printf("xc : %d\tyc : %d \n %d %d\n",xc,yc,n,m) ;
        //printf("ax : %d\tay:%d\n",ax,ay) ;
        xc += a*dx ;
        yc += a*dy ;
        //cout << "a" ;
    }
    cout << ans << endl ;
}
