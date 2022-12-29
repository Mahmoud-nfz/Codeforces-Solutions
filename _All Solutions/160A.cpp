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
    int t , n , i , k , x , *a , sum ;
    t = 1 ;
    while(t--)
    {
        cin >> n ;
        a = new int[n] ;
        sum = 0 ;
        fr(i,0,n)
        {
            cin >> a[i] ;
            sum += a[i] ;
        }
        sort(a,a+n) ;
        reverse(a,a+n) ;
        i = 0 ;
        x = 0 ;
        while(2*x <= sum)
        {
            x += a[i] ;
            i++ ;
        }
        cout << i << endl ;
    }
}