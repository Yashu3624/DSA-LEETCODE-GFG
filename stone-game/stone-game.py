class Solution:
    def stoneGame(self, piles: List[int]) -> bool:
        a ,  b = 0 , 0 
        piles = sorted(piles)
        piles = piles[::-1]
        for i in range(len(piles)):
            if i%2==0:
                a += piles[i]
            else:
                b += piles[i]
        if a>=b:
            return True
        else:
            return False