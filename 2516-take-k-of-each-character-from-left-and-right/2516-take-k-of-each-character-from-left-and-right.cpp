
class Solution {
public:
    int takeCharacters(string s, int k) {
        int cntA = 0, cntB = 0, cntC = 0;
        int n = s.size();
        
        for (char c : s) {
            if (c == 'a') cntA++;
            if (c == 'b') cntB++;
            if (c == 'c') cntC++;
        }

        if (cntA < k || cntB < k || cntC < k) return -1;

        int remA = cntA - k, remB = cntB - k, remC = cntC - k;
        int maxLen = 0, j = 0;
        cntA = cntB = cntC = 0;

        for (int i = 0; i < n; i++) {
            cntA += (s[i] == 'a');
            cntB += (s[i] == 'b');
            cntC += (s[i] == 'c');

            while (cntA > remA || cntB > remB || cntC > remC) {
                cntA -= (s[j] == 'a');
                cntB -= (s[j] == 'b');
                cntC -= (s[j] == 'c');
                j++;
            }

            maxLen = max(maxLen, i - j + 1);
        }

        return n - maxLen;
    }
};
