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
#define yes(check) cout << (check ? "YES" : "NO") << endl

using namespace std;


const int N = 5e5 + 100, M = 1000 + 5, E = 1e6 + 5;
const int MOD =998244353 ;

ll fact[N];
ll invfact[N];

ll mul(ll u , ll v, ll mod=MOD){
    return ((u%mod)*(v%mod))%mod;
}
ll add(ll u, ll v, ll mod=MOD){
    return ((u%mod)+(v%mod)+mod)%mod;
}
 
ll sub(ll u, ll v , ll mod=MOD){
    return ((u%mod)-(v%mod)+mod)%mod;
}
 
ll powe(ll u, ll v, ll mod=MOD){
    ll ans=1;
    ll acc=u;
    while(v){
        if(v%2){
            ans=mul(ans,acc,mod);
        }
        acc = mul(acc,acc,mod);
        v/=2;
    }
    return ans;
}

ll  inv(ll u,ll mod=MOD){
    return powe(u,mod-2,mod);
}
 
void init_fact(ll n, ll mod=MOD){
    fact[0]=fact[1]=1;
    for(int i=2;i<=n;i++){
        fact[i]=mul(i,fact[i-1],mod);
    }
}
 
ll cnk (ll n , ll k){
    if(k>n)return 0;
    if(n==0)return 1;
    ll ans = mul(fact[n],invfact[k]);
    ans= mul(ans,invfact[n-k]);
    return ans;
}
 
void init_inv_fact(ll n, ll mod=MOD){
    for(int i=0;i<=n;i++){
        invfact[i]=powe(fact[i],mod-2,mod);
    }
}
void init(ll n, ll mod=MOD){
    init_fact(n,mod);
    init_inv_fact(n,mod);
}


int main()
{
    #warning TODO : comment out freopen
    freopen("in","r",stdin) ;
    freopen("out","w",stdout) ;
    int t , n , m , i , j , k , x , y ;
    cin >> t ;
        init(100000);
    while(t--)
    {
        cin >> n ;
        arr(a,n,0) ;
        fr(i,0,n)
            cin >> a[i] ;
        tarr(pref,n+1,ll,0) ;
        tarr(suff,n+1,ll,0) ;
        map<ll,int> freq1, freq2 ;
        map <ll,pairi> idx1, idx2 ;
        idx1[0] = make_pair(0,0) ;
        idx2[0] = make_pair(n,n) ;
        fr(i,1,n+1){
            pref[i] = pref[i-1] + a[i-1] , freq1[pref[i]] ++ ;
            if(pref[i] == pref[i-1])
                idx1[pref[i]].second = i ;
            else
                idx1[pref[i]] = make_pair(i,i) ;
        }
        fir(i,0,n-1){
            suff[i] = suff[i+1] + a[i] , freq2[suff[i]] ++ ;
            if(suff[i] == suff[i+1])
                idx2[suff[i]].first = i ;
            else
                idx2[suff[i]] = make_pair(i,i) ;
        }

        auto p = freq1.begin(), f = freq2.begin() ;
        ll score = 1 , mod = 998244353 ;
        while(idx1[p->first].second < idx2[f->first].first){
            if(p->first == f->first){
                // ll th = min((f->second) , (p->second)) ;
                // score = (score * th) % mod ;
                // score = (score * th) % mod ;
                score = (score *(1 + cnk(max((f->second) , (p->second)),min((f->second) , (p->second)))) ;
                p ++ ;
                f ++ ;
            }
            else if(p->first < f->first){
                p ++ ;
            }
            else{
                f ++ ;
            }
        }
        if(p->first == f->first){
            score = (score * (1ll << (p->second - 1))) % mod ;
            // cout << "here : " << (p->second) << endl ;
        }
        // outA(pref,n+1) ;
        // outA(suff,n+1) ;
        // score = (score + (pref[1] != pref[n])) % mod ;
        cout << score << endl ;

        
        
        
    }
}