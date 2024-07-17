#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }

        } 
        else{
            cout<<temp-> data<<" ";
            if(temp -> right){
                q.push(temp -> right);
            }
            if(temp -> left){
                q.push(temp -> left);
            }
        }
    }
}

Node* insertInBST(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if (d < root->data)
    {
        root -> left = insertInBST(root -> left, d);
    }
    else
    {
        root->right = insertInBST(root->right, d);
    }
    return root;
}
Node* takeInput(Node* root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertInBST(root, data);
        cin >> data;
    }
}
int main(){
    Node* root = NULL;
    cout << "Enter the element to create BST:"<<endl;
    takeInput(root);

    cout<<"Printing the elements:"<<endl;
    levelOrderTraversal(root);
    
    return 0;
}