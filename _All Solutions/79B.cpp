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
    int t , n , i , j , k , m , a , b , *w , x , ii ;
    seti* wastes ;
    string ans [3] = {"Carrots","Kiwis","Grapes"} ;
    cin >> n >> m >> k >> t ;
    wastes = new seti[n] ;
    w = new int[n+1] ;
    fr(i,0,k)
    {
        cin >> a >> b ;
        wastes[--a].insert(--b) ;
    }
    w[0] = 0 ;
    fr(i,1,n + 1)
        w[i] = w[i-1] + wastes[i-1].size() ;
    fr(ii,0,t)
    {
        cin >> a >> b ;
        --a ;
        --b ;
        if(wastes[a].find(b) != wastes[a].end())
            cout << "Waste\n" ;
        else
        {
            x = (a*m - w[a]) % 3 ;
            seti :: iterator elem = wastes[a].begin() ;
            i = 0 ;
            while(elem != wastes[a].end() && *elem < b)
                i++, elem++ ;
            x += (b-i)%3 ;
            cout << ans[x%3] << endl ;
        }
    }
}