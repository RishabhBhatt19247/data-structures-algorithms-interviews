#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

class BinaryTree
{
public:
  void preOrderTraversal(Node *node)
  {
    if (node != NULL)
    {
      cout << node->data;
      preOrderTraversal(node->left);
      preOrderTraversal(node->right);
    }
  }

  void inOrderTraversal(Node *node)
  {
    if (node != NULL)
    {
      inOrderTraversal(node->left);
      cout << node->data;
      inOrderTraversal(node->right);
    }
  }

  void postOrderTraversal(Node *node)
  {
    if (node != NULL)
    {
      postOrderTraversal(node->left);
      postOrderTraversal(node->right);
      cout << node->data;
    }
  }
};

int main()
{
  BinaryTree bt;
  Node *root = NULL;

  root = new Node(5);
  root->left = new Node(6);
  root->right = new Node(7);

  root->left->right = new Node(2);
  root->left->left = new Node(3);
  root->right->left = new Node(9);

  cout << "Preeorder traversal is = \n";
  bt.preOrderTraversal(root);

  cout << "Inorder traversal is = \n";
  bt.inOrderTraversal(root);

  cout << "postorder traversal is = \n";
  bt.postOrderTraversal(root);
}