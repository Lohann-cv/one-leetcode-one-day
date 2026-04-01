/*
//Definition for singly-linked list.
 struct ListNode {
    int val;
    struct ListNode *next;
};*/
 
#include <stdlib.h>

void    ft_deletion(struct ListNode *tmp)
{
    if (tmp == NULL)
        return ;
    if (tmp->next)
    {
        if (tmp->val == tmp->next->val)
        {
            struct ListNode *to_free = tmp->next;
            tmp->next = to_free->next;
            free(to_free);
            ft_deletion(tmp);
        }
        else
            ft_deletion(tmp->next);
    }
}

struct ListNode* deleteDuplicates(struct ListNode* head)
{
    ft_deletion(head);
    return (head);
}