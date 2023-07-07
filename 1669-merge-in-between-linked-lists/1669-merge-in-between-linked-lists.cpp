/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
{
    ListNode* curr=list1;
    
    ListNode* back=list1;
    ListNode* forward;

    for(int i=0;i<a;i++)
    {
        back=curr;
        curr=curr->next;
    }

    curr=list1;

    for(int i=0;i<=b+1;i++)
    {   
        if(curr==NULL)
        {
            forward=NULL;
            break;
        }
        forward=curr;
        curr=curr->next;
    }

    back->next=list2;

    while(list2->next!=NULL)
        list2=list2->next;
    
    list2->next=forward;

    return list1;
}
};