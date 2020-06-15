class Solution {
public:
    int findComplement(int num) {
        int newnum=num;
        int cnt=0;
        for(int i=31;i>=0;i--){
          if(((1 << i) & newnum) == pow(2,i)){
              for(int j=i;j>=0;j--){
                  newnum =newnum ^ (1 << j);   
              }
              return newnum;
            }
        }
        return 0 ;
    }
};