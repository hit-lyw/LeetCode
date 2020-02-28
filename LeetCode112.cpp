/*************************************************************************
	> File Name: LeetCode112.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时19分20秒
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


bool hasPathSum(struct TreeNode* root, int sum){
    if(root==NULL)return false;
    sum=sum-root->val;
    if(root->left==NULL&&root->right==NULL){
        if(sum==0)return true;
    }
    return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);
    
}

