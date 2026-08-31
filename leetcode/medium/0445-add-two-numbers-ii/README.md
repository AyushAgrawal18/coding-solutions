# Add Two Numbers II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two  **non-empty**  linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

 **Example 1:** 

```
Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]

```

 **Example 2:** 

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]

```

 **Example 3:** 

```
Input: l1 = [0], l2 = [0]
Output: [0]

```

 

 **Constraints:** 

- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
- It is guaranteed that the list represents a number that does not have leading zeros.

 

 **Follow up:**  Could you solve it without reversing the input lists?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 79.5 MB (beats 7.68%)  
**Submitted:** 2026-08-31T15:28:54.514Z  

```cpp
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1, st2;

        while (l1) {
            st1.push(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            st2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* head = nullptr;
        int c = 0;
        while (!st1.empty() || !st2.empty() || c > 0) {
            int a = 0, b = 0;
            if (!st1.empty()) {
                a = st1.top();
                st1.pop();
            }
            if (!st2.empty()) {
                b = st2.top();
                st2.pop();
            }
            int x = a + b + c;
            int dig = x % 10;
            c = x / 10;
            ListNode* node = new ListNode(dig);
            node->next=head;
            head=node;
        }
        return head;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/add-two-numbers-ii/)