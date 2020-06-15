class RandomizedSet {
    unordered_set<int> s;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        //ok
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(s.find(val)==s.end()){
            s.insert(val);
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(s.find(val)==s.end()){
            
            return false;
        }
        else{
            s.erase(s.find(val));
            return true;
        }
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        static int k=0;
        k=rand()%s.size();
        int cnt=0;
        for(auto it=s.begin();it!=s.end();it++){
            if(cnt==k)
                return *it;
            else{
                cnt++;
            }
        }
        return *s.begin();
       
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */