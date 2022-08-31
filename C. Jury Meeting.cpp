/*

problem statements - https://codeforces.com/problemset/problem/1569/C

n  people gathered to hold a jury meeting of the upcoming competition, the i-th member of the jury came up with ai tasks, which they want to share with each other.

First, the jury decides on the order which they will follow while describing the tasks. Let that be a permutation p of numbers from 1 to n (an array of size n where each integer from 1 to n occurs exactly once).

Then the discussion goes as follows:

If a jury member p1 has some tasks left to tell, then they tell one task to others. Otherwise, they are skipped.
If a jury member p2 has some tasks left to tell, then they tell one task to others. Otherwise, they are skipped.
...
If a jury member pn has some tasks left to tell, then they tell one task to others. Otherwise, they are skipped.
If there are still members with tasks left, then the process repeats from the start. Otherwise, the discussion ends.
A permutation p is nice if none of the jury members tell two or more of their own tasks in a row.

Count the number of nice permutations. The answer may be really large, so print it modulo 998244353.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

The first line of the test case contains a single integer n (2≤n≤2⋅105) — number of jury members.

The second line contains n integers a1,a2,…,an (1≤ai≤109) — the number of problems that the i-th member of the jury came up with.

The sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, print one integer — the number of nice permutations, taken modulo 998244353.
 
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll mode = 998244353;
 
int main()
{
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        
        cin>>n;
        
        
        std::vector<ll> arr(n) ;
        
        // for(int i = 0 ; i < n ; i++) cin>>arr[i];
        
        for(ll &x : arr) cin>>x;
        
        ll mx = *max_element(arr.begin() , arr.end());
        
        ll maxCount = count(arr.begin() , arr.end() , mx);
        ll k = count(arr.begin() , arr.end() , mx - 1);
        
        ll ans = 1,sub = 1;
    
    for(ll i = 1 ; i <= n ; i++) {ans = (ans*i)%mode;
            if(i != k + 1) sub = (sub*i)%mode;
    }
       
        // std::cout << ans <<" " << maxCount<< std::endl;
        if(maxCount > 1) std::cout << ans << std::endl;
        else{
            
             
            
            ans = (ans - sub + mode )%mode;
            std::cout << ans << std::endl;
        }
        
        
        
        
        
    }

    return 0;
}
