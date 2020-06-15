class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(char c : s){
            ++m[c];
        }
        int n=s.length();
        for(int i=0;i<n;i++){
            if(m[s[i]]==1)
                return i;
        }
        
        return -1;
        
    }
};