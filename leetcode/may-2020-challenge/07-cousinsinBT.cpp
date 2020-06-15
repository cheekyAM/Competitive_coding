/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution { 
public:
    int parent(TreeNode* root, int x,int p){
        if(root==NULL ){
            return 0;
        }
        
        if(root->val == x){
            return p;
        }
        
            return max(parent(root->left,x,root->val) , parent(root->right,x,root->val));
        
    }
    int depth(TreeNode* root, int x,int d){
        if(root==NULL)
            return 0;
        if(root->val == x){
            return d;
        }
        
        return  max(depth(root->left,x,d+1), depth(root->right,x,d+1));
        
        ;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int a=depth(root,x,0);
        int b=depth(root,y,0);
        if(a==b){
            if(parent(root,x,-1) != parent(root,y,-1)){
                return true;
            }
        }
        
        return false;
        
    }
};