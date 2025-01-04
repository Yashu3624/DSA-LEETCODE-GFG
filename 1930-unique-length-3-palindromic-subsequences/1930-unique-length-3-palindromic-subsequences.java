class Solution {
    public int countPalindromicSubsequence(String s) {
        Set<Character>st = new HashSet() ; 
        for(Character c : s.toCharArray()){
            st.add(c) ; 
        }
        int ans = 0 ; 
        for(Character c: st){
            int i = -1 ; 
            int j = 0 ; 
            for(int k = 0 ; k < s.length() ; k++){
                if(s.charAt(k)==c){
                    if(i==-1){
                        i = k ; 
                    }
                    j = k ; 
                }
            }
            Set<Character>mp = new HashSet() ; 
            for(int k = i + 1 ; k < j ; k++){
                mp.add(s.charAt(k)) ; 
            }
            ans += mp.size() ; 
        }
        return ans ; 
    }
}