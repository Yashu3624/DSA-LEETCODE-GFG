class Solution {
public:
    string triangleType(vector<int>& nums) {
        if (nums.size() != 3) {
            return "none";
        }

        // Sort the vector in non-decreasing order
        sort(nums.begin(), nums.end());

        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        if (a + b > c) {
            if (a == b && b == c) {
                return "equilateral";
            } else if (a == b || b == c || a == c) {
                return "isosceles";
            } else {
                return "scalene";
            }
        } else {
            return "none";
        }
    }
};