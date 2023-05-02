class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        x,y = num1.split('+')
        x = int(x)
        y = int(y[:-1])
        a,b = num2.split('+')
        a  = int(a)
        b = int(b[:-1])
        real = x*a+y*b*(-1)
        img = x*b+y*a
        return str(str(real)+"+"+str(img))+"i"