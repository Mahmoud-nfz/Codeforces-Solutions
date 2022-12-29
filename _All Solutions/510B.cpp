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
#define arr(a,n,val) a = new int[n] ; fr(i,0,n) a[i] = val
#define matrix(M,n,m) M = new int*[n] ; fr(i,0,n) M[i] = new int[m]
#define outA(a,n) fr(_,0,n) cout << a[_] ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

char M[50][50] ;
int vis[50][50] {} ;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n , m , i , j ;


int dfs(int x , int y , int px , int py , char c)
{
    if(x >= n || x < 0 || y >= m || y < 0 || M[x][y] != c)
        return 0 ;
    if(vis[x][y])
        return 1 ;
    vis[x][y] = 1 ;
    fr(o,0,4)
    {
        int nx = x + dx[o] , ny = y + dy[o] ;
        if(nx == px && ny == py)
            continue ;
        if(dfs(nx,ny,x,y,c)) 
            return 1 ;
    }
    return 0 ;
}

int main()
{
    int t , k , x , y , *a ;
    cin >> n >> m ;
    fr(i,0,n)
        fr(j,0,m)
            cin >> M[i][j] ;
    fr(i,0,n)
        fr(j,0,m)
        if(!vis[i][j])
            if(dfs(i,j,-1,-1,M[i][j]))
            {
                cout << "Yes\n" ;
                return 0 ;
            }
    cout << "No\n" ;
}