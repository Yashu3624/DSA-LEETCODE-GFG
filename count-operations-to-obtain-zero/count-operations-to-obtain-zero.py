class Solution:
    def countOperations(self, num1: int, num2: int) -> int:

        if num1==num2 and num1!=0 and num2!=0:
            return 1
        count = 0 
        while num1 != 0 and num2 != 0 :
            if num1>num2 :
                count += 1
                num1 -= num2
            else:
                count += 1
                num2 -= num1
        return count
