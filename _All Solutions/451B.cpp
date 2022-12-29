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

using namespace std;

int main()
{
    int t , n , i , j , k , x , *a ;
    cin >> n ;
    a = new int[n] ;
    fr(i,0,n)
        cin >> a[i] ;
    i = 1 ;
    while(i<n && a[i] >= a[i-1])
        i++ ;
    j = i ;
    while(i<n && a[i] <= a[i-1])
        i++ ;
    k = i ;
    while(i<n && a[i] >= a[i-1])
        i++ ;
    int l,r ;
    if(j>1)
        l = a[j-2] ;
    else 
        l = 0 ;
    if(k<n)
        r = a[k] ;
    else
        r = 1e9 + 7 ;
    if(i<n || (a[j-1] > r) || (a[k-1] < l)) 
        cout << "no\n" ;
    else
        cout << "yes\n" , cout << j << " " << k << endl ; 
}
