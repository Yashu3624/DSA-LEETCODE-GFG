class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
        int start = 0 ;
        int ans = 0;
        int end = l.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(l[mid]>target){
                ans = mid ;
                end = mid - 1 ;
            }
            else{
                start = mid +1;
            }
        }
        return l[ans];
    }
};