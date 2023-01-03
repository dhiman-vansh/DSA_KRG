#include <bits/stdc++.h>
using namespace std;
#include <queue>

struct node
{
    char val;
    node *left, *right;
};

node *Create(char val)
{
    node *head = new node;
    head->val = val;
    head->left = NULL;
    head->right = NULL;
    return head;
};

void Inorder(struct node *head)
{
    if (head == NULL)
        return;
    Inorder(head->left);
    // Inorder(head);
    cout << head->val << " ";
    Inorder(head->right);
};



void preorder(struct node *head)
{
    if (head == NULL)
        return;

    cout << head->val << " ";
    preorder(head->left);
    // Inorder(head);
    preorder(head->right);
};

int hieght(node *head)
{
    if (head == NULL)
        return 0;

    int ldepth = hieght(head->left);
    int rdepth = hieght(head->right);

    if (ldepth >= rdepth)
        return ldepth + 1;
    else
        return rdepth + 1;
};

node *InsertComp(node *head, char val)
{
    node *temp = head;
    int flag = 0;
    queue<node *> q;

    if (head != NULL)
        q.push(head);
    else {
        head  = Create(val);
        return head;
    }
    while (flag == 0)
    {
        head = q.front();
        if (head->left == NULL)
        {
            head->left = Create(val);
            flag=1;
        }
        else if (head->right == NULL)
        {
            head->right = Create(val);
            flag=1;
        }
        /* code */
        else
        {
            q.push(head->left);
            q.push(head->right);
        }
        q.pop();
    }

    return temp;
};

node *BalancedBTree( node *head){
    node *temp  = head;
    vector<int> vec = {};
    
    // Inorder get


    return temp;
}

int main()
{

    node *root = NULL;
    // root = Create('A');
    // root->left = Create('B');
    // root->right = Create('C');
    // root->right->left = Create('D');
    // root->right->left->right = Create('E');
    root = InsertComp(root,'A');
    root = InsertComp(root,'B');
    root = InsertComp(root,'C');
    root = InsertComp(root,'D');
    root = InsertComp(root,'E');
    // cout<<root->val;
    // root = Create('A');
    // // root->val = 'A';
    // // root->left=NULL;
    // // root->right=NULL;
    // root->left= Create('B');
    // root->right= Create('C');
    // root->left->left= Create('D');
    // root->left->right= Create('E');
    // // root= Create(root->right,'C');
    // cout<<"Inorder is = ";
    // cout<<root->left->val;
    
    // Inorder(root);
    preorder(root);

    return 0;
}