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
    int t , n , m , i , j , k , x , *a ;
    cin >> n ;
    map <int,vi> mp ;
    //a = new int[n] ;
    fr(i,0,n)
    {
        cin >> x ;
        mp[x].pb(i) ;
    }
    set <pairi> ans ;
    for(auto elem : mp)
    {
        if(elem.second.size() == 1)
        {
            ans.insert(make_pair(elem.first,0)) ;
            continue ;
        }
        sort(elem.second.begin(),elem.second.end()) ;
        int p = elem.second[1]-elem.second[0] ;
        for(i = 1 ; i < elem.second.size() - 1 && elem.second[i+1]-elem.second[i] == p ; i++);
        if(i == elem.second.size() - 1)
            ans.insert(make_pair(elem.first,p)) ;
    }
    cout << ans.size() << endl ;
    for(auto elem : ans)
        printf("%d %d\n",elem.first,elem.second) ;

}