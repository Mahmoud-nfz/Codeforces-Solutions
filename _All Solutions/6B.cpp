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

pairi top_left(string* M, char c,int n ,int m)
{
    int i,j ;
    fr(i,0,n)
    {
        fr(j,0,m)
            if(M[i][j] == c)
                return {i,j} ;
    }
    return {0,0} ;
}

int main()
{
    int t , n , m , i , j , k , x , *a ;
    char c ;
    cin >> n >> m >> c ;
    string * M = new string[n] ;
    fr(i,0,n)
    {
        cin >> M[i] ;
    }
    pairi tl , tr , bl , br ;
    set <char> s ;
    tl = top_left(M,c,n,m) ;
    i = tl.first ;
    j = tl.second ;
    while(i<n && M[i][j] == c)
    {
        if(j>0)
        {
            s.insert(M[i][j-1]) ;
        }
        i++ ;
    }
    i-- ;
    while(j<m && M[i][j] == c)
    {
        if(i<n-1)
        {
            s.insert(M[i+1][j]) ;
        }
        j++ ;
    }
    i = tl.first ;
    j = tl.second ;
    while(j<m && M[i][j] == c)
    {
        if(i>0)
        {
            s.insert(M[i-1][j]) ;
        }
        j++ ;
    }
    j-- ;
    while(i<n && M[i][j] == c)
    {
        if(j<m-1)
        {
            s.insert(M[i][j+1]) ;
        }
        i++ ;
    }
    cout << s.size() - (s.find('.') != s.end()) << endl ;
    //for(auto aa : s)
    //    cout << aa << " " ;

}
