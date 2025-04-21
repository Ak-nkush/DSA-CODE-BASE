/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

//! - leetcode 450 ; 

class Solution {
    public:
        int getMax(TreeNode*& root) {
            int ans;
            if (root->right == NULL) {
                return root->val;
            }
            ans = getMax(root->right);
            return ans;
        }
        TreeNode* deleteNode(TreeNode* root, int key) {
            // base case
            if (root == NULL)
                return NULL;
    
            // Now searching
            if (root->val == key) {
                // case 1 : no child
                if (root->left == NULL && root->right == NULL) {
                    delete root;
                    return NULL;
                }
    
                // case 2 : only left is present
                if (root->left != NULL && root->right == NULL) {
                    // save left child
                    TreeNode* leftchild = root->left;
                    // isolate root
                    root->left = NULL;
                    delete root;
                    return leftchild;
                }
    
                // case 3 : only right is present
                if (root->right != NULL && root->left == NULL) {
                    // save right child
                    TreeNode* rightchild = root->right;
                    // isolate root
                    root->right = NULL;
                    delete root;
                    return rightchild;
                }
    
                // case 4 : both child are present
                if (root->right != NULL && root->left != NULL) {
                    // it this we can save orderly predecessor or orderly successor
                    // in orderly predecessor - we have max from left tree
                    int maxvalue = getMax(root->left);
                    // copy into actual root
                    root->val = maxvalue;
                    root->left = deleteNode(root->left, maxvalue);
                    return root;
                }
            } else {
                // searching in left or right subtree
                if (key > root->val) {
                    root->right = deleteNode(root->right, key);
                } else {
                    root->left = deleteNode(root->left, key);
                }
            }
    
            return root;
        }
    }; 