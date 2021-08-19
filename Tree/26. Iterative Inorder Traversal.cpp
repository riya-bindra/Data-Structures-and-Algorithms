class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> v;
        stack<Node*> s;
        Node* curr=root;
        while(!s.empty() || curr!=NULL)
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            v.push_back(curr->data);
            curr=curr->right;
        }
        return v;
    }
};

//Time Complexity: O(n)
//Auxiliary Space: O(h)

