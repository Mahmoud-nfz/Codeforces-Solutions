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
    cin >> n >> m ;
    seti s ;
    char ** M = new char*[n] ;
    fr(i,0,n)
        M[i] = new char[m] ;
    fr(i,0,n)
    {
        fr(j,0,m)
            cin >> M[i][j] ;
    }
    int ans = 0 ;
    fr(i,0,n)
    {
        int  G , S ;
        fr(j,0,m)
        {
            if(M[i][j] == 'G')
                G = j ;
            if(M[i][j] == 'S' )
                S = j ;
        }
        if(S-G < 0)
        {
            cout << -1 << endl ;
            return 0 ;
        }
        s.insert(S-G) ;
    }
    cout << s.size() << endl ;

}
/*
G******S
***G***S

*G*****S
****G**S

**G****S
*****G*S

***G***S
******GS 

****G**S
*******G

*****G*S

******GS
*******G
*/
