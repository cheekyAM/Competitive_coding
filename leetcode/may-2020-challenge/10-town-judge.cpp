#define pb push_back
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> v,z;
        for(vector<int> x:trust){
            v.pb(x[0]);
        }
        for(int i=1;i<=N;i++){
           auto it = find(v.begin(), v.end(), i);
            if(it == v.end()){
                z.pb(i);
            }
        }
        int k=z.size();
        for(int j=1; j<=k;j++){
            int cnt=0;
            int p=z[j-1];
            for(vector<int> x:trust){
                if(x[1]==p)
                    cnt++;
            }
            if (cnt==N-1)
                return p;
        }
        return -1;
    }
};