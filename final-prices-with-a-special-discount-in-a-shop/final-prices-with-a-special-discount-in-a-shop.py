class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        res = []
        for i in range(len(prices)):
            for j in range(i+1, len(prices)):
                if(prices[i]>=prices[j]):
                    prices[i]=prices[i]-prices[j]
                    break
            res.append(prices[i])
        return res
            