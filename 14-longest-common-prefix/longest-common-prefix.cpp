class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string can = "";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=ch || i>=strs[j].size()){
                    return can;
                }
            }
            can+=ch;
        }
        return can;
    }
};