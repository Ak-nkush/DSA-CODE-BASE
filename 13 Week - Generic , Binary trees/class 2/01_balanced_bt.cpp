// leetcode 110 

class Solution {
    public:
        int getHeight(TreeNode* root){
            // base case 
            if(root == NULL) return 0 ; 
            int leftHeight = getHeight(root->left) ; 
            int rightHeight = getHeight(root->right) ; 
            return max(leftHeight, rightHeight) + 1 ; 
        }
        bool isBalanced(TreeNode* root) {
            // base case 
            if(root == NULL){
                return true ; 
            }
            // now we have to find height of leftsubtree and height of right subtree
            int leftsubtree = getHeight(root->left) ; 
            // height of right subtrees 
            int rightsubtree = getHeight(root->right) ; 
            
            bool status = false ; 
            if(abs(leftsubtree - rightsubtree) <= 1){
                status = true  ; 
            }
            //! we have written above line of code with our intuition , visible test cases get executed but it won't get submit because uptill above we having taken leftsubtree height and rightsubtree height its  only for root and for root if it get balanced we are return true else false , but this is wrong we have to check for each node and then we have to return final answer , the tree ahould be balanced for leftsubtree and rightsubtree and its difference should also be <=1 for each node of tree from  its leaf to root 
    
    
           // for checking balanceness in left and right sub tree 
           bool leftCheck = isBalanced(root->left) ; 
           bool rightCheck = isBalanced(root->right) ; 
    
           return leftCheck && rightCheck && status ; 
        }
    };