/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Node
{
    public:
    Node*lchild;
    int key;
    Node*rchild;
};
class BST
{
    public:
    Node *root;
    BST(){root = nullptr;}
    Node *createTree(int val)
    {
        Node *p = new Node;
        p->key = val;
        p->lchild = p->rchild = nullptr;
        return p;
    }
    Node* insert(Node *t, int val)
    {
        if(t == nullptr)
        {
            Node *p = new Node;
            p->key = val;
            p->lchild = p->rchild = nullptr;
            return p;
        }
        if(val < t->key)
        {
            t->lchild = insert(t->lchild, val);
        }
        else
        {
             t->rchild = insert(t->rchild, val);
        }
    }
    Node* search(Node *t, int key)
    {
        if(t == nullptr)
        {
            return nullptr;
        }
       
        while(t != nullptr)
        {
            if(t->key == key)
            return t;
            if(key < t->key)
            t = t->lchild;
            else
            t = t->rchild;
        }
    }
    Node* InOrder_preDesor(Node *t)
    {
        while(t && t->rchild == nullptr)
        {
            t=t->rchild;
        }
        return t;
    }
     Node* InOrder_succesor(Node *t)
    {
        while(t && t->lchild == nullptr)
        {
            t=t->lchild;
        }
        return t;
    }
    int Height(Node *t)
    {
        int x, y;
        if(t == nullptr)
            return 0;
        x = Height(t->lchild);
        y = Height(t->rchild);
        return x>y?x+1:y+1;
    }
    Node * deleteNode(Node *t, int key)
    {
        Node *temp = nullptr;
        if(t == nullptr)
            return nullptr;
        if(t->lchild && t->rchild == nullptr)
        {
            if(t == root)
                root = nullptr;
            delete t;
            return nullptr;
        }
        if(key < t->key)
        {
            t->lchild = deleteNode(t->lchild, key);
        }
        else if(key > t->key)
        {
            t->rchild = deleteNode(t->rchild, key);
        }
        else
        {
            if(Height(t->lchild) > Height(t->rchild))
            {
                temp = InOrder_preDesor(t->lchild);
                t->key = temp->key;
                t->lchild=deleteNode(t->lchild, temp->key);
            }
            else
            {
                temp = InOrder_succesor(t->rchild);
                t->key = temp->key;
                t->rchild=deleteNode(t->rchild, temp->key);
            }
        }
    }
    void display_inorder(Node * t)
    {
        if(t == nullptr)
            return;
        
        display_inorder(t->lchild);
        cout<<" "<<t->key;
        display_inorder(t->rchild);
        
    }
};

int main()
{
    BST *tree = new BST;
    tree->root = tree->createTree(10);
    tree->insert(tree->root, 9);
    tree->insert(tree->root, 11);
    tree->insert(tree->root, 5);
    tree->insert(tree->root, 7);
    tree->insert(tree->root, 15);
    tree->insert(tree->root, 12);
    //tree->deleteNode(tree->root, 1);
    tree->display_inorder(tree->root);
    Node* searchNode = tree->search(tree->root, 5);
    if(searchNode)
        cout<<"\nSearching "<<searchNode->key<<endl;
    else
        cout<<"\n no node found"<<endl;
    
    return 0;
}
