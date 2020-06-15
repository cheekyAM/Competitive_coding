class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        vector<vector<int>> v(n,vector<int>(2));
        vector<bool> w(n);
        sort(people.begin(),people.end());
        
        for(int i=0;i<n;i++){
            int pos=people[i][1];
            int val=people[i][0];
            int k=0,cnt=0;
            for(int j=0;j<pos;j++){
                if(!w[j] )
                    k++;
                else{
                    if(v[j][0] >= val)
                        cnt++;
                }
            }
            if(k==pos || cnt==pos || k+cnt==pos){
                while(w[pos]){
                    pos++;
                }
                v[pos][0]=val;
                v[pos][1]=people[i][1];
                w[pos]=true;
            }
            else{
                while(cnt+k != people[i][1]){
                    if(v[pos][0] >= val)
                        cnt++;
                    else if(!w[pos] )
                        k++;
                    
                    pos++;
                }
                while(w[pos] && pos < n){
                    pos++;
                }
                v[pos][0]=val;
                v[pos][1]=people[i][1];
                w[pos]=true;
            }   
            
        }
        return v;
    }
};