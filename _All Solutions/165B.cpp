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

bool achievable(int v, int k , int n)
{
    int i = 0 ;
    int sum = v ;
    while(sum < n && v >= pow(k,i))
    {
        i++ ;
        sum += (int) floor(v/(pow(k,i))) ;
    }
    return sum >= n ;

}

int main()
{
    int t , n , i , k , x , v , l , r ;
    cin >> n >> k ;
    l = 1 ;
    r = n ;
    while(l < r)
    {
        v = (r+l)/2 ;
        bool test = achievable(v,k,n) ;
        if(test)
            r = v ;
        else
            l = v + 1 ;
        //printf("l : %d ; r : %d ; v : %d \n",l,r,v) ;
    }
    cout << r << endl ;
}