#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static const int MOD = 1e9 + 7;
    
    int numberWays(vector<vector<int>>& hats) {
        int n = hats.size();
        
        // hat -> people who can wear it
        vector<vector<int>> hatToPeople(41);
        for (int i = 0; i < n; i++) {
            for (int h : hats[i]) {
                hatToPeople[h].push_back(i);
            }
        }
        
        // dp[mask] = number of ways to assign hats for people in mask
        vector<long long> dp(1 << n, 0);
        dp[0] = 1;
        
        for (int h = 1; h <= 40; h++) {
            vector<long long> newdp = dp;
            
            for (int mask = 0; mask < (1 << n); mask++) {
                if (dp[mask] == 0) continue;
                
                for (int person : hatToPeople[h]) {
                    if ((mask & (1 << person)) == 0) {
                        int newMask = mask | (1 << person);
                        newdp[newMask] = (newdp[newMask] + dp[mask]) % MOD;
                    }
                }
            }
            dp = newdp;
        }
        
        return dp[(1 << n) - 1];
    }
};
