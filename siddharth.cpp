#include<bits/stdc++.h>
using namespace std;

struct node{
    int age;
    string name;
    node *prev;
    node *next;
    node(string s,int x){
        age = x;
        name = s;
        prev=NULL;
        next=NULL;
    }
};

void printthelist(node *head){
    while(head!=NULL){
        cout<<head->name<<"-"<<head->age<<" ";
        head=head->next;
    }
}

int main(){
    node *father=new node("Vinit Kumar",50);
    node *mother=new node("Kaplana Kulshrestha",45);
    node *myself=new node("Siddharth",20);
    node *sister=new node("Vidushi",17);
    node *brother=new node("Sachin",16);

    node *head=father;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=sister;
    sister->prev=myself;
    sister->next=brother;
    brother->next=NULL;
    brother->prev=sister;

    printthelist(head);

    return 0;
}