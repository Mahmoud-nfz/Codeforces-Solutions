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
    int n , m , i , j , k , x ;
    string s , t ;
    cin >> s >> t ;
    int a[29] {} , b[29] {} ;
    if(t.size() > s.size())
    {
        cout << "need tree\n" ;
        return 0 ;
    }
    fr(i,0,s.size())
        a[s[i]-'a'] ++ ;
    fr(i,0,t.size())
        b[t[i]-'a'] ++ ;
    for(i = 0 ; i < 29 && a[i] >= b[i] ; i++) ;
    if(i != 29)
    {
        cout << "need tree\n" ;
        return 0 ;
    }
    if(t.size() == s.size())
    {
        cout << "array\n" ;
        return 0 ;
    }
    i = 0 ; j = 0 ;
    while(i < s.size())
    {
        if(j < t.size() && s[i] == t[j])
            j ++ ;
        i ++ ;
    }
    if(j == t.size())
        cout << "automaton\n" ;
    else
        cout << "both\n" ;
}
