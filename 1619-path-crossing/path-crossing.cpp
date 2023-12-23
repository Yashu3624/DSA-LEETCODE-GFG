class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string>st ;
        int x = 0 ; 
        int y = 0 ;
        string Path = to_string(x)+"_"+to_string(y);
        st.insert(Path);
        for(int i = 0 ; i < path.size() ; i++){
            if(path[i]=='N') y++;
            else if(path[i]=='S') y--;
            else if(path[i]=='E') x++;
            else x--;
            Path = to_string(x)+"_"+to_string(y);
            if(st.find(Path)!=st.end()){
                return true ;
            }
            else{
                st.insert(Path);
            }
        }
        return false;
    }
};