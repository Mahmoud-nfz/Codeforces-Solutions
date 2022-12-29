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
    if(s.size()<26)
    {
        cout << -1 << endl ;
        return 0 ;
    }
    int **M ;
    M = new int*[s.size()] ;
    fr(i,0,s.size())
    {
        M[i] = new int[26] ;
        fr(j,0,26)
            M[i][j] = 0 ;
    }
    
    fr(i,0,s.size()-25)
    {
        fr(j,i,i+26)
        {
            if(s[j] != '?')
                M[i][s[j]-'A'] ++ ;
        }
    }
    //cout << 'a' ;
    int ans = -1 ;
    fr(i,0,s.size()-25)
    {
        int temp = 0 ;
        fr(j,0,26)
            if(M[i][j] > 1)
                temp = 1 ;
        if(!temp)
            ans = i ;
    } 
    //cout << 'b' ;
    /*
    fr(i,0,s.size())
    {
        fr(j,0,26)
            cout << M[i][j] ;
        cout << endl ;
    }
    */
    if(ans == -1)
    {
        cout << ans << endl ;
        return 0 ;
    }
    seti letters ;
    fr(i,0,26)
        letters.insert(i) ;
    fr(i,0,26)
        if(M[ans][i])
            letters.erase(i) ;
    fr(i,0,ans)
    {
        if(s[i] == '?')
            cout << 'A' ;
        else
            cout << s[i] ;
    }
    fr(i,ans,ans+26)
    {
        if(s[i] == '?')
        {
            cout << (char) ('A' + *letters.begin()) ;
            letters.erase(*letters.begin()) ;
        }
        else
            cout << s[i] ;
    }
    fr(i,ans+26,s.size())
    {
        if(s[i] == '?')
            cout << 'A' ;
        else
            cout << s[i] ;
    }
    cout << endl ;
    
}