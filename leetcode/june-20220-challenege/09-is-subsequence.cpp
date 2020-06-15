class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        for(int i=n-1;i>=0 && m>=1;i--){
            if(t[i]==s[m-1]){
                m--;
            }
        }
        if(m>0)
            return false;
        
        return true;
    }
};