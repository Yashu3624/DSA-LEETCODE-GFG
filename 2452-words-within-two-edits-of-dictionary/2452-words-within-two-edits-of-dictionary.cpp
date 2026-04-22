class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans ; 
        for(string q : queries){
            for(string d : dictionary){
                int dis = 0 ; 
                for(int i = 0 ; i < q.size() ; i++){
                    if(q[i]!=d[i]){
                        dis++;
                    }
                }
                if(dis <=2){
                    ans.push_back(q) ; 
                    break ; 
                }
            }

        }
        return ans ; 
    }
};