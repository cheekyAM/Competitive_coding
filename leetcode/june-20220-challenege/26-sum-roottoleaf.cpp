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
    long long sum=0;
public:
    void calc(TreeNode* root,string s){
        
        if(root->left==NULL && root->right==NULL){
            s=s+to_string(root->val);
            sum += stoi(s);
        }
        else{
            s=s+ to_string(root->val);
            if(root->left)
                calc(root->left,s);
            if(root->right)
                calc(root->right,s);
        }
    }
    
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        string s="";
        calc(root,s);
        return sum;
    }
};
