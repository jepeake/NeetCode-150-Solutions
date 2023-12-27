
***Reverse Linked List***

- - - 

*Given the `head` of a singly linked list - reverse the list - and return the reversed list.*

- - -

***Solution***

```c++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* current = head;
        ListNode* prev = nullptr;
        ListNode* next;
        while(current != nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};
```

- *Keep two pointers - one to the current node & one to the previous node in the list*
- *Traverse the list from left to right*
- *Save the value of the next node in next*
- *Reverse the order by setting the current→next pointer to the prev pointer*
- *Continue traversal by setting the prev pointer to the current node - and the current node to the saved next node*

- - - 

***Complexity***

- ***Time Complexity*** $O(n)$
- *Traverses the Linked List once*

<br>

- ***Space Complexity*** $O(1)$
- *Constant additional space for pointers*