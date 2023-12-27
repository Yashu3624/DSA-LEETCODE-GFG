class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        int n = colors.size();
        stack<int>st ; 
        st.push(time[0]);
        int ans = 0;
        for(int i = 1 ; i < n ; i++){
            if(colors[i-1]==colors[i]){
                if (st.top() < time[i]) {
                    ans += st.top();
                    st.pop();
                    st.push(time[i]);
                } else {
                    ans += time[i];
                }
            } else {
                st.push(time[i]);
            }
        }

        return ans;
    }
};