/*
problem statement - https://codeforces.com/problemset/problem/1433/E
*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    
    ll arr[n+1];
    
    arr[0] = 1;
    
    for(int i = 1 ; i <= n ; i++) arr[i] = arr[i-1]*i;
    
    
    ll ans = ((arr[n])/(arr[n/2]))/arr[n/2];
    
    
    ans= ans*arr[n/2 -1]*arr[n/2 - 1];
    
    std::cout << ans/2 << std::endl;
    return 0;
}
