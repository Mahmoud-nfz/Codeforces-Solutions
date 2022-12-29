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
    int t , n , m , i , j , k , x , y , a , b , c , d ;
    cin >> a >> b >> c >> d ;
    if((float)a/c*d*a < (float)b/d*c*b)
    {
        x = __gcd(b*c-a*d,b*c) ;
        cout << (b*c-a*d)/x << '/' << (b*c)/x << endl ;
    }
    else
    {
        x = __gcd(a*d-b*c,a*d) ;
        cout << (a*d-b*c)/x << '/' << (a*d)/x << endl ;
    }
    //cout << (a*b-occupied)/(a*b) ;
}