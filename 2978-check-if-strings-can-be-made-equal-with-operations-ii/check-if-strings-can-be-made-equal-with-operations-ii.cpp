class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char ,int>s1_e ,s1_o,s2_e,s2_o;
        for(int i = 0 ; i < s1.size() ; i++){
            if(i%2==0){
                s1_e[s1[i]]++;
                s2_e[s2[i]]++;
            }
            else{
                s1_o[s1[i]]++;
                s2_o[s2[i]]++;
            }
        }
        return s1_e==s2_e && s1_o==s2_o;
    }
};