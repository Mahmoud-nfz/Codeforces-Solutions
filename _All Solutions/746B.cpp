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
    int t , n , i , k , x , *a ;
    vector <char> vl , vr ;
    cin >> n ;
    string s ;
    cin >> s ;
    fr(i,0,n)
    {
        if(i%2)
            vr.push_back(s[n-i-1]) ;
        else
            vl.push_back(s[n-i-1]) ;
    }
    for(auto c : vr)
        cout << c ;
    reverse(vl.begin(),vl.end()) ;
    for(auto c : vl)
        cout << c ;
    cout << endl ;


}

/*

volga --> logva
agl       vo
vo        agl

abcd --> bcad
dc       ab

*/