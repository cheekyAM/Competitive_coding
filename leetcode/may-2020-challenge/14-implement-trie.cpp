class Trie {
    vector<string> v;
public:
    /** Initialize your data structure here. */
    Trie() {
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        v.push_back(word);
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        if(find(v.begin(),v.end(),word) != v.end() )
            return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        for(string s : v){
            for(int i=0;i<prefix.length();i++){
                if(s[i] != prefix[i]){
                    break;
                }
                else if(s[i]==prefix[i] && i== prefix.length() -1 ){
                    return true;
                }
            }
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */