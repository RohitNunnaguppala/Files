#include<bits/stdc++.h>
using namespace std;

ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* point=dummy;
        while(point->next!=nullptr&&point->next->next!=nullptr){
            ListNode* swap1=point->next;
            ListNode* swap2=point->next->next;

            swap1->next=swap2->next;
            swap2->next=swap1;
            point->next=swap2;
            point=swap1;
        }
        return dummy->next;
}