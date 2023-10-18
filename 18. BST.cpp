#include <iostream>
using namespace std;

class BST
{
public:
    BST *left;
    BST *right;
    BST *parent;
    int data;

    BST(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
        this->parent = NULL;
    }
};

void insert(BST* &root, int data)
{
    BST *temp = new BST(data);
    BST *top = root;
    // cout << top << endl;
    // cout << top -> data << endl;
    BST *prev = NULL;
    int count = 0;
    while (top != NULL)
    {
        prev = top;
        count++;
        // cout << prev -> data << endl;
        if (temp->data < top->data)
        {

            top = top->left;
        }
        else
        {

            top = top->right;
        }

    // cout << prev -> data << endl;
    }
    // cout << prev -> data << endl;
    // cout << count << endl;
    if (temp->data < prev->data)
    {

        prev->left = temp;
    }

    else
    {

        prev->right = temp;
    }

    temp->parent = prev;
}

void inorder(BST* top)
{
	if (top != NULL)
	{
		inorder(top->left);
		cout<< top->data<<" ";
		inorder(top->right);
	}
}
int main()
{
    BST *root = NULL;
    BST *temp = new BST(10);
    root = temp;

    // cout << root -> data << endl;
    
    // inorder(root);
    
    insert(root, 20);
    inorder(root);
    // insert(root, 5);
    // insert(root, 7);
    // insert(root, 0);
    // insert(root, 12);
    // insert(root, 40);

    cout << "Done" << endl;

}