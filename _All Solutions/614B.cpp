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
    int t , n , m , i , j , k , x , y , *a ;
    string s , ans = "1" ;
    cin >> n ;
    int cnt = 0 ;
    while(n--)
    {
        cin >> s ;
        if(s == "0")
        {
            cout << 0 << endl ;
            return 0 ;
        }
        j = s.size() - 1 ;
        while(s[j] == '0')
            j -- , cnt ++ ;
        if(ans == "1")
            ans = s.substr(0,j+1) ;  
    }
    cout << ans ;
    while(cnt--)
        cout << 0 ;
    cout << endl ;
}