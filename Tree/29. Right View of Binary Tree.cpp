class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       if(root==NULL)
        return v;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                Node* curr=q.front();
                q.pop();
                if(i==count-1)
                    v.push_back(curr->data);
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
        }
        return v;
    }
};

//Time Complexity: O(n)
//Auxiliary Space: O(w)
