/*

problem statement - https://codeforces.com/problemset/problem/1096/B

*/

#include <bits/stdc++.h>

using namespace std;
#define mode 998244353;
typedef long long ll;

int main()
{
    ll n;
    
    std::cin >> n;
    string str;
    cin>>str;
    
    ll l = 1 , r = 1;
    for(int i = 1 ; i < n; i++)
        if(str[i-1] != str[i]) break;
        else l++;
        
    for(int i = n - 2 ; i >= 0 ; i--) if(str[i] != str[i+1]) break;
                                        else r++;
                                        
    ll ans = (l+1)*(r+1) % mode ;
                                        
        if(str[0] == str[n-1]) cout<< ans<< "\n";
        else 
        std::cout << l + r + 1 << std::endl;
    
    
     
    
    
    

    return 0;
}
