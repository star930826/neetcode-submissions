class Solution {
private:
    void dfs(vector<vector<char>>&grid,int r,int c){
        int m=grid.size();
        int n=grid[0].size();
        if(r<0||r>=m||c<0||c>=n||grid[r][c]=='0')return;

        grid[r][c]='0';
        dfs(grid,r-1,c);//top
        dfs(grid,r+1,c);//down
        dfs(grid,r,c-1);//left
        dfs(grid,r,c+1);//right
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()||grid[0].empty()) return 0;

        int m=grid.size();
        int n=grid[0].size();
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};
