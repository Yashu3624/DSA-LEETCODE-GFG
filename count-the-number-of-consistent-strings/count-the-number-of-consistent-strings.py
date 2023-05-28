class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        allow = set(allowed)
        cnt = 0 
        for i in words:
            for char in i:
                if char not in allow:
                    cnt += 1
                    break
        return len(words)- cnt

        