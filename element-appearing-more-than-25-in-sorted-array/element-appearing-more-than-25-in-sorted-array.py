class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n = len(arr)
        per = ((n)*25)//100
        num = set(arr)
        for i in num:
            if arr.count(i)>per:
                return i
        