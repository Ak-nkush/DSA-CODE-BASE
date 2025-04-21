// leetcode - 437 

class Solution {
    public:
        void getSum(TreeNode* root , int targetSum , int&count , long long int sum ){
            // base case 
            if(root == NULL) return ; 
            // another base condition 
            // if(sum > targetSum ) return ; 
            
            //! we wrote the above condition because value within the node where too large which was giving runtime error  but this contradicts when target sum is negative because initial our sum is zero , to solve this we can use long long to store larger value 
    
            sum = sum + root->val ; 
            if(sum == targetSum) count++ ; 
    
            // baaki recursion 
            getSum(root->left , targetSum , count , sum) ; 
            getSum(root->right , targetSum , count , sum) ; 
        }
        void helper(TreeNode*root , int targetSum , int &count){
            if(root == NULL) return ; 
              
            long long int  sum = 0  ; 
            getSum(root , targetSum , count , sum ) ; 
            
    
            helper(root->left , targetSum,count) ; 
            helper(root->right , targetSum , count ) ; 
        } 
        int pathSum(TreeNode* root, int targetSum) {
            // base case 
            if(root == NULL) return 0 ; 
            int sum = 0 ; 
            int count = 0 ; 
            helper(root , targetSum , count ) ; 
    
            return count ; 
        }
    };