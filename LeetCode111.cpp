/*************************************************************************
	> File Name: LeetCode111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时52分26秒
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


int minDepth(struct TreeNode* root){
    if(root == NULL)return 0;
    if(root->left==NULL&&root->right!=NULL){
        return 1+minDepth(root->right);
    }
    if(root->right==NULL&&root->left!=NULL){
        return 1+minDepth(root->left);
    }
    int left=minDepth(root->left)+1;
    int right=minDepth(root->right)+1;
    return right>left? left:right;
}
