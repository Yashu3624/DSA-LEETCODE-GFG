class Solution:
    def maxDifference(self, s: str) -> int:
        freq = Counter(s)
        maxi_odd = []
        maxi_even = []
        for ch , value in freq.items():
            if value%2==0:
                maxi_even.append(value)
            else:
                maxi_odd.append(value)
        maxi_odd.sort()
        maxi_even.sort()
        print(maxi_odd)
        print(maxi_even)
        n = len(maxi_odd)
        m  = len(maxi_even)
        ans = 0
        if(maxi_odd[n-1]>maxi_even[m-1]):
            ans = maxi_odd[n-1]-maxi_even[0]
        
        else:
            ans = maxi_even[n-1]-maxi_odd[0]

     
        return ans
        