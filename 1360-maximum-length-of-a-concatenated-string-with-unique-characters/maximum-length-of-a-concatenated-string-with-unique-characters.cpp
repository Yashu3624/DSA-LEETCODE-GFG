class Solution {
public:
    int check(string s){
        int cnt[26] = {0};
        for(int i = 0 ; i < s.size() ; i++){
            cnt[s[i]-'a']++;
            if(cnt[s[i]-'a']>1) return 0;
            
            
        }
        return s.size();
    }
    void f(vector<string>&arr , int idx , string curr , int& ans ){
        if(idx==arr.size()){
            if(check(curr)>ans){
                ans = curr.size();
            }
            return ;
        }
        f(arr,idx+1,curr,ans);
        f(arr,idx+1,curr+arr[idx],ans);
    }
    int maxLength(vector<string>& arr) {
        int ans = 0 ;
        f(arr,0,"",ans);
        return ans ;
        
    }
};