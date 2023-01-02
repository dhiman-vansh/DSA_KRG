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
    // cout<<"Node created wiht val "<<val<<endl;
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

int main()
{

    node *root = new node();
    root = Create('A');
    root = InsertComp(root,'B');
    root = InsertComp(root,'C');
    root = InsertComp(root,'D');
    root = InsertComp(root,'E');
    // root = InsertComp(root,'A');
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
    Inorder(root);
    
    return 0;
}