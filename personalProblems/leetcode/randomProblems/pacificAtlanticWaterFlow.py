from typing import List


class Solution:
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        if not heights:
            return []

        self.m = len(heights)
        self.n = len(heights[0])

        pacific_visited = [[False for _ in range(self.n)] for _ in range(self.m)]
        atlantic_visited = [[False for _ in range(self.m)] for _ in range(self.n)]

        result = []

        for i in range(self.m):
            self.dfs(heights, i, 0, pacific_visited)
            self.dfs(heights, i, self.n - 1, atlantic_visited)
        for j in range(self.n):
            self.dfs(heights, 0, j, pacific_visited)
            self.dfs(heights, self.m - 1, j, atlantic_visited)

        for i in range(self.m):
            for j in range(self.n):
                if pacific_visited[i][j] and atlantic_visited[i][j]:
                    result.append([i, j])

        return result

    def dfs(self, heights, i, j, visited):
        visited[i][j] = True
        for dir in self.directions:
            x = i + dir[0]
            y = j + dir[1]

            if (
                (x > 0 and x < self.m)
                or (y > 0 and y < self.n)
                or (heights[i][j] < visited[x][y] or heights[x][y])
            ):
                self.dfs(heights, x, y, visited)


x = Solution()

print(
    x.pacificAtlantic(
        [
            [1, 2, 2, 3, 5],
            [3, 2, 3, 4, 4],
            [2, 4, 5, 3, 1],
            [6, 7, 1, 4, 5],
            [5, 1, 1, 2, 4],
        ]
    )
)
