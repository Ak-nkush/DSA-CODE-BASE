//! - leetcode 104 ; 

class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if(root == NULL) return 0 ; 

            int  leftSubTree = maxDepth(root -> left) ; 
            int  RightSubTree = maxDepth(root -> right) ; 
            int  maxDepth = max(leftSubTree , RightSubTree) ; 
            
            return maxDepth + 1 ; 
        }
    };