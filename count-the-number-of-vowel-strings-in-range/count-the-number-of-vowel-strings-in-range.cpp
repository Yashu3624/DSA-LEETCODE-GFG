class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0 ;
        for(int i = left ; i <= right ; i++){
            string k = words[i];
            int n = k.size()-1;
            if((k[0]=='a'||k[0]=='e' || k[0]=='i' || k[0]=='o'|| k[0]=='u') && (k[n]=='a'||k[n]=='e' || k[n]=='i' || k[n]=='o'|| k[n]=='u'))
            count++ ;
        }
        return count ;
    }
};