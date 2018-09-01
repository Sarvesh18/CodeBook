#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int height(struct node* temp)
{
    if (temp==NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(temp->left);
        int rheight = height(temp->right);

        /* use the larger one */
        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
}
void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout<< root->data <<" ";
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}
void LevelOrder(struct node *temp) {
    int h = height(temp);
    int i;
    for (i=1; i<=h; i++)
       printGivenLevel(temp, i);
}

void PreOrder(struct node *temp) {
    if(temp==NULL) {
        return;
    }
    cout << temp->data << " ";
    PreOrder(temp->left);
    PreOrder(temp->right);
}
void InOrder(struct node *temp) {
    if(temp==NULL) {
        return;
    }
    InOrder(temp->left);
    cout << temp->data << " ";
    InOrder(temp->right);
}
void PostOrder(struct node *temp) {
    if(temp==NULL) {
        return;
    }
    PostOrder(temp->left);
    PostOrder(temp->right);

    cout << temp->data << " ";
}

int main(){
    struct node *root=NULL;
    struct node *temp;

    root= new node(1);
    root->left             = new node(2);
    root->right         = new node(3);
    root->left->left     = new node(4);
    root->left->right = new node(5);
    temp=root;
    cout << "\nPreorder(Root,Left,Right) 12453 \n";
    PreOrder(temp);
    temp=root;
    cout << "\nInOrder(Left,Root,Right) 42513 \n";
    InOrder(temp);
    temp=root;
    cout << "\nPostOrder(Left,Right,Root) 45231 \n";
    PostOrder(temp);
    temp=root;
    cout << "\nLevelOrder() 12345 \n";
    LevelOrder(temp);
    return 0;
}
