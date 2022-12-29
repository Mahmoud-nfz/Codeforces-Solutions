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
    int t , n , m , i , j , k , x[5000] , y[5000] , z[5000] , a , b ;
    cin >> n ;
    fr(i,0,n)
        cin >> x[i] ;
    cin >> m ;
    fr(i,0,m)
        cin >> y[i] ;
    cin >> k ;
    fr(i,0,k)
        cin >> z[i] ;
    cin >> a >> b ;
    int r1 = *max_element(x,x+n) , p1 = *max_element(y,y+m) , p2 = *min_element(z,z+k) ;
    printf("%.6f\n",r1*sqrt((float)p1*b/(a*p2+b*p1))) ;
}