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

// create a segment tree with lazy propagation

const int MAX = 100005 ;
pairi tree[4*MAX+4] , lazy[4*MAX+4] ;
int a[MAX] , b[MAX] ;

void build()
{
    fr(index,0,4*MAX+4){
        tree[index] = {-1,-1} ;
        lazy[index] = {-1,-1} ;
    }
}

void push(int v,int tl,int tr) {
    if(lazy[v] == make_pair(-1,-1))
        return ;
    pairi temp = lazy[v] ;
    temp.second += (tr-tl)/2 + 1 ;
    tree[v*2] = lazy[v];
    lazy[v*2] = lazy[v];
    tree[v*2+1] = temp;
    lazy[v*2+1] = temp;
    lazy[v] = {-1,-1};
}

void update(int v, int tl, int tr, int l, int r, int start, int offset){
    if(l > r)
        return ;
    if(l == tl && tr == r){
        tree[v] = {start,offset} ;
        lazy[v] = {start,offset} ;
    }
    else{
        push(v,tl,tr) ;
        int tm = (tl+tr) / 2;
        update(v*2,tl,tm,l,min(r,tm),start,offset) ;
        update(v*2+1,tm+1,tr,max(l,tm+1),r,start,offset+(tm-l)+1) ;
    }
}

pairi query(int v, int tl, int tr, int index){
    if(index > tr || index < tl)
        return {-1,-1} ;
    if(tl == tr)
        return tree[v] ;
    push(v,tl,tr) ;
    int tm = (tl+tr)/2 ;
    if(index <= tm){
        return query(v*2,tl,tm,index) ;
    }
    else
        return query(v*2+1,tm+1,tr,index) ;
}



int main()
{
    // #warning TODO : comment out freopen
    // freopen("in","r",stdin) ;
    // freopen("out","w",stdout) ;
    int t , n , m , i , j , k , x , y ;
    cin >> n >> m ;
    fr(i,0,n)
        cin >> a[i] ;
    fr(i,0,n)
        cin >> b[i] ;
    int tt = 1 ;
    while(tt <= n)
        tt = tt << 1 ;
    n = tt ;
    build() ;
    while(m--){
        cin >> t ;
        if(t == 1){
            cin >> x >> y >> k ;
            x -- ; y -- ;
            update(1,0,n-1,y,y+k-1,x,0) ;
        }
        else{
            cin >> x ;
            x -- ;
            pairi temp = query(1,0,n-1,x) ;
            if(temp == make_pair(-1,-1)){
                cout << b[x] << endl ;
            }
            else{
                cout << a[temp.first+temp.second] << endl ;
            }
        }
    }

    // fr(i,0,n*4+4){
    //     cout << tree[i].first << " : " << tree[i].second << endl ;
    // }
    // cout << "______________________\n" ;
    // fr(i,0,n*4+4){
    //     cout << lazy[i].first << " : " << lazy[i].second << endl ;
    // }
}