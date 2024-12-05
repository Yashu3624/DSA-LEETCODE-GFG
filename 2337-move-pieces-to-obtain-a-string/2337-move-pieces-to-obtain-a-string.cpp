class Solution {
    void skipSpaces(string& s, int n, int& pos) {
        while (pos < n && s[pos] == '_') {
            pos++;
        }
    }
public:
    bool canChange(string start, string target) {
        int n = start.size();
        int first = 0, second = 0;

        while (first < n || second < n) {
            skipSpaces(start, n, first);
            skipSpaces(target, n, second);

            if (first == n && second == n) return true; 
            if (first == n || second == n) return false; 
            if (start[first] != target[second]) return false; 
            if (start[first] == 'L' && second > first) return false; 
            if (start[first] == 'R' && second < first) return false; 

            first++;
            second++;
        }

        return true;
    }
};
