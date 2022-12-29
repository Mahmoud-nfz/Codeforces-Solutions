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
#define outA(a,n) fr(_,0,n) cout << (a)[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA((M)[__],m) ; }
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main()
{
    // #warning TODO : comment out freopen
    // freopen("in","r",stdin) ;
    // freopen("out","w",stdout) ;
    int t , n , m , i , j , k , x , y ;
    cin >> n >> t ;
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    int diff = 0 ;
    fr(i,0,n)
        diff += s1[i] != s2[i] ;
    if(diff/2 + diff%2 > t){
        cout << -1 << endl ;
        return 0 ;
    }
    j = 0 ; k = 0 ;
    string s3 = "" ;
    fr(i,0,n){
        if(s1[i] != s2[i]){
            if(j < diff/2){
                s3 += s1[i] ;
                j ++ ;
            }
            else if(j < diff - diff%2){
                s3 += s2[i] ;
                j ++ ;
            }
            else{
                if(s1[i] != 'a' && s2[i] != 'a')
                    s3 += 'a' ;
                else if(s1[i] != 'b' && s2[i] != 'b')
                    s3 += 'b' ;
                else if(s1[i] != 'c' && s2[i] != 'c')
                    s3 += 'c' ;
                
            }
        }
        else if(k < t-diff/2-diff%2){
                if(s1[i] != 'a' && s2[i] != 'a')
                    s3 += 'a' ;
                else if(s1[i] != 'b' && s2[i] != 'b')
                    s3 += 'b' ;
                else if(s1[i] != 'c' && s2[i] != 'c')
                    s3 += 'c' ;
                k ++ ;
            }
        else
            s3 += s1[i] ;
    }
    cout << s3 << endl ;

}