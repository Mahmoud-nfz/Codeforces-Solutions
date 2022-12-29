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

int main()
{
    int t , n , i , k , x , *a ;
    string s ;
    cin >> s ;
    n = s.length() ;
    if(n == 1)
    {
        cout << 0 << endl ;
        return 0 ;
    }
    x = 0 ;
    fr(i,0,n)
        x += s[i] - '0' ;
    i = 1 ;
    while(x >= 10)
    {
        //cout << x << endl ;
        int temp = x % 10 ;
        while(x /= 10)
            temp += x%10 ;
        x = temp ;
        i ++ ;
    }
    cout << i << endl ;
    

}