class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>res;
        for(int i  = 0 ; i < operations.size() ; i++){
            if(operations[i]=="C"){
                res.pop();
            }
            else if(operations[i]=="D"){
                res.push(res.top()*2);
            }
            else if(operations[i]=="+"){
                int val1 = res.top();
                res.pop();
                int val2 = res.top();
                res.push(val1);
                res.push(val1+val2);

            }
            else{
                res.push(stoi(operations[i]));
            }

        }
        int sum = 0 ;
        while(!res.empty()){
            sum += res.top();
            res.pop();
        }
        return sum;
    }
};