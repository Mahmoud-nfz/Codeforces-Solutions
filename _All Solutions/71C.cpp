#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int a[n] ;
    // for(int i = 0 ; i < n ; i++)
    //     cin >> a[i] ;
    vector <int> divs ;
    divs.push_back(1) ;
    int i = 2 ;
    int temp = n ;
    while(temp>1){
        // cout << "a" << n << "b" << i ;
        if(temp%i == 0 && n/i > 2){
            divs.push_back(i) ; cout << i << " " ;}
        while(temp%i == 0)
            temp /= i ;
        i ++ ;
    }
    string ans = "NO\n" ;
    // for(auto div : divs){
    //     // cout << div << " " ;
    //     for(int start = 0 ; start < div ; start ++)
    //     {
    //         bool check = 1 ;
    //         for(int i = start ; i < n ; i += div)
    //         {
    //             if(!a[i]){
    //                 check = 0 ;
    //                 break ;
    //             }
    //         }
    //         if(check){
    //             // cout << div << " " << start ;
    //             ans = "YES\n" ;
    //             break ;
    //         }
    //     }
    //     if(ans == "YES\n")
    //         break ;
    // }
    for(i = 1 ; i*i <= n ; i ++)
    {
        if(n%i == 0)
            cout << i << " " << (n/i) << " " ;
    }
    cout << ans ;
}