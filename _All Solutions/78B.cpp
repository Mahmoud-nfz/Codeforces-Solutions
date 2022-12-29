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
    cin >> n ;
    char cols[7] = {'R','O','Y','G','B','I','V'} ;
    char output[103] ;
    fr(i,0,n - n % 7)
        cout << cols[i%7] ;
    switch(n%7)
    {
        case 0 :
            cout << "" ;
            break ;
        case 1 :
            cout << "G" ;
            break ;
        case 2 :
            cout << "GB" ;
            break ;
        case 3 :
            cout << "YGB" ;
            break ;
        case 4 :
            cout << "YGBI" ;
            break ;
        case 5 :
            cout << "OYGBI" ;
            break ;
        case 6 :
            cout << "OYGBIV" ;
            break ;
    }
    cout << endl ;
}