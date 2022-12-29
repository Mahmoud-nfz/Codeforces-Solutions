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
    int t , n , i , j , k , x , *a ;
    cin >> n ;
    a = new int[n] ;
    seti s ;
    fr(i,0,n)
    {
        cin >> a[i] ;
        s.insert(a[i]) ;
    }
    //sort(a,a+n) ;
    if(s.size() > 3)
    {
        cout << "NO" << endl ;
        return 0 ;
    }
    if(s.size() == 3)
    {
        int e[3] ;
        i = 0 ;
        for(auto aa : s)
            e[i++] = aa ;
        sort(e,e+3) ;
        if(((e[2]-e[0]) % 2) || e[2] - e[0] != 2*(e[2]-e[1]))
            cout << "NO\n" ;
        else
            cout << "YES\n" ;
        return 0 ;
    }
    cout << "YES\n" ;
}