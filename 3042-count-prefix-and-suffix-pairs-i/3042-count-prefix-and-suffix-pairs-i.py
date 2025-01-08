class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        cnt = 0 
        for i in range(len(words)-1):
            for j in range(i+1,len(words)):
                str1 = words[i]
                str2 = words[j]
                k = len(str1)
                n= len(str2)
                if k <= n:
                    if str1 == str2[:k] and str1 == str2[n-k:]:
                        cnt += 1
        return cnt 