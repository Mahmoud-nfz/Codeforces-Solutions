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

bool comp(pair<pairi,int> x , pair<pairi,int> y)
{
    return x.first.first < y.first.first ;
}

int main()
{
    int t , n , m , i , j , k ;

    cin >> n ;

    pair<pairi,int> *a = new pair<pairi,int>[n] ;
    fr(i,0,n)
    {
        cin >> a[i].first.first >> a[i].first.second ;
        a[i].second = i ;
    }

    cin >> k ;
    tarr(r,k,pairi,make_pair(0,0)) ;
    fr(i,0,k)
    {
        cin >> r[i].first ;
        r[i].second = i ;
    }

    sort(r,r+k) ;
    sort(a,a+n,comp) ;
    
    set <pairi> s ;
    arr(ans,n,-1) ;
    i = 0 ; j = 0 ;
    int price = 0 ;
    
    while(j < k)
    {
        while(i < n && a[i].first.first <= r[j].first)
        {
            s.insert({a[i].first.second,a[i].second}) ;
            i ++ ;
        }
        /*
        for(auto oo : s)
            cout << oo.first << " " ;
        cout << endl ;
        */
        if(!s.empty())
        {
            pairi elem = *s.rbegin() ;
            ans[elem.second] = r[j].second ;
            price += elem.first ;
            s.erase(elem) ;
        }
        j ++ ;
    }

    /*
    fr(i,0,n)
    {
        auto p = a[i] ;
        printf("%d %d %d\n",p.first.first,p.first.second,p.second) ;
    }
    */

    
    m = 0 ;
    fr(i,0,n)
        m += ans[i] >= 0 ;
    printf("%d %d\n",m,price) ;
    fr(i,0,n)
        if(ans[i] >= 0)
            printf("%d %d\n",i+1,ans[i]+1) ;
    

/*

10
739 307
523 658
700 143
373 577
120 433
353 833
665 516
988 101
817 604
800 551
10
431 425 227 147 153 170 954 757 222 759

*/

}