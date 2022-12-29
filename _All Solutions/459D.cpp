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

int* tree ;

void build(int*a, int l, int r, int v)
{
    if(l == r){
        tree[v] = a[l] ;
        return ;
    }
    int m = (l+r)/2 ;
    build(a,l,m,2*v) ;
    build(a,m+1,r,2*v+1) ;
    tree[v] = max(tree[2*v],tree[2*v+1]) ;
}

int query(int target, int l, int r, int tl, int tr, int v)
{
    // cout << tl << " " << tr << " " << endl ;
    
    if(l>r || tl > tr)
        return 0 ;
    if(tr < l || tl > r)
        return 0 ;
    if(tl == tr){
        // if(target > tree[v])
        //     cout << tl << " " << tr << " : 1" << endl ;
        return target > tree[v] ;
    }
    if(l <= tl && r >= tr){
        if(target > tree[v]){
            // cout << tl << " " << tr << " " << tr-tl+1 << endl ;
            return tr-tl+1 ;
        }
    }
    int tm = (tl+tr)/2 ; 
    return query(target,l,r,tl,tm,2*v) + query(target,l,r,tm+1,tr,2*v+1) ;
    
}

int main()
{
    // #warning TODO : comment out freopen
    // freopen("in","r",stdin) ;
    // freopen("out","w",stdout) ;
    fast ;
    int t , n , i , j , k , x , y ;
    cin >> n ;
    arr(a,n,0) ;
    fr(i,0,n)
        cin >> a[i] ;
    arr(pref,n,1) ;
    mapi m ;
    fr(i,0,n){
        pref[i] += m[a[i]] ;
        m[a[i]] ++ ;
    }
    arr(suff,n,1) ;
    m.clear() ;
    fir(i,0,n-1){
        suff[i] += m[a[i]] ;
        m[a[i]] ++ ;
    }

    // outA(pref,n) ;
    // outA(suff,n) ;

    tree = new int[4*n+4] ;
    build(suff,0,n-1,1) ;

    int sum = 0 ;
    fr(i,0,n){
       sum += query(pref[i],i+1,n-1,0,n-1,1) ;
    //    cout << query(pref[i],i+1,n-1,0,n-1,1) << " " ;
    }
    // cout << endl ;
    cout << sum << endl ;


    // sum = 0 ;
    // fr(i,0,n){
    //     sum = 0 ;
    //     fr(j,i+1,n){
    //         sum += pref[i] > suff[j] ;
    //     }
    //     cout << sum << " " ;
    // }
    // cout << endl << sum << endl ;
    // i = 12 ;
    // cout << query(pref[i],i+1,n-1,0,n-1,1) ;

    // fr(i,0,4*n+4)
    //     cout << tree[i] << endl ;
}