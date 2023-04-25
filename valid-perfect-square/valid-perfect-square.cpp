class Solution {
public:
    bool isPerfectSquare(int num) {
        int res = sqrt(num);
        if(res*res==num)
        return true;
        else
        return false;
    }
};