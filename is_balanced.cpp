class is_balanced {
public:
    int max (int a, int b) {
        return (a > b? a: b);
    }
    
    int height (node_t *root) {
        int lh = 0;
        int rh = 0;
        int ht;
        
        if (!root) {
            return 0;
        }
        
        lh = height(root->left);
        rh = height(root->right);
        
        ht = max(lh, rh);
        
        return ht + 1;
    }
    
    bool is_balanced (node_t *root) {
        int lh = 0;
        int rh = 0;
        
        if (!root) {
            return 1;
        }
        
        lh = height(root->left);
        rh = height(root->right);
        
        return ((abs(lh - rh) <= 1) && is_balanced(root->left) && is_balanced(root->right));
    }
};
