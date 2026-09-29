class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        def dfs(r: int, c: int) -> int:
            if r < 0 or r >= rows or c < 0 or c >= cols:
                return 1

            if grid[r][c] == 0:
                return 1

            if grid[r][c] == 2:
                return 0

            grid[r][c] = 2

            return (
                dfs(r - 1, c)  # 上
                + dfs(r + 1, c)  # 下
                + dfs(r, c - 1)  # 左
                + dfs(r, c + 1)  # 右
            )

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 1:
                    return dfs(r, c)

        return 0 