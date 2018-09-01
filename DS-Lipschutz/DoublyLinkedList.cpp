#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *start=NULL;
struct node *p, *temp;

void traverse() {
    cout<<endl;
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    p=(struct node*)malloc(sizeof(struct node));
    cout<<sizeof(struct node)<<" "<<sizeof(p);
    return 0;
}
