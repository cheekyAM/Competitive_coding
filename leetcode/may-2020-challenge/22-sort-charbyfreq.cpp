bool cmp(pair<int,char>& m1,pair<int,char>& m2){
        return m1.first > m2.first;
    }
class Solution {
    
public:
    string frequencySort(string s) {
        string ans="";
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        vector<pair<int, char> > v;
        for(auto& i:m)
            v.push_back({i.second,i.first});
        
        sort(v.begin(),v.end(),cmp);
        for(auto &i:v){
            char c=i.second;
            int n=i.first;
            for(int j=0;j<n;j++)
                ans +=c;
        }
        return ans;
    }
};
