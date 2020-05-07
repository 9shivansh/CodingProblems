class Solution {
public:
    Node* connect(Node* root) {
        
        
        Node* prev = nullptr;
        queue<Node*> q;
        
        q.push(root);
        q.push(nullptr);
        
        while(!q.empty()) {
            
            Node* node = q.front();
            q.pop();
            
            if (node == nullptr) {
                prev = nullptr;
                q.push(nullptr);
                if(q.front() == nullptr)
                    return root;
                continue;
            }
            
            node->next = prev;
            prev = node;
            q.push(node->right);
            q.push(node->left);
        }
       
        return root;
        
    }
};