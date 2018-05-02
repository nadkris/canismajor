class traversal {
public:
    vector<int> inorder (node_t *root) {
        vector<int> rv;
        stack<node_t *> st;

        for (st.push(root); !st.empty(); root = st.top(), st.pop()) {
            if (root) {
                rv.push_back(root->val);
                st.push(root->right);
                st.push(root->left);
            }
        }

        return rv;
    }

    vector<int> preorder (node_t *root) {
        vector<int> rv;
        stack<node_t *> st;

        for (st.push(root); !st.empty(); root = st.top(), st.pop()) {
            if (root) {
                st.push(root->right);
                rv.push_back(root->val);
                st.push(root->left);
            }
        }

        return rv;
    }

    vector<int> postorder (node_t *root) {
        vector<int> rv;
        stack<node_t *> st;

        for (st.push(root); !st.empty(); root = st.top(), st.pop()) {
            if (root) {
                rv.push_back(root->val);
                st.push(root->left);
                st.push(root->right);
            }
        }

        reverse(rv.begin(), rv.end());

        return rv;
    }
};
