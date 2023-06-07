class Solution:
    def twoSum(self, num: List[int], target: int) -> List[int]:
        start , end = 0 , len(num)-1
        while start < end:
            if num[start]+num[end]==target:
                return (start+1,end+1)
            if num[start]+num[end]>target:
                end -= 1
            else:
                start += 1