/*
problem statements - https://codeforces.com/problemset/problem/1648/A

*/

#include<bits/stdc++.h>
 
 using namespace std;
 typedef long long ll;
const int N = 1e6;
 
 vector<int> row[N] , col[N];
 
 int main(){
     
     int n, m;
     std::cin >> n>>m;
     
     for(int i = 1 ; i <= n ; i++){
         
         for(int j  = 1 ; j <= m ; j++){
             int x;
             cin>>x;
             row[x].push_back(i) , col[x].push_back(j);
         }
     }
     ll ans = 0;
     for(int i = 1 ; i <= N ; i++){
         
         sort(row[i].begin() , row[i].end());
         sort(col[i].begin() , col[i].end());
         
         ll s = 0 , s1 = 0;
         for(ll j = 0 ; j < row[i].size() ; j++){
             ans += j*row[i][j] - s;
             s += row[i][j];
             
             ans += j*col[i][j] - s1;
          
             s1 += col[i][j];
             
         }
     }
     
     std::cout << ans << std::endl;
     
     
 }
