/*************************************************************************
	> File Name: LeetCode-110.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时29分20秒
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int dep(struct TreeNode*root){
    if(root==NULL)return 0;
        if(root==NULL)
            return 0;
        int left=dep(root->left)+1;
        int right=dep(root->right)+1;
        return left>right?left:right;
}

bool isBalanced(struct TreeNode* root){
    if(root==NULL)return true;
    if(dep(root->left)-dep(root->right)>1||dep(root->left)-dep(root->right)<-1){
        return false;
    }else{
    return isBalanced(root->right)&&isBalanced(root->left);
}
}
