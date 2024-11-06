class Solution {
public:
    void bubbleSort(vector<int> &arr, int n)
    {
        int i, j;
        bool swapped;
        for (i = 0; i < n - 1; i++) {
            swapped = false;
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1] && __builtin_popcount(arr[j]) == __builtin_popcount(arr[j+1])) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            if (swapped == false)
                break;
        }
    }
public:
    bool canSortArray(vector<int>& nums) {
        vector<int> dup = nums;
        sort(nums.begin(), nums.end());
        if(nums == dup) return true;
        bubbleSort(dup, nums.size());
        if(nums == dup) return true;
        return false;
    }
};