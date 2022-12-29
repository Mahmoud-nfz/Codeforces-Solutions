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
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        arr(a,n,0) ;
        int cat1 = 0 , cat2 = 0 , cat3 = 0 ;
        fr(i,0,n){
            cin >> x ;
            a[i] = x ;
            if(x%2)
                x += x%10 , a[i] = x ;
            if(x % 10 == 0){
                cat3 ++ ;
                continue ;
            }
            else if((x/10)%2){
                if(x%10 == 6)
                    cat1 ++ ;
                else
                    cat2 ++ ;
            }
            else if((x/10)%2 == 0){
                if(x%10 == 6)
                    cat2 ++ ;
                else
                    cat1 ++ ;
            }
        }
        // cout << cat1+cat2+cat3 << endl << cat1 << " " << cat2 << " " << cat3 << endl ;
        if(cat1+cat2+cat3 == max(cat1,max(cat2,cat3))){
            int valid = 1 ;
            if(cat3){
                fr(i,0,n)
                    valid &= a[i] == a[0] ;
            }
            if(valid)
                cout << "YES\n" ;
            else
                cout << "NO\n" ;

        }
        else
            cout << "NO\n" ;
    }
}