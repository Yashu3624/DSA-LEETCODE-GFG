#User function Template for python3

class Solution:
    def MedianOfArrays(self, a1, a2):
        a1 = a1 + a2
        a1 = sorted(a1)
        mid = len(a1)//2
        if len(a1)%2==1:
            return a1[mid]
        else:
            mid = mid-1
            m = mid+1
            res = (a1[mid]+a1[m])/2
            if res.is_integer():
                return int(res)
            else:
                return res
            

#{ 
 # Driver Code Starts
if __name__ == '__main__':
    tcs=int(input())

    for _ in range(tcs):
        m = input()
        arr1=[int(x) for x in input().split()]
        n = input()
        arr2=[int(x) for x in input().split()]
        
        
        ob = Solution()
        print(ob.MedianOfArrays(arr1,arr2))

# } Driver Code Ends