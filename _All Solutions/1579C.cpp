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
#define tarr(a,n,typ,val) typ *a = new typ[n] ; fr(i,0,n) a[i] = val
#define arr(a,n,val) tarr(a,n,int,val)
#define tmatrix(M,n,m,typ) typ**M = new typ*[n] ; fr(i,0,n) M[i] = new typ[m]
#define matrix(M,n,m) tmatrix(M,n,m,int)
#define outA(a,n) fr(_,0,n) cout << a[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

int main()
{
    int t , n , m , i , j , k , x , y ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> m >> k ;
        tarr(M,n,string,"") ;
        fr(i,0,n)
            cin >> M[i] ;
        set <pairi> s ;
        fr(i,0,n)
        {
            fr(j,0,m)
            {
                if(M[i][j] == '.')
                    continue ;
                int h = 1 ;
                while(i-h >= 0 && j+h < m && j-h >= 0 && M[i-h][j+h] == '*' && M[i-h][j-h] == '*')
                {
                    //cout << "bbb" ;
                    h ++ ;
                }
                h -- ;
                if(h>=k)
                {
                    //cout << "aaaa\n" ;
                    h = 0 ;
                    while(i-h >= 0 && j+h < m && j-h >= 0 && M[i-h][j+h] == '*' && M[i-h][j-h] == '*')
                    {
                        s.insert(make_pair(i-h,j+h)) ;
                        s.insert(make_pair(i-h,j-h)) ;
                        h ++ ;
                    }
                }
                
            }
        }
        /*
        for(auto elem  : s)
            cout << elem.first << " " << elem.second << endl ;
        */
        int valid = 1 ;
        fr(i,0,n)
        {
            fr(j,0,m)
            {
                if(M[i][j] == '*' && s.find(make_pair(i,j)) == s.end())
                {
                    valid = 0 ;
                    break ;
                }
            }
        }
        if(valid)
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
}