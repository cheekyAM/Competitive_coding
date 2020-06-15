class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        int w=coordinates[0].size();
        assert(w==2);
        if(coordinates.size() == 0 )
            return false;
        else if(n==2)
            return true;
        
        for(int i=0;i<n-2;i++){
            vector<int> first = coordinates[i];
            vector<int> second=coordinates[i+1];
            vector<int> third=coordinates[i+2];
            int l=second[0]-first[0], r=third[1]-second[1];
            int l1=third[0]-second[0],r1=second[1]-first[1];
            int c = third[0]-first[0];
            int d = third[1]-first[1];
            if((l!=0 && l1!=0 && c!=0 ) &&  (r/l1 != r1/l  || d/c != r1/l || d/c != r/l1)){
                return false;
                
            }
        }
        return true;
    }
};