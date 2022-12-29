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

char M[1000][1000] ;
int dpm[2][1005][1005] , freq[2][1000] , n , m , x , y ;

int dp(int curr , int i , int used)
{
    //printf("curr : %d , i : %d , used : %d\n",curr,i,used) ;
    if(dpm[curr][i][used] != 1e9)
        return dpm[curr][i][used] ;
    if(i == m-1)
    {
        if(used > y || used < x)
            dpm[curr][i][used] = 1e9 + 7 ;
        else
            dpm[curr][i][used] = freq[1-curr][i] ;
        return dpm[curr][i][used] ;
    }
    int a = 1e9 , b = 1e9 ;
    if(used >= x)
        a = dp(1-curr,i+1,1) ;
    if(used + 1 <= y)
        b = dp(curr,i+1,used+1) ;
    dpm[curr][i][used] = freq[1-curr][i] + min(a,b) ;
    return dpm[curr][i][used] ;
}

int main()
{
    int i , j , k ;
    char t ;
    cin >> n >> m >> x >> y ;
    
    fr(i,0,1005)
    {
        fr(j,0,1005)
        {
            dpm[0][i][j] = 1e9 ;
            dpm[1][i][j] = 1e9 ;
        }
    }
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            cin >> M[i][j] ;
        }
    }
    fr(j,0,m)
    {
        
        freq[0][j] = 0 ;
        freq[1][j] = 0 ;
        fr(i,0,n)
        {
            freq[0][j] += (M[i][j] == '#') ;
            freq[1][j] += (M[i][j] == '.') ;
        }
    }
    /*
    fr(i,0,m)
        printf("# : %d ; . : %d\n",freq[0][i],freq[1][i]) ;
    */
    cout << min(dp(0,0,1),dp(1,0,1)) << endl ;
}