class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        word = list(word)
        if ch in word:
            indx = word.index(ch)
            k = word[0:indx+1]
            k = k[::-1]
            for i in range(indx+1,len(word)):
                k.append(word[i])
        else:
            return "".join(word)
        return "".join(k)
        