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
    int t , n , m = 1e9 , i , j , k , x , *a ;
    cin >> n >> k ;
    a = new int[n] ;
    int sum = 0 ;
    fr(i,0,n)
    {
        cin >> x ;
        if(k>0 && x<0)
            x *= -1 , k-- ;
        sum += x ;
        m = min(m,abs(x)) ;
    }
    if(k%2)
        sum -= 2*m ;
    cout << sum << endl ;

}