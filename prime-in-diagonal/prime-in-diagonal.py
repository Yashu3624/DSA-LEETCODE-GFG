class Solution:
    def diagonalPrime(self, nums: List[List[int]]) -> int:
        res = []
        for i in range(len(nums)):
            for j in range(len(nums[0])):
                if i==j:
                    res.append(nums[i][j])
                    res.append(nums[i][len(nums)-i-1])
        flag = 0 
        for i in range(len(res)):
            for j in range(2,int(sqrt(res[i]))+1):
                if res[i]%j == 0:
                    break
            else:
                if res[i]>flag:
                    flag = res[i]
        if flag == 1:
            return 0 
        return flag
        