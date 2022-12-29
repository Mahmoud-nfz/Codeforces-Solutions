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
    string s ;
    cin >> s ;
    n = s.length() ;
    vector <pairi> bears ;
    fr(i,0,n-3)
    {
        if(s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r')
            bears.pb(make_pair(i,i+3)) ;
    }
    int ans = 0 ;
    int ii ;
    fr(ii,0,bears.size())
    {
        i = bears[ii].first ;
        j = bears[ii].second ;
        if(!ii)
            ans += (n-j)*(i+1) ;
        else
        {
            m = bears[ii-1].first ;
            ans += (n-j)*(i-m) ;
        }
    }
    cout << ans << endl ;
}