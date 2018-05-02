class palindrome {
public:
    bool lpalindrome (node_t* head) {
        stack<node_t *> st;
        node_t *node, *snode;
        node_t *slow, *fast;

        if (!head) {
            return true;
        }

        slow = fast = head;

        while (fast && fast->next) {
            st.push(slow);
            slow = slow->next;
            fast = fast->next->next;
        }

        /* Odd number of elements */
        if (fast) {
            slow = slow->next;
        }

        while (slow) {
            snode = st.top();
            st.pop();
            if (slow->val != snode->val) {
                return false;
            }
            slow = slow->next;
        }

        return true;
    }
};
