/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// [8,5,1,7,10,12]


class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.empty())
            return NULL;
        int r=preorder[0];
        int n=preorder.size();
        vector<int> smaller,greater;
        
        for(int x=1;x<n;x++){
            if(preorder[x]<r)
                smaller.push_back(preorder[x]);
            else
                greater.push_back(preorder[x]);
        }
        TreeNode* root=new TreeNode(r);
        root->left= bstFromPreorder(smaller);
        root->right= bstFromPreorder(greater);
        return root;
    }
};