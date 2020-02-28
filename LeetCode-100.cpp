/*************************************************************************
	> File Name: LeetCode-100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时27分52秒
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


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p==NULL&q==NULL)return true;
    if(p==NULL||q==NULL)return false;
    if(p->val==q->val){
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
    return false;
}
