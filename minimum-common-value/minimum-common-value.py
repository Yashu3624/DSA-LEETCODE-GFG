class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        res = []
        nums2 = Counter(nums2)
        for i in nums1:
            if i in nums2:
                res.append(i)
        if len(res)==0:
            return -1
        else:
            return min(res)