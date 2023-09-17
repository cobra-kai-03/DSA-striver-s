/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/

Node* createTree(vector<int>&arr){
    // Write your code here.
    if(arr.size()==0)
    {
        return NULL;
    }
    Node*root=new Node(arr[0]);
    Node*cur=root;
    queue<Node*>q;
    q.push(root);
    int i=0;
    while(!q.empty())
    {
        cur=q.front();
        int lem=2*i;
        if (lem + 2 < arr.size()) {
          cur->left = new Node(arr[lem+ 1]);
          cur->right = new Node(arr[lem + 2]);
          i++;
          q.push(cur->left);
          q.push(cur->right);
          q.pop();
        }
        else{
            cur->left=NULL;
            cur->right=NULL;
            q.pop();
        }
        
    }
    return root;
}
