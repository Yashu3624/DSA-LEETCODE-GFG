class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        ans = defaultdict(int)
        count = 0
        for i in grid:
            ans[str(i)] += 1
        for i in range(len(grid[0])):
            temp = []
            for j in range(len(grid)):
                temp.append(grid[j][i])
            count += ans[str(temp)]
        return count 
