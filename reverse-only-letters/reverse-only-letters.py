class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        l = list(s)
        i , j = 0 , len(l)-1
        while i < j:
            if not l[i].isalpha():
                i += 1
            elif not l[j].isalpha():
                j -= 1
            else:
                l[i] , l[j] = l[j] , l[i]
                i , j = i+1 , j-1
        return "".join(l)