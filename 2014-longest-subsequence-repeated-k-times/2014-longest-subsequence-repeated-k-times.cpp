class Solution {
public:
    string result="" ; 
    bool isSubsequence(string& s , string& curr , int k){
        int i = 0 ; 
        int j = 0 ; 
        int L = curr.length()  ; 
        int n = s.length() ; 
        while(i<n && j < L*k){
            if(s[i]==curr[j%L]){
                j++ ; 
            }
            i++ ; 
        }
        return j==L*k ;
    }
     void backtracking(string s , string curr , vector<bool>canUse , vector<int>requiredFreq , int k , int maxLen ){
        if(curr.length()>maxLen) return ; 
        if((curr.length()>result.length() || (curr.length()==result.length() && curr>result)) && isSubsequence(s,curr,k)){
            result = curr ; 
        }
        for(int i = 0  ; i < 26 ; i++){
            if(canUse[i]==false || requiredFreq[i]==0) continue ; 
            char ch = i +'a' ; 
            curr.push_back(ch) ; 
            requiredFreq[i]-- ; 
            backtracking(s,curr,canUse , requiredFreq , k , maxLen) ; 
            curr.pop_back() ; 
            requiredFreq[i]++ ; 
        }
     }
    string longestSubsequenceRepeatedK(string s, int k) {
        int freq[26] = {} ; 
        int n = s.length() ; 
        for(char &ch : s){
            freq[ch-'a']++ ; 
        }
        vector<bool>canUse(26,false) ;
        vector<int>requiredFreq(26,0) ; 
        for(int i = 0 ; i < 26 ; i++){
            if(freq[i]>=k){
                canUse[i] = true ; 
                requiredFreq[i] = freq[i]/k  ; 

            }
        }
        int maxLen = n/k ; 
        string curr ; 
        backtracking(s,curr , canUse , requiredFreq , k , maxLen ) ; 
        return result ; 
    }
};