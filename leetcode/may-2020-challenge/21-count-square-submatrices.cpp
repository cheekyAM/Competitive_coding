class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int h=matrix.size();
        int w=matrix[0].size();
        int cnt=0;
        vector<vector<int>> dp(h,vector<int>(w));
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(i==0 || j==0)
                    dp[i][j]=matrix[i][j];
                else{
                    if (matrix[i][j]==1){
                        dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
                    }
                    else
                        dp[i][j]=0;
                }
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cnt +=dp[i][j];}
        }
        return cnt;
        
    }
};