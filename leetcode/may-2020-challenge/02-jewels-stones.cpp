class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int m=S.length();
        int n=J.length();
        int cnt=0;
        for(char c : J){
           for(char x:S){
               if(c==x){
                   cnt++;
               }
           }
        }
        return cnt;
        
    }
};