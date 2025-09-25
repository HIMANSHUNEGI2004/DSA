#include<iostream>
#include<queue>
#include "tree.h"
using namespace std;

BinaryTree<int>* input(){ // DFS 
    int data;
    cout<<"Enter the DATA : ";
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    BinaryTree<int>* child=new BinaryTree<int>(data);
    BinaryTree<int>* left=input();
    BinaryTree<int>* right=input();
    child->left=left;
    child->right=right;
    return child;
}
void Display(BinaryTree<int>* root){
    if(root==NULL) return;
    cout<< root->data<< " ";
    Display(root->left);
    Display(root->right);
}
BinaryTree<int>* LevelWiseInput(){
    int RootData;
    cout<<"Enter the Root Data : ";
    cin>>RootData;
    BinaryTree<int>* root = new BinaryTree<int>(RootData);
    queue<BinaryTree<int>*> qu;
    qu.push(root);
    while(!qu.empty()){
        BinaryTree<int>* front =qu.front();
        qu.pop();

        int leftchild;
        cout<<"Enter the LeftChild of "<< front->data <<" : "<<endl;
        cin>>leftchild;
        if(leftchild!=-1){
            BinaryTree<int>* leftC=new BinaryTree<int>(leftchild);
            front->left=leftC;
            qu.push(leftC);
        }

        int rightchild;
        cout<<"Enter the RightChild of "<< front->data <<" : "<<endl;
        cin>>rightchild;
        if(rightchild!=-1){
            BinaryTree<int>* rightC=new BinaryTree<int>(rightchild);
            front->right=rightC;
            qu.push(rightC);
        }

    }
    return root;
}
void LevelWisePrint(BinaryTree<int>* root){
    if(root==NULL) return; 
    queue<BinaryTree<int>*> qu;
    qu.push(root);
    while(!qu.empty()){
        BinaryTree<int>* front =qu.front();
        qu.pop();
        cout<<front->data<<" ";
        if (front->left!=NULL)  qu.push(front->left);
        if (front->right!=NULL) qu.push(front->right);    
    }
}
void Preorder(BinaryTree<int>* root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void inorder(BinaryTree<int>* root){
    if(root==NULL) return ;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void Postorder(BinaryTree<int>* root){
    if(root==NULL) return ;

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

int heightDFS(BinaryTree<int>* root){
    if(root==NULL) return 0;
    int height=1+max(heightDFS(root->left),heightDFS(root->right));
    return height;
}
int heightBFS(BinaryTree<int>* root ){
    if(root==NULL) return 0;

    int height=0;

    queue<BinaryTree<int>*> qu;
    qu.push(root);
    while(!qu.empty()){
        height++;
        int k=qu.size();
        for(int i=0;i<k;i++)
        {
            BinaryTree<int>* front=qu.front();
            qu.pop();

            if(front->left!=NULL) qu.push(front->left);
            if(front->right!=NULL) qu.push(front->right);
        }
    }

    return height;
}

int Diameter(BinaryTree<int>* root){
    if(root==NULL) return 0;
    int option1=heightBFS(root->left) + heightBFS(root->right);
    int option2=Diameter(root->left);
    int option3=Diameter(root->right);

    return max(option1,max(option2,option3));
}

bool Balanced(BinaryTree<int>* root)
{
    if(root==NULL) return true;
    int leftheight=heightBFS(root->left);
    int rightheight=heightBFS(root->right);

    if(max(leftheight,rightheight)-min(leftheight,rightheight) > 1) return false;

    return Balanced(root->left) && Balanced(root->right);

}

void LevelorderinNewLine(BinaryTree<int>* root) {
    if (root == NULL) return;

    queue<BinaryTree<int>*> qu;
    qu.push(root);

    while (!qu.empty()) {
        int k = qu.size();   // number of nodes in current level

        for (int i = 0; i < k; i++) {
            BinaryTree<int>* front = qu.front();
            qu.pop();

            cout << front->data << " ";

            if (front->left != NULL)  qu.push(front->left);
            if (front->right != NULL) qu.push(front->right);
        }
        cout << endl;  // new line after finishing current level
    }
}

int main(){
    BinaryTree<int>* root=LevelWiseInput();  // 1 2 3 -1 -1 4 5 6 7 -1 -1 -1 -1 -1 -1 
    cout<<"Level_Wise_Display : ";
    LevelWisePrint(root);
    cout<<endl;
    cout<<"Preorder_Display : ";
    Preorder(root);
    cout<<endl;
    cout<<"inorder_Display : ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder_Display : ";
    Postorder(root);
    cout<<endl;
    cout<<"Height Of Tree Using DFS : "<<heightDFS(root)<<endl;
    cout<<"Height Of Tree Using DFS : "<<heightBFS(root)<<endl;
    cout<<"Diameter of BT : "<< Diameter(root)<<endl;
    cout<<"Balanced BT : "<< Balanced(root)<<endl;
    cout<<"Levelorderin New_Line BT : ";
    LevelorderinNewLine(root);
    cout<<endl;
    
    


    return 0;
}


