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
        string s ;
        cin >> s ;
        multiset<int> last ;
        for(auto c : s){
            last.insert((c-'0')) ;
        }

        

        multiset<int> add ;
        vector <int> final ;
        for(auto c : s){
            if(last.lower_bound(c-'0') != last.begin()){
                add.insert(min(9,(c-'0'+1))) ;
            }
            else{
                final.pb((c-'0')) ;
            }
            auto itr = last.find((c-'0'));
            if(itr!=last.end()){
                last.erase(itr);
            }
        }

        vi v ;
        for(auto elem : add){
            v.pb(elem ) ;
        }

        // outA(final,final.size()) ;

        auto it = 0 ;
        for(auto elem : final){
            while(it < v.size() && v[it] < elem){
                cout << v[it] ;
                it ++ ;
            }
            cout << elem ;
        }
        while(it < v.size()){
                cout << v[it] ;
                it ++ ;
        }

        cout << endl ;


        
        
    }
}