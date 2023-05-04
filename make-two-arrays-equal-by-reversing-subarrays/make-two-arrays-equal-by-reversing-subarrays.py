class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        target = sorted(target)
        arr = sorted(arr)
        for i in range(len(arr)):
            if target[i]!=arr[i]:
                return False
        return True

