class Solution:
    def isValid(self, word: str) -> bool:
        vowels = 'aeiouAEIOU'
        cnt = 0
        cnt2 = 0 
        if len(word)<3:
            return False
        else:
            for i in word:
                if i.isalnum():
                    if i in vowels:
                        cnt += 1
                    elif i >='A' and i <= 'Z' or i>='a' and i<='z' and i not in vowels:
                        cnt2 += 1
                else:
                    return False
        print(cnt,cnt2)
        return cnt>=1 and cnt2>=2




        