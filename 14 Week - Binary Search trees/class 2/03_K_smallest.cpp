//! - 230. Kth Smallest Element in a BST

class Solution {
    public:
        void inorderTraversal(TreeNode* root, int k,int & count , int & ans){
            // base  case 
            if(root == NULL){
                return ;
            }
            inorderTraversal(root->left , k , count , ans) ;
            count++ ; 
            if(count == k){
                ans = root->val ; 
            }
            inorderTraversal(root->right , k , count , ans) ;
        }
        int kthSmallest(TreeNode* root, int k) {
            // approach second - without storing 
            int count = 0 ;
            int ans ;  
            inorderTraversal(root , k , count , ans) ; 
            return ans ; 
        }
    };