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

vector <pairi> graph [103] ;
int visited[103] {} ;
int dfs(int a , int b , int c)
{
    visited[a] = 1 ;
    if(a == b)
        return 1 ;
    for(auto elem : graph[a])
    {
        if(!visited[elem.first] && elem.second == c)
            if(dfs(elem.first,b,c))
                return 1 ;
    }
    return 0 ;
}

int main()
{
    int t , n , m , i , j , k , x , a , c , b ;
    cin >> n >> m ;
    fr(i,0,m)
    {
        cin >> a >> b >> c ;
        a--;
        b--;
        c--;
        graph[a].pb({b,c}) ;
        graph[b].pb({a,c}) ;
    }
    cin >> t ;
    while (t--)
    {
        cin >> a >> b ;
        a--;
        b--;
        int ans = 0 ;
        fr(i,0,100)
        {
            fr(j,0,100)
                visited[j] = 0 ;
            ans += dfs(a,b,i) ;
        }
        cout << ans << endl ;
    }
    
}