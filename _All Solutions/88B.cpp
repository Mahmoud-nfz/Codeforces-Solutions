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

float distance(int x1 , int y1 , int x2 , int y2)
{
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) ;
}
int main()
{
    int t , n , i , j , k , x , m , q ;
    char M[30][30] ;
    cin >> n >> m >> x ;
    vector <pairi> shift ;
    map <char,vector<pairi>> mp ;
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            cin >> M[i][j] ;
            if(M[i][j] != 'S')
                mp[M[i][j]] .pb({i,j}) ;
            else
                shift.pb({i,j}) ;
        }
    }
    cin >> q ;
    string s ;
    cin >> s ;
    int ans = 0 ;
    map <char,float> closest_shift ;
    if (!shift.empty())
    {
        for(auto group : mp)
        {
            for(auto key : group.second)
            {
                for(auto elem : shift)
                {
                    if(closest_shift.find(group.first) == closest_shift.end())
                        closest_shift[group.first] = distance(key.first,key.second,elem.first,elem.second) ;
                    if(distance(key.first,key.second,elem.first,elem.second) < closest_shift[group.first])
                        closest_shift[group.first] = distance(key.first,key.second,elem.first,elem.second) ;
                }
            }
        }
    }
    for(char c : s)
    {
        if((c >= 'a' && mp.find(c) == mp.end()) || (c < 'a' && mp.find(c-'A'+'a') == mp .end()))
        {
            cout << -1 << endl ;
            return 0 ;
        }
        if(c >= 'a')
            continue ;
        if (shift.empty())
        {
            cout << -1 << endl ;
            return 0 ;
        }
        c = c-'A'+'a' ;
        ans += (closest_shift[c] > x) ;
        //cout << c << endl ;
    }
    cout << ans << endl ;
    //cout << (distance(mp['B'].first,mp['B'].second,shift.first,shift.second)) ;


}