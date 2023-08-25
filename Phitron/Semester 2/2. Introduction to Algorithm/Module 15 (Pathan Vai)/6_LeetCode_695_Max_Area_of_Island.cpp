class Solution {
public:
    int n, m;

    bool visited[100][100];

    vector<pair<int, int>> path = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    bool isValid(int cI, int cJ){
        if(cI>=0 && cI<n && cJ>=0 && cJ<m){
            return true;
        }
        else{
            return false;
        }
    }

    void dfs(int si, int sj, vector<vector<int>>& grid){
        visited[si][sj] = true;
        cnt++;

        for(int i=0; i<4; i++){
            pair<int, int> p = path[i];

            int cI = si + p.first; 
            int cJ = sj + p.second; 

            if(isValid(cI, cJ)){
                if(visited[cI][cJ] == false && grid[cI][cJ] == 1){
                    dfs(cI, cJ, grid);
                }
            }
        }
    }

    int cnt;

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int maxx = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visited[i][j] == false && grid[i][j] == 1){
                    cnt = 0;
                    dfs(i, j, grid);
                    maxx = max(maxx, cnt);
                }
            }
        }
        return maxx;
    }
};