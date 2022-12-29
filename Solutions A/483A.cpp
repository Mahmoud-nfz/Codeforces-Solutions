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
#define fr(i,a,b) for(ll i = a ; i < b ; i++)
#define fir(i,a,b) for(int i = b ; i >= a ; i--)


using namespace std;

int main()
{
    ll t , n , i , k , x , l , r , a , b , c ;
    t = 1 ;
    while(t--)
    {
        cin >> l >> r ;
        fr(a,l,r+1)
        {
            fr(b,a+1,r+1)
            {
                fr(c,b+1,r+1)
                {
                    if(a!=b && a!=c && b!=c && __gcd(a,b) == 1 && __gcd(b,c) == 1 && __gcd(a,c) != 1)
                    {
                        ll tab[3] = {a,b,c} ;
                        sort(tab,tab+3) ;
                        printf("%lld %lld %lld\n",tab[0],tab[1],tab[2]) ;
                        return 0 ;
                    }
                }
            }
        }
        cout << -1 << endl ;
    }
}