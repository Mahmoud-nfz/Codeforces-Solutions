#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

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
    int t , n , i , k , x , *a , *b , sum = 0 ;
    cin >> n ;
    int flag = 1 ;
    fr(i,0,n)
    {
        cin >> x ;
        if (x % 2 == 0)
        {
            cout << x / 2 << '\n';
        }
        else 
        {
            cout << (x + flag) / 2 << '\n';
            flag *= -1;
        }
    }
}