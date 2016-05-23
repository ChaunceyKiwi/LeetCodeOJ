#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printList(ListNode *node){
    while(node != NULL){
        cout<<node->val<<" ";
        node = node->next;
    }
    cout<<endl;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res, *curr;
        ListNode begin(0);
        res = &begin;
        curr = &begin;
        int ifCarry = 0;

        while(l1 != NULL || l2 != NULL){

            // when either of l1 or l2 don't come to end
            if(l1 == NULL && l2 != NULL){
                curr->val = l2->val;
            }else if(l1 != NULL && l2 == NULL){
                curr->val = l1->val;
            }

            // when both l1 and l2 don't come to end
            if(l1 != NULL && l2 != NULL){
                curr->val = l1->val + l2->val + ifCarry;
                if(curr->val > 9){
                    curr->val -= 10;
                    ifCarry = 1;
                }
            }

            l1 = l1->next;
            l2 = l2->next;

            ListNode* newNode = new ListNode(3);

//            ListNode node(0);
            curr->next = newNode;
            curr = curr->next;
        }

        if(ifCarry){
            ListNode* newNode = new ListNode(1);
            curr->next = newNode;
            curr = curr->next;
            curr->next = NULL;
        }else{
          cout<<curr->val<<endl;
            delete curr;
            cout<<curr->val<<endl;
        }

        return res;
    }
};

int main(void)
{
    // Build two lists
    ListNode a1(1);
    ListNode a2(2);
    ListNode a3(3);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = NULL;

    ListNode b1(4);
    ListNode b2(5);
    ListNode b3(6);
    b1.next = &b2;
    b2.next = &b3;
    b3.next = NULL;

    ListNode* a = &a1;
    ListNode* b = &b1;

    // Add two lists
    Solution solution;
    ListNode* res = solution.addTwoNumbers(a,b);
    printList(res);





}
