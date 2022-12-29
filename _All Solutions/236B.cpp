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

int d[1000001] = {} ;

void count_divs(int n)
{
    fr(i,1,n+1)
    {
        for(int j = i ; j <= n ; j += i)
            d[j] ++ ;
    }
}
int main()
{
    int t , n , m , i , j , k , x , a , b , c ;
    cin >> a >> b >> c ;
    int sum = 0 , mod = (1<<30) ;
    count_divs(a*b*c) ;
    fr(i,1,a+1)
    {
        fr(j,1,b+1)
        {
            fr(k,1,c+1)
                sum = (sum + d[i*j*k]) % mod ;
//            cout << 'a' ;
        }
    } 
    cout << sum << endl ;
//    fr(i,0,10)
//        cout << i+1 << " : " << n_divs[i] << endl ;
}