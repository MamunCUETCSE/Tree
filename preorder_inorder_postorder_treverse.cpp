#include<bits/stdc++.h> //recursive solution of preorder,inorder,postorder tree traversal
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;

    }
    
};
void preorder(struct node* node)
{
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
void inorder(struct node* node)
{
    if(node==NULL)
    return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void postorder(struct node* node)
{
    if(node==NULL)
    return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    cout<<"Preorder traversal:";
    preorder(root);cout<<endl;
    cout<<"inorder traversal:";
    inorder(root);cout<<endl;
    cout<<"Postorder traversal:";
    postorder(root);cout<<endl;
    
}