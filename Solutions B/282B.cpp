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
#define arr(a,n,val) int *a = new int[n] ; fr(i,0,n) a[i] = val
#define matrix(M,n,m) int**M = new int*[n] ; fr(i,0,n) M[i] = new int[m]
#define outA(a,n) fr(_,0,n) cout << a[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

int main()
{
    int n , x , y , sum = 0 , temp ;
    string s ;
    cin >> n ;
    while(n--)
    {
        cin >> x >> y ;
        temp = sum + x <= 500 ;
        sum += temp * x - (temp^1)*y ;
        s += (char) 'A'*temp +'G'*(temp^1) ;
    }
    cout << s << "\n" ;
}
