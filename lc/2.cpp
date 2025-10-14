#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode dummy;
        ListNode *curr = &dummy;
        int sisa = 0;

        while (l1 != nullptr && l2 != nullptr) {
            int sum = l1->val + l2->val + sisa;
            sisa = sum / 10;
            sum %= 10;

            curr->next = new ListNode(sum);
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1) {
            while (l1 != nullptr) {
                int sum = l1->val + sisa;
                sisa = sum / 10;
                sum %= 10;

                curr->next = new ListNode(sum);
                curr = curr->next;
                l1 = l1->next;
            }
        } else if (l2) {
            while (l2 != nullptr) {
                int sum = l2->val + sisa;
                sisa = sum / 10;
                sum %= 10;

                curr->next = new ListNode(sum);
                curr = curr->next;
                l2 = l2->next;
            }
        }

        if (sisa != 0) {
            curr->next = new ListNode(sisa);
            curr = curr->next;
        }

        return dummy.next;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    ListNode *l1 = new ListNode(9, new ListNode(9, new ListNode(9)));
    ListNode *l2 = new ListNode(9, new ListNode(9));

    auto *ans = sol.addTwoNumbers(l1, l2);
    while (ans != nullptr) {
        cout << ans->val << endl;
        ans = ans->next;
    }

    return 0;
}