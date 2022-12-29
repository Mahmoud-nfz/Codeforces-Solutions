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
    int t , n , m , i , j , k , x , a , b ;
    cin >> n >> m ;
    vector <seti> graph (n) ;
    seti s ;
    fr(i,0,m)
    {
        cin >> a >> b ;
        a-- ;
        b-- ;
        graph[a].insert(b) ;
        graph[b].insert(a) ;
    }
    /*
    fr(i,0,n)
    {
        cout << i << " : " ;
        for(auto bb : graph[i])
            cout << bb << " " ;
        cout << endl ;
    }
    */
    int items_removed = 0 , steps = 0 ;
    do
    {
        items_removed = 0 ;
        fr(i,0,n)
        {
            if(graph[i].size() == 1)
            {
                items_removed ++ ;
                s.insert(i) ;
            }
        }
        for(int elem : s)
        {
            for(auto aa : graph[elem])
                graph[aa].erase(elem) ;
            graph[elem].clear() ;
        }
        steps ++ ;
    }while(items_removed != 0) ;
    cout << steps - 1 << endl ;
    /*
    fr(i,0,n)
    {
        cout << i << " : " ;
        for(auto bb : graph[i])
            cout << bb << " " ;
        cout << endl ;
    }
    */
}