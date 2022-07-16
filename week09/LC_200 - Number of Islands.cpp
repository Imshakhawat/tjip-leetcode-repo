
// TC: O(m*n)
// MC: O(m*n)
// m = rows
//n = columns
class Solution
{
public:
    const char VISITED = '2';
    const int dirs[5] = {-1, 0, 1, 0, -1};
    int n, m;
    void dfs(int x, int y, vector<vector<char>> &grid)
    {
        grid[x][y] = VISITED;
        for (int i = 0; i < 4; ++i)
        {
            int X = x + dirs[i];
            int Y = y + dirs[i + 1];
            if (X >= 0 && Y >= 0 && X < n && Y < m && grid[X][Y] == '1')
            {
                dfs(X, Y, grid);
            }
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int island_count = 0;
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '1')
                {
                    dfs(i, j, grid);
                    island_count++;
                }
            }
        }

        return island_count;
    }
};
