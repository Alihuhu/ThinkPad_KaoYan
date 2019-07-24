
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class TreePrinter {
public:
    vector<vector<int> > printTree(TreeNode* root) {
        // write code here
        vector<vector<int>> resturt;
        if(root==NULL) return resturt;
        queue<TreeNode *> a;
        a.push(root);
        while(!a.empty())
        {
            int size=a.size();
            vector<int> b;
            for(int i=0;i<size;i++)
            {
                TreeNode* t=a.front();
                a.pop();
                b.push_back(t->val);
                if(t->left) a.push(t->left);
                if(t->right) a.push(t->right);
            }
            resturt.push_back(b);
        }
        return resturt;
    }
};
