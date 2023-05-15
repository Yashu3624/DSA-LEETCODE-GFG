#User function Template for python3

class Solution:
    def secFrequent(self, arr, n):
        a = []
        d = {}
        for i in arr:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for i in d:
            a.append(d[i])
        a.sort()
        res = a[-2]
        for i in d:
            if d[i]==res:
                return i

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input().strip())
        arr = input().strip().split(" ")
        ob = Solution()
        ans = ob.secFrequent(arr,n)
        print(ans)
# } Driver Code Ends