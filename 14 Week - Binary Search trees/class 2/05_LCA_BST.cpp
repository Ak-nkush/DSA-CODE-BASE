// leetcode - 255 

class Solution {
    public:
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            // approach 1 - LCA in binary tree - TC - o(n) ;  
            // here we are using approach 2 - TC - o(logN)
    
            // base case  ; 
            if(root == NULL) return NULL ; 
           
            // case 1 : when p an q are present in left subtree 
            if(p->val < root->val && q->val < root->val ){
                // ! note - our previous ans was wrong because here we were not returning any nodes and same mistake we did for case 2 , that why it was returning root everytime
                TreeNode*leftans = lowestCommonAncestor(root->left , p , q ) ;
                if(leftans != NULL) return leftans ;  
            }
            // case 2 : when p and q are present in right subtree 
            if(p->val > root->val && q->val > root->val ){
               TreeNode*rightans = lowestCommonAncestor(root->right , p , q ) ;
                if(rightans != NULL) return rightans ;  
    
            }
            
            // case 3 : p is in left and q is in right 
            // case 4 : q is in right and p is in left 
            // both the above cases ans will be root 
    
            return root ; 
        }
    };