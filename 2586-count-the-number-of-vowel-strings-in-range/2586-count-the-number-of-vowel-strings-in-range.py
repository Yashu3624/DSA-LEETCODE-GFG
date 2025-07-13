class Solution:
    def vowelStrings(self, words: List[str], left: int, right: int) -> int:
        vowels = "aeiouAEIOU"
        cnt = 0 
        for i in range(left , right+1):
            word = words[i]
            if word[0] in vowels and word[len(word)-1] in vowels:
                cnt += 1
        return cnt 
        