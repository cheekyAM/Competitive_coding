class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int n=A.size();
        int maxsum=INT_MIN,minsum=INT_MAX,cur_max=0,cur_min=0;
        int total=0;
        for(int x:A){
            cur_max=max(x,cur_max+x);
            maxsum=max(maxsum,cur_max);
            cur_min=min(x,cur_min+x);
            minsum=min(cur_min,minsum);
            total +=x;
        }
        return maxsum>0?max(maxsum,total-minsum):maxsum;
    }
};
