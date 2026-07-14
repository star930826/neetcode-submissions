class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int max=0;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]){
                min=prices[i];
                //紀錄目前購入價最小
            }
            if(max<prices[i]-min){
                max=prices[i]-min;
                //紀錄目前賺最多是多少
            }
        }
        //跑一輪
        return max;
    }
};
