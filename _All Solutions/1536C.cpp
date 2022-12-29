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

map <int,seti> divs ;

void com_divs(int n)
{
    if(divs.find(n) == divs.end())
        return ;
    for (int i = 1; i <= sqrt(n); i++) {
        // if 'i' is factor of n
        if (n % i == 0)
        {
            divs[n].insert(i) ;
            if (n / i != i)
                    divs[n].insert(n/i) ;
        }
    }
}

int main()
{
    int t , n , m , i , j , k , x , y ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        string s ;
        cin >> s ;
        arr(a,n,0) ;
        a[0] = s[0] == 'D' ;
        fr(i,1,n)
            a[i] = a[i-1] + (s[i] == 'D') ;
        map <int,vi> divs ;
         
        fr(i,0,n)
        {
            if(!a[i] || a[i] == i+1)
                cout << max(a[i],i+1-a[i]) << " " ;
            else
            {
                com_divs(__gcd(a[i],i+1-a[i])) ;
                for(auto elem = divs[__gcd(a[i],i+1-a[i])].rbegin();elem != divs[__gcd(a[i],i+1-a[i])].rend();elem--)
                {
                    if(a[i/elem])
                }
            }
        }
        cout << endl ;
        
    }
}