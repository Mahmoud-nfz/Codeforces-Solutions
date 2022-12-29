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

vector <vi> graph ;
int* visited ;

void dfs(int node , int& cnt_nodes , int& cnt_edges)
{
    if(visited[node])
        return ;
    visited[node] = 1 ;
    cnt_nodes ++ ;
    cnt_edges += graph[node].size() ;
    for(int x : graph[node])
        if(!visited[x])
            dfs(x,cnt_nodes,cnt_edges) ;
}

int main()
{
    int t , n , m , i , j , k , x , y , a , b ;
    cin >> n >> m ;
    visited = new int[n] ;
    graph.resize(n) ;
    fr(i,0,n)
        visited[i] = 0 ;
    fr(i,0,m)
    {
        cin >> a >> b ; --a ; --b ;
        graph[a].pb(b) ;
        graph[b].pb(a) ;
    }
    fr(i,0,n)
    {
        if(!visited[i])
        {
            int c1 = 0 , c2 = 0 ;
            dfs(i,c1,c2) ;
            if(1ll*c1*(c1-1) != c2)
            {
                cout << "NO\n" ;
                return 0 ;
            }
        }
    }
    cout << "YES\n" ;
}
