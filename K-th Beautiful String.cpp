/*

problem statement - https://codeforces.com/problemset/problem/1328/B


*/


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define F(i , n , s) for(int i = 0 ; i < n ;i++) s += 'a'
int main()
{
    ll t;
    std::cin >> t;
    
    while(t--){
        
        ll n,k;
        cin>>n>>k;
    string s="";
 
    int i = 0;
    F(i, n, s);
    
    for(i = n- 2 ; i>= 0 ; i--)  {
        
        if(k <= n-i-1){
            s[i] = 'b';
            s[n-k] = 'b';
            break;
        }
        
        k -= n-i-1;
    }
    
    std::cout << s << std::endl;
    
    
    
    }

    return 0;
}
