
//! leetcode - 1038 
class Solution {
    public:
        void StoringInorder(TreeNode* root, vector<int>& inorder) {
            // base case
            if (root == NULL)
                return;
    
            // l
            StoringInorder(root->left, inorder);
            // n
            inorder.push_back(root->val);
            // r
            StoringInorder(root->right, inorder);
        }
        void updatingInorder(vector<int>&inorder){
            int n = inorder.size() ; 
            for(int i = n -1 ; i>=0 ; i--){
                if(i+1 < n){
                    int nexvalue = inorder[i+1] ; 
                    int sum = inorder[i] + nexvalue ; 
                    inorder[i] = sum ; 
                }
            }
        }
        void insertion(vector<int>&inorder,TreeNode*& root,int&index ){
            // base case 
            if(root == NULL) {
                return  ; 
            }
            // lnr 
            insertion(inorder,root->left,index) ; 
            root->val = inorder[index++] ;  
            insertion(inorder,root->right,index) ; 
        }
        TreeNode* bstToGst(TreeNode* root) {
          // step 1 : storing inorder in a vector 
          // step 2 : updating inorder , adding greater elements value in a curr node 
          // step 3 : inserting update value in BST 
    
            vector<int> inorder;
            StoringInorder(root, inorder);
            updatingInorder(inorder) ; 
    
            // step 3 : 
            int index = 0 ; 
            insertion(inorder,root,index) ; 
            return root ; 
            
        }
    };