class Solution {
public:
    string removeKdigits(string num, int k) {
       int n = num.size();
    // Write your code here.
    if(num.size()<=k) return "0";
    if(k==0) return num ;

    string res = "";
    stack<char>st ;
    st.push(num[0]);
    for(int i = 1 ; i < n ; i++){
        while(!st.empty() && k>0 && st.top()>num[i]){
            --k;
            st.pop();
        }
        st.push(num[i]);
        if(st.size()==1 && num[i]=='0'){
            st.pop();
        }
    }
    while(k>0 && !st.empty()){
        st.pop();
    --k;
    }
   
        while(!st.empty())
        {
            res.push_back(st.top()); // pushing stack top to string
            st.pop(); // pop the top element
        }
        
        reverse(res.begin(),res.end());
    if(res.size()==0) return "0";
    return res;
    }
};