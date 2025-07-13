class Solution:
    def hasMatch(self, s: str, p: str) -> bool:
        head , tail = p.split('*')
        print(head , tail)
        left , right = s.find(head) , s.rfind(tail)
        print(left,right)
        if left ==-1 or right ==-1:
            return False
        return left+len(head) <= right 

        