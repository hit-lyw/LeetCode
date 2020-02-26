/*************************************************************************
	> File Name: LeetCode-24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 15时52分31秒
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *q=head;
        if(head==NULL)return head;
        if(head->next==NULL)return head;
        ListNode *p=head->next;
        ListNode *tem;
        q->next=p->next;
        p->next=q;
        head=p;
        p=q;

        while(p->next&&p->next->next){
            q=p->next;  
            p->next=q->next;
            q->next=p->next->next;
            p->next->next=q;                                                                               p=q;                               
        }
            

        
        return head;
        
    }
};
