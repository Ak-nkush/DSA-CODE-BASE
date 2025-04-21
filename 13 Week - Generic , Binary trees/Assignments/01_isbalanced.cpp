// O(N) complexity of checking binary tree is balanced or not 
class Solution {
    public:
        bool isBalance = true ; 
        int getHeight(TreeNode*root ){
            if(!root) return 0 ; 
            
            int LH = getHeight(root->left) ; 
            int RH = getHeight(root->right) ;
    
            if(isBalance && (abs(LH - RH) > 1)) {
                isBalance = false ; 
            }
    
            return max(LH,RH) + 1 ; 
        }
        bool isBalanced(TreeNode* root) {
            getHeight(root) ; 
            return isBalance ; 
        }
    };