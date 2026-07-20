class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size() != s3.size()){
            return false;
        }
        int m=s1.size();
        int n=s2.length();

        vector<vector<bool>> dp(m+1,vector<bool>(n+1,false));

        dp[0][0]=true;

        for(int i=1;i<=m;i++){
            dp[i][0]=dp[i-1][0] && (s1[i-1]==s3[i-1]);
        }
        for(int j=1;j<=n;j++){
            dp[0][j]=dp[0][j-1] && (s2[j-1]==s3[j-1]);
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                bool left = dp[i-1][j] && (s1[i-1]==s3[i+j-1]);
                bool top = dp[i][j-1] && (s2[j-1]==s3[i+j-1]);
                dp[i][j]=left || top;
            }
        }
        return dp[m][n];
    }
};
