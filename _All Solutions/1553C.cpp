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

int solve(int turn , string s , int a , int b , int rema , int remb)
{
    if(turn == 10)
        return 10 ;
    if(a > b + remb || b > a + rema)
        return turn ;
    if(s[turn] == '1' || s[turn] == '0')
    {
        a += (turn%2 == 0) * (s[turn]=='1') ;
        b += (turn%2) * (s[turn]=='1') ;
        return solve(turn+1,s,a,b,rema-(turn%2==0),remb-(turn%2)) ;
    }
    if(turn % 2 == 0)
        return min(solve(turn+1,s,a+1,b,rema-1,remb),solve(turn+1,s,a,b,rema-1,remb)) ;
    if(turn % 2)
        return min(solve(turn+1,s,a,b+1,rema,remb-1),solve(turn+1,s,a,b,rema,remb-1)) ;
    return 0 ;
}

int main()
{
    int t , n , m , i , j , k , x , y ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin  >> s ;
        cout << solve(0,s,0,0,5,5) << endl ;
        
    }
}