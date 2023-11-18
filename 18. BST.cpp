#include <iostream>
#include <queue>
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

void insert(BST *&root, int data)
{
    BST *temp = new BST(data);
    BST *top = root;
    BST *prev = NULL;
    int count = 0;
    while (top != NULL)
    {
        prev = top;
        count++;

        if (temp->data < top->data)
        {

            top = top->left;
        }
        else
        {

            top = top->right;
        }
    }

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

void inorder(BST *&root)
{   
    if (root == NULL){
        return ;
    }
    
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int height(BST *&root)
{
    int max_height;

    return max_height;
}

int size(BST *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return (size(root->left) + size(root->right)) + 1;
    }
}

void LevelOrder(BST *&root)
{
    queue<BST *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        BST *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {

            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void ReverseLevelOrder(BST* &root){

}

int main()
{
    BST *root = NULL;
    BST *temp = new BST(10);
    root = temp;

    insert(root, 20);
    insert(root, 5);
    insert(root, 7);
    insert(root, 0);
    insert(root, 12);
    insert(root, 40);

    cout << "Inorder Traversal: " << endl;
    inorder(root);
    cout << endl;

    cout << "Size of BST is: " << size(root) << endl;

    cout << "Level Order Traversal: " << endl;
    LevelOrder(root);

    cout << "Reverse Level Order Traversal: " << endl;
    ReverseLevelOrder(root);
}