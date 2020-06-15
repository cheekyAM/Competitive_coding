class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int m=amount;
        int dp[m+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=0;i<coins.size();i++){
        for(int j=coins[i];j<=m;j++){
            dp[j] += dp[j-coins[i]];
        }
    }
        return dp[m];
    }
};