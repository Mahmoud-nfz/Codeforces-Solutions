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
int visited[100] ;
char type(vector <vi> graph , int curr , int par , int* number)
{
    if(visited[curr])
        return 'C' ;
    visited[curr] = 1 ;
    for(auto x : graph[curr])
    {
        if(x != par)
        {
            (*number) ++ ;
            if(type(graph,x,curr,number) == 'C')
                return 'C' ;
        }
    }
    return 'P' ;
}

int main()
{
    int t , n , i , j , k , x , y , *a , m ;
    cin >> n >> m ;
    vector <vi> graph (n) ;
    fr(i,0,m)
    {
        cin >> x >> y ;
        x-- ;
        y-- ;
        graph[x].pb(y) ;
        graph[y].pb(x) ;
    }
    fr(i,0,n)
        visited[i] = 0 ;
    int remove = 0 ;
    fr(i,0,n)
    {
        k = 0 ;
        if(type(graph,i,-1,&k) == 'C')
            remove += (k%2) ;
        /*
        cout << type(graph,i,-1,&k) << endl ;
        cout << k << endl ;
        */
    }
    cout << remove + ((n-remove)%2) << endl ;

}