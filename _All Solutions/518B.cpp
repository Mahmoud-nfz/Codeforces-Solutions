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
#define tarr(a,n,typ,val) typ *a = new typ[n] ; fr(i,0,n) a[i] = val
#define arr(a,n,val) tarr(a,n,int,val)
#define tmatrix(M,n,m,typ) typ**M = new typ*[n] ; fr(i,0,n) M[i] = new typ[m]
#define matrix(M,n,m) tmatrix(M,n,m,int)
#define outA(a,n) fr(_,0,n) cout << a[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

int main()
{
    string s , t ;
    cin >> s >> t ;
    map <char,pairi> m ;
    for(auto c : s)
        m[c].first ++ ;
    for(auto c : t)
        m[c].second ++ ;
    int ans1 = 0 , ans2 = 0 ;
    
    for(map <char,pairi> :: iterator elem = m.begin() ; elem != m.end() ; elem++)
    {
        int x = min(elem->second.first,elem->second.second) ;
        ans1 += x ;
        elem->second.first -= x ;
        elem->second.second -= x ;
    }
    for(auto elem : m)
    {
        //cout << elem.first << " " << elem.second.first << " " << elem.second.second << endl ;
        if(elem.first >= 'A' && elem.first <= 'Z')
        {
            ans2 += min(elem.second.first,m[(char)(elem.first-'A'+'a')].second) ;
        }
        if(elem.first >= 'a' && elem.first <= 'z')
        {
            ans2 += min(elem.second.first,m[(char)(elem.first-'a'+'A')].second) ;
        }
    }
    cout << ans1 << " " << ans2 << endl ;

}