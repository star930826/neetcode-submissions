class Solution {

public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,amount+1);
        dp[0]=0;
        for(int i=0;i<=amount;i++){
            for(int coin :coins){
                //算不了的會跳過 也就不會改變裡面原本amount+1
                if(i>=coin){
                    dp[i]=min(dp[i],dp[i-coin]+1);
                    //ex:若是6 coins[i]=3 6>3 原本6-3 也就是3這格用的錢+1 初始每格除了0都是amount+1
                    //都很大 所以比小就會留正確的數字
                }
            }
        }
        return dp[amount]>amount? -1 :dp[amount];
    }
};
