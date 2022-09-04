/*
problem statement - https://codeforces.com/problemset/problem/617/B

*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
   ll n;
   std::cin >> n;
   
   std::vector<ll> arr(n) ;
   
   for(int i = 0 ; i < n ; i++) std::cin >> arr[i];
   
   ll result = 0 , prev = -1;
   
   
   for(int i = 0 ; i < n ; i++){
       
       if(arr[i] == 1 ){
           
           if(prev == -1) {
               result = 1;
               prev = i;
           }else{
               result *= (i - prev);
           }
           prev = i;
       }
   }
   
   std::cout << result << std::endl;
    return 0;
}
