#define pb push_back
#define ph push_heap
#define pph pop_heap
class StockSpanner {
    vector<int> v;
public:
    StockSpanner() {
        //make_heap(v.begin(),v.end());
    }
    
    int next(int price) {
        int ans=1;
        v.pb(price);
        int n=v.size();
        
        int z =v[n-1];
        for(int i=n-2; i>=0; i--){
            if( z >= v[i] ){
               // cout<<ans<<" ";
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */