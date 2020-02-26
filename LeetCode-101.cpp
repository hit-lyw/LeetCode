/*************************************************************************
	> File Name: LeetCode-101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 15时55分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool x(struct TreeNode* a,struct TreeNode*b){
        if(!a&&!b)return true;
        if(a&&!b||!a&&b||a->val!=b->val)return false;
        if(!x(a->left,b->right))return false;
        if(!x(a->right,b->left))return false;
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return x(root->left,root->right);
        
    }
};
