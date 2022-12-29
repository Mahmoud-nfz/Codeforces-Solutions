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
    int t , n , m , i , j , k , x0 , y0, x , y ;
    cin >> n >> x0 >> y0 ;
    map <pairi,int> mp ;
    fr(i,0,n)
    {
        cin >> x >> y ;
        x -= x0 ;
        y -= y0 ;
        m = __gcd(x,y) ;
        mp[{x/m,y/m}] ++ ;
    }
    cout << mp.size() << endl ;

}