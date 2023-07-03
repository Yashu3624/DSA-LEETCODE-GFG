class Solution:
    def minNumber(self, nums1: List[int], nums2: List[int]) -> int:
        n = 10
        for i in nums1:
            if i in nums2:
                n = min(n,i)
        if n!=10:
            return n 

        a = min(nums1)
        b = min(nums2)
        n1 = a*10+b
        n2 = b*10+a
        return min(n1,n2)
