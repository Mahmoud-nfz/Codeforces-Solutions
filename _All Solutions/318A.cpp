#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

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
typedef long long ll ;


using namespace std;

int main()
{
    ll t , n , i , k , x , *a ;
    t = 1 ;
    while(t--)
    {
        cin >> n >> k ;
        k -- ;
        cout << (2*k+1)*(2*k<n) + 2*(k-n/2 + (n%2 == 0)) * (2*k>=n) << endl ;
    }
}