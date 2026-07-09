class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<int ,vector<int>>> max_heap;  

       for(const auto& point:points){
            int x=point[0];
            int y=point[1];
            int num=x*x+y*y;

            if(max_heap.size()<k){
                max_heap.push({num,point});
            }
            else if(num<max_heap.top().first){
                max_heap.pop();
                max_heap.push({num,point});
            }
       }
        vector<vector<int>> ans;
        while(!max_heap.empty()){
            ans.push_back(max_heap.top().second);
            max_heap.pop();
       }
        return ans;
    }
};
