class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.length()==1 && s[0]=='1')
        return true;
        for(int i=1;i<s.length();i++){
            if(s[i]=='1'){
                if(s[i-1]=='1'){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};