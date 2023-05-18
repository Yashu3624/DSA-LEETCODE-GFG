#User function Template for python3

class Solution:
	def singleNumber(self, nums):
		# Code here
		d = {}
		res = []
		for i in nums:
		    if i in d:
		        d[i] += 1
		    else:
		        d[i]=1
	    for i in d:
	       if d[i]==1:
	           res.append(i)
	    res.sort()
	    return res



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		v = list(map(int,input().split()))
		ob = Solution();
		ans = ob.singleNumber(v)
		for i in ans:
			print(i, end = " ")
		print()

# } Driver Code Ends