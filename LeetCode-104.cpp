/*************************************************************************
	> File Name: LeetCode-104.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时21分15秒
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
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};
