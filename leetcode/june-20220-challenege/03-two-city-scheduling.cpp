class Solution {
public:
    static bool cmp(vector<int> l, vector<int> m){
        return abs(l[0]-l[1]) > abs(m[0]-m[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int a,b,sum=0;
        a=b=n/2;
        
        sort(costs.begin(),costs.end(),cmp);
        for(int i=0;i<n;i++){
            if(b==0 || (costs[i][0]<=costs[i][1] && a>0)){
                a--;
                sum +=costs[i][0];
            }
            else{
                b--;
                sum += costs[i][1];
             }
        }
        
        return sum;
    }
};