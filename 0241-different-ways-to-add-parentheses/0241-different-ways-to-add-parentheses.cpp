class Solution {
public:
    vector<int> diffWaysToCompute(string exp) {
        vector<int>ans ; 
        for(int i = 0 ; i < exp.size() ; i++){
            char ch = exp[i] ; 
            if(ch=='+' || ch=='-' || ch=='*'){
                vector<int>left = diffWaysToCompute(exp.substr(0,i)) ; 
                vector<int>right = diffWaysToCompute(exp.substr(i+1)) ; 
                for(int it :left ){
                    for(int j: right){
                        if(ch=='*'){
                            ans.push_back(it*j) ; 
                        }
                        else if(ch=='+'){
                            ans.push_back(it+j) ; 
                        }
                        else if(ch=='-'){
                            ans.push_back((it)-(j)) ; 
                        }
                    }
                }
            }
        }
        if(ans.size()==0) ans.push_back(stoi(exp)) ;
        return ans ; 
    }
};