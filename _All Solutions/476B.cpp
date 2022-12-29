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

float get_proba(int pos , int expect_pos , int unknown)
{
    if(unknown == 0)
        return pos == expect_pos ;
    return 0.5*get_proba(pos+1,expect_pos,unknown-1) + 0.5*get_proba(pos-1,expect_pos,unknown-1) ;
}
int main()
{
    int t , n , i , j , k , x , *a ;
    string s1 , s2 ;
    cin >> s1 ;
    cin >> s2 ;
    int expected_pos = 0 , pos = 0 , unknown = 0 ;
    n = s1.length() ;
    fr(i,0,n)
    {
        expected_pos += (s1[i] == '+') - (s1[i] == '-') ;
        pos += (s2[i] == '+') - (s2[i] == '-') ;
        unknown += s2[i] == '?' ;
    }
    float ans = get_proba(pos,expected_pos,unknown) ;
    printf("%.9f\n",ans) ;
}
