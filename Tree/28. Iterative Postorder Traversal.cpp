vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v;
  if(root==NULL)
    return v;
  stack<Node*> s1;
  stack<Node*> s2;
  s1.push(root);
  while(!s1.empty())
  {
      Node* curr=s1.top();
      s1.pop();
      s2.push(curr);
      if(curr->left!=NULL)
        s1.push(curr->left);
    if(curr->right!=NULL)
        s1.push(curr->right);
  }
  while(!s2.empty())
    {
        Node* curr=s2.top();
        s2.pop();
        v.push_back(curr->data);
    }
    return v;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
