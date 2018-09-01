#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *p, *temp;

void insertBeg(int data) {
    p=(struct node*)malloc(sizeof(struct node));
    if(start==NULL) {
        p->data=data;
        p->next=NULL;
        start=p;
    }
    else {
        p->data=data;
        p->next=start;
        start=p;
    }
}
void insertEnd(int data) {
    p=(struct node*)malloc(sizeof(struct node));
    if(start==NULL) {
        p->data=data;
        p->next=start;
        start=p;
    }
    else {
        p->data=data;
        p->next=NULL;
        temp=start;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=p;
    }
}
void insertLoc(int loc,int data) {
    int count=2;
    p=(struct node*)malloc(sizeof(struct node));
    temp=start;
    while(temp->next!=NULL && count!=loc) {
        temp=temp->next;
        count++;
    }
    if(count==loc) {
        p->data=data;
        p->next=temp->next;
        temp->next=p;
    }
}
int delBeg() {
    if(start!=NULL) {
        temp=start;
        int data=start->data;
        start=start->next;
        free(temp);
        return data;
    }
}

int delEnd() {
    if(start->next==NULL) {
        temp=start;
        int data=start->data;
        start=NULL;
        free(temp);
        return data;
    }
    else {
        temp=start;
        while(temp->next->next!=NULL) {
            temp=temp->next;
        }
        int data=temp->next->data;
        free(temp->next);
        temp->next=NULL;
        return data;
    }
}

int delLoc(int loc) {
    int count=2;
    temp=start;
    while(temp->next!=NULL && count!=loc) {
        temp=temp->next;
        count++;
    }
    if(count==loc) {
        int data=temp->next->data;
        temp->next=temp->next->next;
        free(temp->next);
        return data;
    }
    return -1;
}
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
    insertEnd(20);
    insertBeg(10);
    insertLoc(2,15);
    insertEnd(25);
    insertBeg(5);
    traverse();
    cout<<delEnd();
    traverse();
    return 0;
}
