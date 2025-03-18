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
             return ;      
          }
    
          // baaki recursion kar lenga 
           solve(root->left , targetSum , sum , path , ans) ;
           path.pop_back() ; 
           solve(root->right , targetSum , sum , path , ans) ;
           path.pop_back() ; 
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