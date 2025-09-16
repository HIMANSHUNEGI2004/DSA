#include<iostream>
#include<queue>
#include "tree.h"
using namespace std;
tree<int>* input1(){

    int data;
    cout<<"enter the data : "<< endl;
    cin>> data;
    tree<int>* root=new tree<int>(data);
    
    cout<<"Enter the No of children of "<< data << endl;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        root->children.push_back(input1());
    }
    return root;
}

void Print1(tree<int>* root){
    if(root==NULL) return ; // edge case not base case 
    cout<<root->data<<":";
    for(int i = 0; i < (int)root->children.size(); i++){
        cout<<root->children[i]->data <<" ";
    }
    cout<<endl;
    for(int i = 0; i < (int)root->children.size(); i++)
    {
        Print1(root->children[i]);
    }
}

treeNode* input2() {
    int data;
    cout << "Enter the data: ";
    cin >> data;

    treeNode* root = new treeNode(data);

    cout << "Enter the number of children of " << data << ": ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        treeNode* child = input2(); // child holds address of root node 
        root->children.push_back(child);
    }

    return root;
}

void Print2(treeNode* root) {
    if (root == NULL) return; // edge case not base case 

    cout << root->data << ": ";
    for(int i = 0; i < (int)root->children.size(); i++){
        cout << root->children[i]->data << " ";
    }
    cout << endl;

    for(int i = 0; i < (int)root->children.size(); i++){
        Print2(root->children[i]);
    }
}

tree<int>* inputLevelWise(){
    int data;
    cout<<"Enter the Data : ";
    cin>>data;
    
    tree<int>* root = new tree<int>(data);

    queue<tree<int>*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        tree<int>* front=qu.front();
        int n;
        cout<<"Enter the No children of "<< front->data << ":";
        cin>>n;
        qu.pop();
        for(int i=0;i<n;i++)
        {
            int k;
            cout<<"Enter the Child Data of "<< front->data << " "<< i <<"th"<<":";
            cin>>k;
            tree<int>* child=new tree<int>(k);
            front->children.push_back(child);
            qu.push(child);
        }
    }
    return root;
}
void PrintLevelWise(tree<int>* root){
    if(root==NULL) return;

    queue<tree<int>*> qu;
    qu.push(root);
    while(!qu.empty()){
        tree<int>* front=qu.front();
        qu.pop();
        cout<<front->data<< ":";
        for(size_t i=0;i<front->children.size();i++)
        {
            cout<<front->children[i]->data<<",";
            qu.push(front->children[i]);
        }
        cout<<endl;

    }
}

int countNode(tree<int>* root){
    if(root==NULL) return 0; // edge case 
    int count=1;
    for(size_t i=0;i<root->children.size();i++){
        count+=countNode(root->children[i]);  
    }
    return count;
}

int  sumOfAllNodes(tree<int>* root){
    if(root==NULL) return 0;
    int ans=root->data;
    for(size_t i=0;i<root->children.size();i++)
    {
        ans+=sumOfAllNodes(root->children[i]);
    }
    return ans;
}

int LargestNode(tree<int>* root){
    if(root==NULL) return 0;
    queue<tree<int>*> qu;
    qu.push(root);
    int maximum=0;
    while(!qu.empty()){
        tree<int>* front=qu.front();
        qu.pop();
        maximum=max(maximum,front->data);
        for(size_t i=0;i<front->children.size();i++)
        {
            qu.push(front->children[i]);
        }
    }   
    return maximum;
}

int countleafNode(tree<int>* root){
    if(root==NULL) return 0;
    int count=0;
    if(root->children.size()==0) count++; 

    for(size_t i=0;i<root->children.size();i++) {
        count+=countleafNode(root->children[i]);
    }
    return count;
}

void preorder(tree<int>* root){
    if(root==NULL) return;
    cout<<root->data<<" " ;
    for(size_t i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }
}

void postorder(tree<int>* root){
    if(root==NULL) return;
    for(size_t i=0;i<root->children.size();i++){
        postorder(root->children[i]);
    }
    cout<<root->data<<" " ;
}
void deletetree(tree<int>* root){
    if(root==NULL) return;
    for(size_t i=0;i<root->children.size();i++){
        deletetree(root->children[i]);
    }
    delete root;
}

int heightOftree(tree<int>* root){
    if(root==NULL) return 0;
    queue<tree<int>*> qu;
    qu.push(root);
    int height=0;
    while(!qu.empty())
    {
        int levelSize = qu.size(); 
        for(int i=0;i<levelSize;i++){
            tree<int>* front=qu.front();
            qu.pop();
            
            for(size_t j=0;j<front->children.size();j++)
            {
                qu.push(front->children[j]);
            }
        }

        height++;
    }

    return height;
}

int MaximumChildofNode(tree<int>* root){
    if(root==NULL) return 0;
    queue<tree<int>*> qu;
    qu.push(root);
    int Maximum=0;
    while(!qu.empty())
    {
        int levelSize = qu.size(); 
        for(int i=0;i<levelSize;i++){
            tree<int>* front=qu.front();
            qu.pop();
            int x=front->children.size();
            Maximum=max(Maximum,x);
            for(size_t j=0;j<front->children.size();j++)
            {
                qu.push(front->children[j]);
            }
        }

    }

    return Maximum;
}

int NodeWithMaximumChildSum(tree<int>* root) {
    if (root == NULL) return 0;

    tree<int>* MaximumChildNode = root;
    int Maximum = 0;

    queue<tree<int>*> qu;
    qu.push(root);

    while (!qu.empty()) {
        tree<int>* front = qu.front();
        qu.pop();

        // calculate sum for this node (itself + its children)
        int sum = front->data;
        for (size_t j = 0; j < front->children.size(); j++) {
            sum += front->children[j]->data;
            qu.push(front->children[j]);
        }

        if (sum > Maximum) {
            Maximum = sum;
            MaximumChildNode = front;
        }
    }

    return MaximumChildNode->data;
}


int main(){
    /*
    tree<int>* root1=input1(); // template
    Print1(root1);
    cout<<endl;
    treeNode* root2=input2(); // without template only int 
    Print2(root2);

    */
    tree<int>* root=inputLevelWise(); // template
    cout<<"No of Nodes : "<<countNode(root)<<endl;
    cout<<"Sum of Nodes : "<<sumOfAllNodes(root)<<endl;
    cout<<"Largest Node : "<<LargestNode(root)<<endl;
    cout<<"Leaf Node : "<<countleafNode(root)<<endl;
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"postorder : ";
    postorder(root);
    cout<<endl;
    cout<<"heightof tree  : "<<heightOftree(root)<<endl;
    cout<<"Maximum Child of Node  : "<<MaximumChildofNode(root)<<endl;
    cout<<"Node With Maximum Child Sum  : "<<NodeWithMaximumChildSum(root)<<endl;
    delete root;
    // deletetree(root);
   


    return 0;
}


// 1 3 2 3 4 0 2 5 6 0 0 1 7 5 1 1 1 1 1 0 0 0 0 0