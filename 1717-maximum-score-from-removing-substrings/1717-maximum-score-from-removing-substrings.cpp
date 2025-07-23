class Solution {
public:
    string removeSubstr(string &s , string &matchstr){
        stack<char>st ; 
        for(char &ch:s){
            if(ch==matchstr[1] && !st.empty() && st.top()==matchstr[0]){
                st.pop() ;
            }
            else{
                st.push(ch) ;
            }
        }
        string temp ; 
        while(!st.empty()){
            temp +=st.top() ; 
            st.pop() ;
        }
        reverse(temp.begin(),temp.end()) ; 
        return temp ;
    }
    int maximumGain(string s, int x, int y) {
        int n = s.size() ; 
        int score = 0 ;
        string maxStr = (x>y)?"ab":"ba" ; 
        string minStr = (x<y)?"ab":"ba" ; 
        //first_pass
        string temp_first = removeSubstr(s,maxStr) ; 
        int L = temp_first.size() ; 
        int charRemoved = (n-L) ; 
        score += (charRemoved/2)*max(x,y) ; 
        //secondpass 
        string temp_second = removeSubstr(temp_first,minStr) ; 
        int rem  = temp_second.size() ; 
        int rem_char = (L-rem) ; 
        score += (rem_char/2)*min(x,y) ; 
        return score ;
    }
};