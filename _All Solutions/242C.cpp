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

set <pairi> cells ;
map <pairi,int> visited ;
int xi[8] = {0,0 ,1,1,1 ,-1,-1,-1} ;
int yi[8] = {1,-1,1,0,-1,0 , 1,-1} ;
/*
int ans = 1e9 ;

void BFS(pairi curr , pairi target, int distance)
{
    if(cells.find(curr) == cells.end())
        return ;
    if(visited[curr])
        return ;
    int i , x = curr.first , y = curr.second ;
    visited[curr] = 1 ;
    fr(i,0,8)
    {
        if(make_pair(x+xi[i],y+yi[i]) == target)
        {
            ans = distance + 1 ;
            return ;
        }
        BFS(make_pair(x+xi[i],y+yi[i]),target,distance + 1) ;
    }
}
*/
int main()
{
    int t , n , i , j , k , x , r , a , b ;
    pairi start , finish ;
    cin >> start.first >> start.second >> finish.first >> finish.second ;
    cin >> n ;
    fr(i,0,n)
    {
        cin >> r >> a >> b ;
        fr(k,a,b+1)
            cells.insert(make_pair(r,k)) , visited[make_pair(r,k)] == 0 ;
    }
    queue <pairi> q ;
    q.push(start) ;
    int depth = 0 , sz ;
    while(!q.empty())
    {
        sz = q.size() ;
        while(sz--)
        {
        pairi curr = q.front() ;
        q.pop() ;
        fr(i,0,8)
        {
            pairi temp = make_pair(curr.first+xi[i],curr.second+yi[i]) ;
            if(!cells.count(temp) || visited[temp])
                continue ;
            q.push(temp) ;
            visited[temp] = 1 ;
            if(temp == finish)
            {
                cout << depth + 1 << endl ;
                return 0 ;
            }
        }
        }
        depth ++ ;
    }
    /*
    //BFS(start,finish,0) ;
    if(ans == 1e9)
        cout << -1 << endl ;
    else
        cout << ans << endl ; 
    */
   cout << -1 << endl ;
}