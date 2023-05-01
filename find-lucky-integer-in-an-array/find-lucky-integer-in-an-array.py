class Solution:
    def findLucky(self, arr: List[int]) -> int:
        max_fre = -1
        for i in arr:
            s = arr.count(i)
            if i == s:
                max_num = i 
                if max_fre<max_num:
                    max_fre= max_num
        return max_fre

