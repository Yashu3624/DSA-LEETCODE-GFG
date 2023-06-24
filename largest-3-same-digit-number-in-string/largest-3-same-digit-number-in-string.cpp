class Solution {
public:
    string largestGoodInteger(string num) {
        string res ;
        int l = num.length();
        for(int i = 0 ; i < l-2 ; i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                string ans;
                ans.push_back(num[i]);
                ans.push_back(num[i+1]);
                ans.push_back(num[i+2]);
                res = max(ans,res);
            }
        }
        return res;
    }
};