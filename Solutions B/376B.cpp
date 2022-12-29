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
#define mpair make_pair

using namespace std;

int main()
{
    int t , n , m , i , j , k , x , a , b , c ;
    cin >> n >> m ;
    int debt[100] ;
    fr(i,0,n)
    {
        fr(j,0,n)
            debt[i] = 0 ;
    }
    fr(i,0,m)
    {
        cin >> a >> b >> c ;
        a-- ;
        b-- ;
        debt[a] += c ;
        debt[b] -= c ;
    }
    int ans = 0 ;
    fr(i,0,n)
    {
        ans += (debt[i]>0)*(debt[i]) ;
    }
    cout << ans << endl ;
}