/*

problem statement - https://codeforces.com/problemset/problem/1326/C


*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mode 998244353
#define F(i , n ) for(int i = 0 ; i < n ;i++) 
int main()
{
    ll t = 1;
    // std::cin >> t;
    
    while(t--){
        
        ll n,k;
        cin>>n>>k;
        
 
        std::vector<ll> arr(n) , present(n , 0) ;
        int i =0; 
        F(i , n) std::cin >> arr[i];
        
        int n1 = n;
        ll sum1 = 0;
        std::set<ll > s ;
        while(k > 0){
            s.insert(n1);
            sum1 += n1;
            n1--;
            k--;
        }
        i = 0;
        F(i , n)
            if(s.find(arr[i]) != s.end()) present[i] = 1;
            
        i = 0;
        ll ans = 1 , first = -1;
        F(i , n){
            if(present[i] == 1 && first == -1){
                first = i;
            }else if(present[i] == 1){
                
                ans = (ans*(i - first))%mode;
                first = i;
            }
        }
        
        std::cout << sum1 << " " << ans << std::endl;
        
        
    
    
    }

    return 0;
}
