class Solution {
    int z;
public:
    bool isPerfectSquare(int num) {
        
        int z=(int) sqrt(num);
        if((float)num/z==z){
            return true;
        }
        return false;
    }
};