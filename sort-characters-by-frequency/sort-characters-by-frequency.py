class Solution:
    def frequencySort(self, s: str) -> str:
        res = ''
        l = sorted(list(set(s)) , key = s.count , reverse = True)
        for i in l:
            res += i * s.count(i)
        return res
         