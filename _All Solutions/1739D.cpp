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
#define outA(a,n) fr(_,0,n) cout << (a)[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA((M)[__],m) ; }
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

vector<vi> children ;

void dfs(int node, int* depths, vi& trace, int depth, int target_height, int* h_parent)
{
    // cout << node << " here" << endl  ;
    depths[node] = depth ;
    trace.pb(node) ;
    if(trace.size() > target_height+1){
        h_parent[node] = trace[trace.size()-target_height] ;
    }
    for(auto child : children[node]){
        dfs(child,depths,trace,depth+1,target_height,h_parent) ;
    }
    trace.pop_back() ;
}

void remch(int node, int* used, set<pairi> &s , int depth)
{
    used[node] = 1 ;
    // cout << depth << " ::::: " << node << endl ;
    s.erase(s.find(make_pair(depth,node))) ;
    
    for(auto ch : children[node]){
        if(!used[ch])
            remch(ch,used,s,depth+1) ;
    }
}

int main()
{
    // #warning TODO : comment out freopen
    // freopen("in","r",stdin) ;
    // freopen("out","w",stdout) ;
    int t , n , m , i , j , k , x , y ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> k ;
        children.clear() ;
        children.resize(n) ;
        arr(par,n,0) ;
        fr(i,1,n){
            cin >> par[i] ;
            par[i] -- ;
            children[par[i]].pb(i) ;
        }
        
        // fr(i,0,n){
        //     cout << i << " : " ;
        //     for(auto c : children[i])
        //         cout << c << " " ;
        //     cout << endl ;
        // }
        // return 0 ;

        int l = 1 , r = 2e5+7 , m ;
        while(l < r){
            arr(h_parent,n,-1) ;
            arr(depths,n,0) ;
            m = (l+r)/2 ;
            // cout << l << " : " << m << " : " << r << endl ;
            vi v ;
            dfs(0,depths,v,0,m,h_parent) ;
            set <pairi> s ;
            fr(i,0,n){
                s.insert(make_pair(depths[i],i)) ;
            }
            // if(m == 1)
            // for(auto elem : s){
            //     cout << elem.first << " " << elem.second << endl ;
            // }
            int rem = k ;
            arr(used,n,0) ;
            while(rem --){
                if(s.rbegin()->first > m)
                    remch(h_parent[s.rbegin()->second],used,s,s.rbegin()->first-m+1) ;
                
            }
            // if(m == 1)
            // for(auto elem : s){
            //     cout << elem.first << " " << elem.second << endl ;
            // }
            int check = s.rbegin()->first <= m ; 
            if(!check)
                l = m+1 ;
            else
                r = m ;
            // outA(h_parent,n) ;
        }
        cout << r << endl ;

        
    }
}