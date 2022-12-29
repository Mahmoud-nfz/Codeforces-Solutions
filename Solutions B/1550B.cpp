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

int main()
{
    int t , n , m , i , j , k , x , y , a , b ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> a >> b ;
        string s ;
        cin >> s ;
        if(b>=0)
        {
            x = s.size() ;
            cout << x*(a+b) << endl ;
            continue ;
        }
        
        x = 0 ;
        int ans = s.size() ;
        ans *= a ;
        i = 0 ;
        while(i < s.size())
        {
            j = i ;
            while(j < s.size() && s[j] == s[i])
                j ++ ;
            i = j + (i==j) ;
            x ++ ;
        }
        ans += ((x/2)+1)*b ;
        cout << ans << endl ;
    }
}