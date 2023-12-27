***Merge Two Sorted Linked Lists***

- - - 

*You are given the heads of two sorted linked lists `list1` and `list2`.*

*Merge the two lists into one **sorted** list. The list should be made by splicing together the nodes of the first two lists.*

*Return the head of the merged linked list.*

- - - 

***Solution***

```c++
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL) {
            return NULL;
        }
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }
        ListNode* head = new ListNode();
        ListNode *curr = head;
        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if (list1 == NULL) {
            curr->next = list2;
        } else {
            curr->next = list1;
        }
        return head->next;
    }
};
```

- *Create a new head node*
- *Keep a pointer to the current node in the merged list*
- *Compare the values of each of the lists → add the smallest one to the merged list & progress the pointer of the list that was added*
- *Increment the current merged pointer*
- *Repeat until all nodes have been merged*

- - - 

***Complexity***

- ***Time Complexity*** $O(n+m)$
- *In Worst-Case each node in both lists compared exactly once before placing into merged list (n elements in List1 & m elements in List2)*

<br>

- ***Space Complexity*** $O(1)$
- *Merging done in-place (by pointers) & so only constant additional space for pointers tracking merged elements*