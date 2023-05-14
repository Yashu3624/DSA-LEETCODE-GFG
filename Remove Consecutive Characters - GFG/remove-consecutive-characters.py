#User function Template for python3

class Solution:
    def removeConsecutiveCharacter(self, S):
        
        # code here
        res = []
        for i in S:
            if len(res)>0 and i==res[-1]:
                res.pop()
            res.append(i)
        return ''.join(res)
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())

    for tcs in range(T):
        s = input()
        ob = Solution()
        print(ob.removeConsecutiveCharacter(s))

# } Driver Code Ends