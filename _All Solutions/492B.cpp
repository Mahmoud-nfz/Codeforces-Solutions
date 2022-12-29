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
    int t , n , i , k , x , *a , l ;
    cin >> n >> l ;
    a = new int[n] ;
    fr(i,0,n)
        cin >> a[i] ;
    sort(a,a+n) ;
    float ans = max(a[0],l-a[n-1]) ;
    fr(i,1,n)
        ans = max(ans,(float)(a[i]-a[i-1])/2) ;
    printf("%.10f\n",ans) ;
}