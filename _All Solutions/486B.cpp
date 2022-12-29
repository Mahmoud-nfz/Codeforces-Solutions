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
#define arr(a,n,val) a = new int[n] ; fr(i,0,n) a[i] = val
#define matrix(M,n,m) M = new int*[n] ; fr(i,0,n) M[i] = new int[m] 

using namespace std;

int main()
{
    int t , n , m , i , j , k , x , y , *a ;
    cin >> m >> n ;
    int **A , **B , *cols , *rows ;
    arr(cols,n,1) ;
    arr(rows,m,1) ;
    matrix(B,m,n) ;
    matrix(A,m,n) ;
    /*
    B = new int*[m] ;
    fr(i,0,m)
        B[i] = new int[n] ;
    */
    fr(i,0,m)
    {
        fr(j,0,n)
        {
            cin >> B[i][j] ;
            if(!B[i][j])
                cols[j] = 0 , rows[i] = 0 ;
        }
    }
    fr(i,0,m)
    {
        fr(j,0,n)
        {
            if(B[i][j] && !cols[j] && !rows[i])
            {
                cout << "NO\n" ;
                return 0 ;
            }
        }
    }
    fr(i,0,m)
    {
        fr(j,0,n)
        {
            if(!cols[j] || !rows[i])
            {
                A[i][j] = 0 ;
            }
            else
                A[i][j] = 1 ;
        }
    }
    
    arr(cols,n,0) ;
    arr(rows,m,0) ;
    fr(i,0,m)
    {
        fr(j,0,n)
        {
            cols[j] |= A[i][j] ;
            rows[i] |= A[i][j] ;
        }
    }
    fr(i,0,m)
    {
        fr(j,0,n)
        {
            if(B[i][j] != (cols[j] || rows[i]))
            {
                cout << "NO\n" ;
                return 0 ;
            }
        }
    }


    
    cout << "YES\n" ;
    fr(i,0,m)
    {
        fr(j,0,n)
        {
            cout << A[i][j] << " " ;
        }
        cout << endl ;
    }
}