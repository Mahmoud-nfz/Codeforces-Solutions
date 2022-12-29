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

bool comp(pair<int,int> x , pair <int,int> y)
{
    int a = x.second , b = y.second ;
    if(a == b)
        return x.first < y.first ;
    return a > b ;
}

int main()
{
    int t , n , i , j , k , x , t1 , t2 , a[1000] , b[1000] ;
    cin >> n >> t1 >> t2 >> k ;
    pair<int,int> ans[1000] ;
    fr(i,0,n)
    {
        cin >> a[i] >> b[i] ;
        ans[i] = make_pair(i+1 , max((a[i]*t1*(100-k)) + b[i]*t2*100,(b[i]*t1*(100-k)) + a[i]*t2*100)) ;
    }
    sort(ans,ans+n,comp) ;
    fr(i,0,n)
    {
        printf("%d %2.2f\n",ans[i].first,(float)ans[i].second/100) ;
    }
}
