class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        res = []
        w1 = "qwertyuiop"
        w2 =  "asdfghjkl"
        w3 = "zxcvbnm"
        for word in words:
            w = word.lower()
            if len(set(w1+w))==len(w1) or len(set(w2+w))==len(w2) or len(set(w3+w))==len(w3):
                res.append(word)
        return res