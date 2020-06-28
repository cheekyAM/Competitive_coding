class Solution {
public:
    bool issquare(int n){
        if(n<0)
            return false;
        int m=sqrt(n);
        return m*m==n;
    }
    int numSquares(int n) {
        int m=sqrt(n);
        if(issquare(n))
            return 1;
        while((n&3) == 0){
            n=n>>2;
        }
        if((n&7)==7){
            return 4;
        }
        for(int i=1;i<=m;i++){
            if(issquare(n-i*i))
                return 2;    
        }
        return 3;
    }
};
