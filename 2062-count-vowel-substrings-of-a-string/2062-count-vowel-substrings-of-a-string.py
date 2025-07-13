class Solution:
    def countVowelSubstrings(self, word: str) -> int:
        cnt = 0 
        current = set()
        for i in range(len(word)):
            if word[i] in 'aeiou':
                current.add(word[i])

                for j in range(i+1,len(word)):
                    if word[j] in 'aeiou':
                        current.add(word[j])
                    else:
                        break
                    if len(current)==5:
                        cnt += 1
                current = set()
        return cnt 

        