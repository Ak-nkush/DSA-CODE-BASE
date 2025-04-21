// leetcode 236 

class Solution {
    public:
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            // base cases : 
            if(root == NULL) return NULL ; 
            if(root == p ) return p ; 
            if(root == q ) return q ;
    
            TreeNode* leftsubtree = lowestCommonAncestor(root->left , p , q ) ;  
            TreeNode* rightsubtree = lowestCommonAncestor(root->right , p , q ) ;  
    
            if(leftsubtree == NULL && rightsubtree == NULL) return NULL ; 
            else if(leftsubtree == NULL && rightsubtree != NULL) return rightsubtree ; 
            else if(leftsubtree != NULL && rightsubtree == NULL) return leftsubtree ; 
            else{
                // left = p 
                // right = q or viceversa 
                // them return root 
                return root ; 
            } 
    
            
        }
    };