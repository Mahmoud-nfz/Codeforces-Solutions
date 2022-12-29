#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>

# define M_PI           3.14159265358979323846
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
typedef long long ll ;


using namespace std;

int main()
{
    int d,h,v,e ;
    float ve ;
    cin >> d >> h >> v >> e ;
    ve = e * M_PI * d * d ;
    ve = ve/4 ;
    if(ve >= v)
        cout << "NO" << endl ;
    else
    {
        float ans = h* M_PI *d*d ;
        ans = ans / 4 ;
        cout << "YES"  << endl << ans / (v-ve) << endl ;
    }
}