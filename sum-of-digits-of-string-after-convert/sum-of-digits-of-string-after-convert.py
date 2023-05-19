class Solution:
    def getLucky(self, s: str, k: int) -> int:
        num = ''
        for ch in s:
            ans = str(ord(ch)-96)
            num =num + ans
        num = int(num)
        
        for i in range(k):
            num = sum(list(map(int,str(num))))
        return num

            
        



        
    