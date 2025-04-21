// leetcode 113 

class Solution {
    public:
        void solve(TreeNode* root, int targetSum ,int sum , vector<int>&path ,  vector<vector<int>>&ans ){
          // base condition 
          if(root == NULL) return ; 
          
          sum = sum + root->val ; 
          path.push_back(root->val) ; 
          
          // current node processing 
          if(root->left == NULL && root->right == NULL) {
            if(sum == targetSum) {
                 ans.push_back(path) ; 
            } 
            path.pop_back() ; //!-> if we are taking path by reference we have to backtrack it ans why after leaf node because we have to cancel that left leaf for insertion of right leaf 
             return ;      
          }
    
          // baaki recursion kar lenga 
           solve(root->left , targetSum , sum , path , ans) ;
           solve(root->right , targetSum , sum , path , ans) ;
         
            path.pop_back() ; //!-> why we applied after right call only because , right se wapas jaana means going back to root 
        
        }
    
        vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            // here we have to return paths in the tree which is equal to target 
            // we have to write our own fun because paramter are not present to keep 
            // track of the path , sum and finalAns 
    
            int sum = 0 ; 
            vector<int> path ; 
            vector<vector<int>> ans ; 
    
            solve(root , targetSum , sum , path , ans) ; 
            return ans ; 
        }
    };