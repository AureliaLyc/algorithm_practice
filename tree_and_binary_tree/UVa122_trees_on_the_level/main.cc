bool bfs( std::vector<int> ans ){
    queue<TreeNode*> q;

    q.push( root );
    while( !q.empty() ){
        TreeNode* node = q.front();
        q.pop();
        ans.push_back(node->val);
        if (node->left)
        {
            q.push(node->left);
        }
        if (node->right)
        {
            q.push(node->right);
        }
    }
}

bool bfs( std::vector<vector<int> > ans ){
    queue<TreeNode*> q;

    q.push( root );
    vector<int> t;
    while( !q.empty() ){
        int size = q.size();
        t.clear();
        for(int i = 0; i < size; ++i){
            TreeNode* node = q.front();
            q.pop();
            t.push_back(node->val);
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        ans.push_back(t);
    }
    return true;
}