#User function Template for python3

class Solution:
    def divide(self, a, b):
        #code here
        limit = 2**31
        res = int(a/b)
        if res>limit-1:
            return limit-1
        if res<-limit:
            return -limit
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        inp = list(map(int,input().split())) 
        
        a=inp[0]
        b=inp[1]
        
        ob=Solution()
        
        print(ob.divide(a,b))
        
# } Driver Code Ends