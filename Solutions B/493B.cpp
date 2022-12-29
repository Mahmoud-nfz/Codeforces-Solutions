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
#define outA(a,n) fr(i,0,n) cout << a[i] ; cout << endl 
#define outM(M,n,m) fr(i,0,n) { outA(M[i],m) ; }

using namespace std;


int main()
{
    int t , n , i , j , k , x , y ;
    cin >> n ;
    vi a, f , s ;
    ll m = 0 ;
    while(n--)
    {
        cin >> x ;
        m += x ;
        a.pb(x) ;
        if(x>0)
            f.pb(x) ;
        else
            s.pb(abs(x)) ;
    }
    if(m > 0)
    {
        cout << "first\n" ;
        return 0 ;
    }
    if(m < 0)
    {
        cout << "second\n" ;
        return 0 ;
    }
    k = 0 ;
    while(k < f.size() && k < s.size() && f[k] == s[k])
        k ++ ;
    if(k < f.size() && k < s.size())
    {
        if(f[k] > s[k])
            cout << "first\n" ;
        else
            cout << "second\n" ;
        return 0 ;
    }
    if(k < f.size())
        cout << "first\n" ;
    else if(k < s.size())
        cout << "second\n" ;
    else
    {
        if(a.back() > 0)
            cout << "first\n" ;
        else
            cout << "second\n" ;
    }
    return 0 ;

}