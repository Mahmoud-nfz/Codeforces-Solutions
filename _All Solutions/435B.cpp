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
#define arr(a,n,val) int *a = new int[n] ; fr(i,0,n) a[i] = val
#define matrix(M,n,m) int**M = new int*[n] ; fr(i,0,n) M[i] = new int[m]
#define outA(a,n) fr(_,0,n) cout << a[_] << " " ; cout << endl 
#define outM(M,n,m) fr(__,0,n) { outA(M[__],m) ; }

using namespace std;

int main()
{
    int k , j , temp ;
    string s ;
    cin >> s >> k ;
    int i = 0 ;
    while(i < s.size() && k)
    {
        //char stop = *min_element(s.begin(),s.end()) ;
        set<char> vis ;
        do
        {
        j = i ;
        temp = i ;
        while(j < s.size())
        {
            if(s[j] > s[temp] && vis.find(s[j]) == vis.end())
                temp = j ;
            j ++ ;
        }
        vis.insert(s[temp]) ;
        }while(k - (temp-i) < 0 ); // && s[temp] != stop) ;
        k -= temp - i ;
        while(temp>i)
        {
            swap(s[temp],s[temp-1]) ;
            temp -- ;
        }
        i ++ ;
    }
    cout << s << "\n" ;
}