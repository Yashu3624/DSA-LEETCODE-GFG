#User function Template for python3

class Solution:
    def romanToDecimal(self, s): 
        # code here
        total = 0
        roman = {
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000
        }
        for i in range(len(s)-1):
            if roman[s[i]]<roman[s[i+1]]:
                total -= roman[s[i]]
            else:
                total += roman[s[i]]
        total += roman[s[-1]]
        return total

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for _ in range(t):
        ob = Solution()
        S = input()
        print(ob.romanToDecimal(S))
# } Driver Code Ends