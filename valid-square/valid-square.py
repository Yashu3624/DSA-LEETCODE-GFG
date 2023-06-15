class Solution:
    def validSquare(self, p1: List[int], p2: List[int], p3: List[int], p4: List[int])-> bool:
        def d(a,b):
            return (a[0]-b[0])**2+(a[1]-b[1])**2
        l = [
            d(p1,p2),
            d(p1,p3),
            d(p1,p4),
            d(p2,p3),
            d(p2,p4),
            d(p3,p4),
        ]
        l.sort()
        return 0<l[0]==l[1]==l[2]==l[3] and l[4]==l[5]

        

        