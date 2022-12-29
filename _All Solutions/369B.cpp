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
    int t , n , m , i , j , k , x , y , l , r , s_all , sk ;
    cin >> n >> k >> l >> r >> s_all >> sk ;
    int one = sk/k , two = (s_all-sk)/(n-k) ;
    int rest = sk % k ;
    fr(i,0,k)
    {
        x = one ;
        if(rest)
        {
            x ++ ;
            rest -- ;
        }
        cout << x << " " ;
    }
    if(n==k)
        return 0 ;
    rest = (s_all-sk)%(n-k) ;
    fr(i,k,n)
    {
        x = two ;
        if(rest)
        {
            x ++ ;
            rest -- ;
        }
        cout << x << " " ;
    }
    cout << endl ;
}