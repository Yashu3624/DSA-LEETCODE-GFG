class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        c = []
        cnt = 0 
        for i in range(len(A)):
            a = A[:i+1]
            b = B[:i+1]
            for j in a:
                if j in b :
                    cnt += 1
            c.append(cnt)
            cnt = 0 
        return c
        