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
    int t , n , i , k , x , m , *b ;
    cin >> n ;
    mapi mp ;
    fr(i,0,n)
    {
        cin >> x ;
        mp[x] = i ;
    }
    cin >> m ;
    b = new int[m] ;
    ll ans1 = 0 , ans2 = 0 ;
    fr(i,0,m)
        cin >> b[i] ;
    fr(i,0,m)
        ans1 += mp[b[i]] + 1 , ans2 += n - mp[b[i]] ;
    cout << ans1 << " " << ans2 << endl ;
    //for(auto elem : mp)
    //    printf("1. %d ; 2. %d\n",elem.first,elem.second) ;
}