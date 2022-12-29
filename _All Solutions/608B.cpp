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
    int t , n , m , i , j , k , x , y ;
    string a , b ;
    cin >> a >> b ;
    int * pref1 , *pref2 ;
    arr(pref1,b.size()+1,0) ;
    arr(pref2,b.size()+1,0) ;
    pref1[0] = 0 ;
    pref2[0] = 0 ;
    fr(i,1,b.size()+1) 
        pref1[i] = (b[i-1] == '1') + pref1[i-1] , pref2[i] = (b[i-1] == '0') + pref2[i-1] ;
    ll ans = 0 ;
    fr(i,0,a.size())
    {
        ans += (a[i]=='1')*(pref2[b.size()-a.size()+i+1]-pref2[i]) + (a[i]=='0')*(pref1[b.size()-a.size()+i+1]-pref1[i]) ;
    }
    //outA(pref1,b.size()+1) ;
    //outA(pref2,b.size()+1) ;
    cout << ans << endl ;
}