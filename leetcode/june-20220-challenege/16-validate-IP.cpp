class Solution {
    vector<string> v;
    vector<char> c={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F'};
    vector<char> it={'0','1','2','3','4','5','6','7','8','9'};
public:
    void brk(string IP){
        string word="";
        for(auto x:IP){
            if(x=='.'||x==':'){
                v.push_back(word);
                word="";
            }
            else{
                word = word+x;
            }
        }
        v.push_back(word);
    }
    
    string validIPAddress(string IP) {
        string s;
        if(IP.find(":")==string::npos){
            s="IPv4";
        }
        else
            s="IPv6";
        
        brk(IP);
        int m=v.size();
        if(m == 4 || m==8){
 
        if(s=="IPv4"){
            for(int i=0;i<m;i++){
                string z=v[i];
                if(z=="" || z.length() >3  )
                    return "Neither";
                for(int j=0;j<z.length();j++){
                    if(find(it.begin(),it.end(),v[i][j])==it.end() || stoi(z) > 255 || stoi(z)<0)
                        return "Neither";
                    if(v[i][j]=='0' && z.length() !=1 && j==0){
                        return "Neither";
                    }    
                }
            }
        }
        else{
            for(int i=0;i<m;i++){
                string z=v[i];
                if(z=="" ||z.length() > 4)
                    return "Neither";
                for(int j=0;j<z.length();j++){
                    if(find(c.begin(),c.end(),v[i][j])==c.end())
                        return "Neither";
            }
            
        }
    }
        }
    else{
            return "Neither";
        }
        
        return s;
    }
};
