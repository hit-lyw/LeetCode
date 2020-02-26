/*************************************************************************
	> File Name: LeetCode-160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 15时50分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)return NULL;
        struct ListNode *pa=headA;
        struct ListNode *pb=headB;
        while(pa!=pb){
            pa=pa->next;
            pb=pb->next;
            if(pa==NULL&&pb==NULL){
                return NULL;
            }
            if(pa==NULL){
                pa=headB;
            }
            if(pb==NULL){
                pb=headA;
            }
        }
        return pa;
    }

};
