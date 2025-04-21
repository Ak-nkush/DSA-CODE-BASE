//! - leetcode 543

class Solution {
    public:
        int NodeDepth(TreeNode* root){
            if(root == NULL) return 0 ; 
    
            int left = NodeDepth(root->left) ; 
            int right = NodeDepth(root->right) ; 
            return max(left , right) + 1 ; 
        }
    
        int diameterOfBinaryTree(TreeNode* root) {
            if(root == NULL) return 0 ; 
            // option 1 : answer on the left subTree 
            int option1 = diameterOfBinaryTree(root->left) ;
    
            // option 2 : answer on the right subTree  
            int option2 = diameterOfBinaryTree(root->right) ; 
    
            // option 3 : left + right = height(depth) ; 
            int option3 = NodeDepth(root->left) + NodeDepth(root->right) ; 
            
            return max(option1 , max(option2 , option3 )) ; 
        }
    };