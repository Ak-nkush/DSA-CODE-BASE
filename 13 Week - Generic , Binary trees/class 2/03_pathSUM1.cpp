// leetcode 112 

class Solution {
    public:
        bool solve(TreeNode* root, int targetSum , int sum ){
            // base case 
            if(root == NULL) return false ;
             
            sum = sum + root->val ; 
            
            if(root->left == NULL && root->right == NULL) {
                // in this case we are on leaf node 
                if(sum == targetSum){
                    return true ; 
                }
                else{
                    return false ;
                }
            }
    
            //baaki recursion , 
            bool leftans = solve (root->left , targetSum , sum ) ;  
            bool rightans = solve (root->right , targetSum , sum ) ; 
    
            return leftans || rightans ;  
        }
        bool hasPathSum(TreeNode* root, int targetSum) {
            // here there is no parameter to keep track of sum of the path 
            // so we have to use our own function 
    
            int sum = 0 ; 
            bool ans = solve (root , targetSum , sum ) ; 
            return ans ; 
    
        }
    };
