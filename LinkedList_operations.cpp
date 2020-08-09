//Linked list
#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node*next;
};
Node* createLinkedList(struct Node* p, int arr[], int n)
{
    if(p == nullptr)
    {
        p = new Node;
        p->data = arr[0];
        p->next = nullptr;
    }
    Node *q = p, *t;
    for(int i = 1; i <n ; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = nullptr;
        q->next = t;
        q=t;
    }
    return p;
}
void display(Node *p)
{
    cout<<"--- List ---"<<endl;
    while(p)
    {
       cout<<" "<<p->data; 
       p= p->next;
    }
    cout<<endl;
}
Node* insert(Node *p, int val) //sorted order
{
    Node *q = p, *w =p, *t;
    t = new Node;
    t->data = val;
    t->next = nullptr;
    if(p == nullptr)
    {
        p = t;
    }
    else if(p->data > val)
    {
        t->next = p;
        p = t;
    }
    else
    {
        while(q && val > q->data)
        {
            w = q;
            q=q->next;
        }
        t->next = w->next;
        w->next=t;
    }
    return p;
}
Node*  reverseList(Node * p)
{
    Node *q = p, *prev = nullptr, *t;
    
    if(p == nullptr || p->next == nullptr)
    {
       //do nothing 
    }
    else
    {
       
        while(q)
        {
            t = q;
            q=q->next;
            t->next = prev;
            prev = t;
        }
        p = t;
    }
    return p;
    
}
void deleteKey(Node *p, int key)
{
    Node *q = p, *t;
    if(p == nullptr)
    {
        cout<<"nothing to be deletes"<<endl;
        return;
    }
    if(q && q->data == key)
    {
        p = q->next;
        delete q;
        display(p);
    }
    else
    {
        while(q && key != q->data)
        {
            t = q;
            q = q->next;
        }
        if(q == nullptr){
            cout<<"nothing to be deleted as element not in list"<<endl;
            return;
        }
        t->next = q->next;
        delete q;
        display(p);
    }
}
int returnNthNodeFromLast(Node *p, int n)
{
    Node *f = p, *s = p;
    if(p == nullptr)
    {
        return -1;
    }
    for(int i = 0; i <n ; i++)
    {
        if(s)
        {
            s = s->next;
        }
        else
        {
            cout<<"Not in n th lenth list"<<endl;
            return -1;
        }
    }
    while(s)
    {
        s = s->next;
        f = f->next;
    }
    return f->data;
}
int main()
{
    struct Node* root = nullptr;
    int arr[] = {1,2,3,4,5,6,8,9};
    root = createLinkedList(root, arr, 8);
    display(root);
    root = insert(root, 7);
    root = insert(root, 0);
    root = insert(root, 10);
    display(root);
    root = reverseList(root);
    deleteKey(root, 1);
    deleteKey(root, 0);
    display(root);
    cout<<" last nth node: "<<returnNthNodeFromLast(root, 7);
    return 0;
}
