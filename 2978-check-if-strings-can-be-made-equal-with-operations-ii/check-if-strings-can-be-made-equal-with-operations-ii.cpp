class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();
        string a = "",b = "" , c ="",d="";

        for(int i = 0 ;i < n ; i++){
            if(i%2==0){
                a += s1[i];
                b += s2[i];
            }
            else{
                c += s1[i];
                d += s2[i];
            }
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        sort(c.begin() , c.end());
        sort(d.begin() , d.end());
        return (a==b)&&(c==d);
    }
};