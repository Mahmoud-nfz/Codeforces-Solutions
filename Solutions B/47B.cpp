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
    int t , n , i , k , x ;
    map <char,int> mp ;
    char M[3][3] ;
    fr(i,0,3)
    {
        fr(k,0,3)
            cin >> M[i][k] ;
    }
    fr(i,0,3)
    {
        if(M[i][1] == '<')
            mp[M[i][0]] -- , mp[M[i][2]] ++ ;
        else
            mp[M[i][0]] ++ , mp[M[i][2]] -- ;
    }
    int a[3] = {0,0,0} ;
    for (auto c : mp)
    {
        if(c.second == -2)
            a[0] = 1 ;
        if(c.second == 0)
            a[1] = 1 ;
        if(c.second == 2)
            a[2] = 1 ;
    }
    if(a[0]+a[1]+a[2] != 3)
    {
        cout << "Impossible\n" ;
        return 0 ;
    }
    for (auto c : mp)
    {
        if(c.second == -2)
            cout << c.first ;
    }
    for (auto c : mp)
    {
        if(c.second == 0)
            cout << c.first ;
    }
    for (auto c : mp)
    {
        if(c.second == 2)
            cout << c.first ;
    }
    cout << endl ;

    
}