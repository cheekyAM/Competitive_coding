class Solution {
public:
    void dfs(string src,unordered_map<string,vector<string>> &m,vector<string> &v){
        while(!m[src].empty()){
            string s=m[src].back();
            m[src].pop_back();
            dfs(s,m,v);
        }
        v.push_back(src);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> v;
        unordered_map<string,vector<string>> m;
        
        int n=tickets.size();
        for(int i=0;i<n;i++){
            m[tickets[i][0]].push_back(tickets[i][1]);
            
        }
        for(auto &i:m){
            sort(i.second.begin(),i.second.end(),greater<string>());
        }
        
        dfs("JFK",m,v);
        reverse(v.begin(),v.end());
        return v;
    }
};
