class Solution {
    public List<String> wordSubsets(String[] words1, String[] words2) {
        List<String>ans = new ArrayList<>() ; 
        int[] target = new int[26] ; 
        for(String st: words2){
            int[] temp = new int[26] ; 
            for(char ch: st.toCharArray()){
                temp[ch-'a']++ ;
                target[ch-'a'] = Math.max(target[ch-'a'], temp[ch-'a']) ; 
            }
        }
        for(String a : words1){
            int[] arr = new int[26] ; 
            for(char c:a.toCharArray()) arr[c-'a']++ ; 
            if(subset(arr,target)){
                ans.add(a) ; 
            }
        }
        return ans ; 

    }
    
      private boolean subset(int[] arr, int[] target) {
        for (int i = 0; i < 26; i++) {
            if (arr[i] < target[i]) {
                return false;
            }
        }
        return true;
    }
}