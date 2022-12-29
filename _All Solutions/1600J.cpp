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

int ** M , n , m , ** visited ;

int area(int i , int j)
{
    if(visited[i][j])
        return 0 ;
    visited[i][j] = 1 ;
    int x = 0 ;
    if(!(M[i][j]&1) && j>0)
    {
        x += area(i,j-1) ;
    }
    if(!((M[i][j]>>1)&1) && i < n-1)
    {
        x += area(i+1,j) ;
    }
    if(!((M[i][j]>>2)&1) && j < m-1)
    {
        x += area(i,j+1) ;
    }
    if(!((M[i][j]>>3)&1) && i>0)
    {
        x += area(i-1,j) ;
    }
    return x + 1 ;
}

int main()
{
    int t , k , i ;
    cin >> n >> m ;
    M = new int*[n] ;
    visited = new int*[n] ;
    fr(i,0,n)
        M[i] = new int[m] , visited[i] = new int[m] ;
    fr(i,0,n)
        fr(j,0,m)
        {
            visited[i][j] = 0 ;
            cin >> M[i][j] ;
        }
    multiset <int> ans ;
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            if(!visited[i][j])
            {
                ans.insert(area(i,j)) ;
            }
        }
    }
    for(auto elem = ans.rbegin() ; elem != ans.rend() ; elem ++)
        cout << *elem << " " ;

}