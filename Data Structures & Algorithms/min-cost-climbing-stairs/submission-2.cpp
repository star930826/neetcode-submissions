class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.empty()) return 0;
        if(cost.size()==1) return 0;
        int p1=0;
        int p2=0;
        for(int i=2;i<=cost.size();i++){
            int current=min(p1+cost[i-1],p2+cost[i-2]);
            p2=p1;
            p1=current;
        }
        return p1;
    }
};
