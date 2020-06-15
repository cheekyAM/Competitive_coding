class Solution {
public:
    int h,w;
    
    void fill(vector<vector<int>>& image,int r,int c,int val,int newColor,vector<vector<bool>>& chk){
        auto check=[&](int r,int c){
            return r >= 0 && r<h && c>=0 && c<w;
        };
        
        if(check(r,c) && chk[r][c]==false  &&  image[r][c]==val ){
            chk[r][c]=true;
            image[r][c] = newColor;
            fill(image,r-1,c,val,newColor,chk);
            fill(image,r,c-1,val,newColor,chk);
            fill(image,r+1,c,val,newColor,chk);
            fill(image,r,c+1,val,newColor,chk);
        }
        else
            return;   
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         h=image.size();
         w=image[0].size(); 
         vector<vector<bool>> chk(h,vector<bool>(w));
        
        int val=image[sr][sc];
        fill(image,sr,sc,val,newColor,chk);
        return image;
    }
};