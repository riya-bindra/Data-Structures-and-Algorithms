vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  stack<Node*> s;
  Node* curr=root;
  while(curr!=NULL || !s.empty())
  {
      while(curr!=NULL)
      {
          v.push_back(curr->data);
          if(curr->right!=NULL)
            s.push(curr->right);
            curr=curr->left;
      }
      if(!s.empty())
      {
          curr=s.top();
          s.pop();
      }
  }
  return v;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
