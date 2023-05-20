class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for word in words:
            w = word
            rev = word[::-1]
            if rev==w:
                return w
        return ""