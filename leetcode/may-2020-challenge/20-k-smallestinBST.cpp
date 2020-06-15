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
    vector<int> v;
public:
    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);        
    }
    int kthSmallest(TreeNode* root, int k) {
          
//         queue<TreeNode*> q;
//         if(root == NULL)
//             return 0;
//         q.push(root);
//         while(!q.empty()){
//             TreeNode* z = q.front();
//             v.push_back(z->val);
//             q.pop();
//             if(z->left)
//                 q.push(z->left);
//             if(z->right)
//                 q.push(z->right);
            
//         }
//         make_heap(v.begin(),v.end(),greater<int>());
//         while(k-1>0){
//             pop_heap(v.begin(),v.end(),greater<int>());
//             v.pop_back();
//             k--;
//         }
        inorder(root);
        return v[k-1]; 
    }
};