class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res = []
        for i in range(left,right+1):
            num = i
            ans = True
            if "0" not in str(i):
                while num:
                    rem = num%10
                    if i%rem != 0:
                        ans = False
                    num = num//10
                if ans:
                    res.append(i)
        return res

