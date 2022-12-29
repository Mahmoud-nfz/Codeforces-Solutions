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
    int t , n , m , i , j , k , x , *a ;
    cin >> n >> k ;
    if(2*k > n*n + (n%2))
    {
        cout << "NO\n" ;
        return 0 ;
    }
    cout << "YES\n" ;
    int temp = 1 ;
    fr(_,0,n)
    {
        temp = 1 - (_ % 2) ;
        fr(__,0,n)
        {
            if(temp && k)
            {
                cout << "L" ;
                k -- ;
            }
            else
                cout << "S" ;
            temp ^= 1 ;
        }
        cout << endl ;
    }
}