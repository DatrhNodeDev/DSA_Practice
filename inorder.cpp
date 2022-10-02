// C++ Program to find inorder Traversal 
 #include <iostream>
 using namespace std;

 struct Node {
 	int data;
 	struct Node *left, *right;
 	Node(int data)
 	{
 		this->data = data;
 		left = right = NULL;
 	}
 };
 void printinorder(struct Node* node)
 {
     if (node == NULL)
         return;

     printinorder(node->left);
     printinorder(node->right);
     cout << node->data << " ";
 }


 int main()
 {
 	struct Node* root = new Node(1);
 	root->left = new Node(2);
 	root->right = new Node(3);
 	root->left->left = new Node(4);
 	root->left->right = new Node(5);

 	cout << "\nPreorder traversal of binary tree is \n";
 	printinorder(root);

 	return 0;
 }
