class Solution:
    def toHex(self, num: int) -> str:
        hex = '0123456789abcdef'
        res = ''
        if num<0:
            num += 2**32
        if num==0:
            return '0' 
        while num>0:
            res += hex[num%16]
            num //= 16
        return res[::-1]