#include<iostream>
#include<vector>

//! leetcode - 653 - two sum IV 
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
    
        bool findTarget(TreeNode* root, int k) {
            vector<int> inorder;
            // as we know inrder is storing in BST
            StoringInorder(root, inorder);
    
            int start = 0;
            int end = inorder.size() - 1;
    
            while (start < end) {
    
                int sum = inorder[start] + inorder[end];
    
                if (sum == k){
                      
                       return true;
                }
    
                if (sum < k) {
                    // sum ko badana he
                    start++;
                }
                if (sum > k) {
                    // sum ko kam karana he
                    end--;
                }
            }
            return false;
        }
    };