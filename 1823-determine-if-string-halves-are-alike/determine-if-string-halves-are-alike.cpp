class Solution {
public:
    bool halvesAreAlike(string s) {
       int left = 0 , right = 0 ;
       int l = s.size() /2 ;
       transform(s.begin() , s.end() , s.begin() , ::tolower);
       for(int i = 0 ; i < l ; i++){
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               left++;
           }
       } 
       for(int i = l ; i < s.size() ; i++){
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               right++;
           }
       }
       if(left==right)
       return true;
       return false; 
    }
};