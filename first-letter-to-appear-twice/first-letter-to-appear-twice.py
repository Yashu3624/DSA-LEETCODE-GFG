class Solution:
    def repeatedCharacter(self, s: str) -> str:
        map=defaultdict(int)
        for i in s:
            map[i]+= 1
            if map[i]>=2:
                return i
        