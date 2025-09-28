#include <iostream>
using namespace std;

struct Node {
    int data; Node* next;
    Node(int d):data(d),next(NULL){}
};

class SLL {
    Node* head=NULL;
public:
    Node* getHead(){ return head; }
    void insertEnd(int d){
        Node* n=new Node(d);
        if(!head) head=n;
        else {Node* t=head; while(t->next) t=t->next; t->next=n;}
    }
    void show(){
        for(Node* t=head;t;t=t->next) cout<<t->data<<" ";
        cout<<"\n";
    }
    // Create list from array
    void build(int arr[],int n){ for(int i=0;i<n;i++) insertEnd(arr[i]); }
};

Node* Union(Node* a, Node* b){
    Node dummy(0); Node* t=&dummy;
    while(a && b){
        if(a->data==b->data){ t->next=new Node(a->data); a=a->next; b=b->next; }
        else if(a->data<b->data){ t->next=new Node(a->data); a=a->next; }
        else { t->next=new Node(b->data); b=b->next; }
        t=t->next;
    }
    while(a){ t->next=new Node(a->data); a=a->next; t=t->next; }
    while(b){ t->next=new Node(b->data); b=b->next; t=t->next; }
    return dummy.next;
}

Node* Intersection(Node* a, Node* b){
    Node dummy(0); Node* t=&dummy;
    while(a && b){
        if(a->data==b->data){ t->next=new Node(a->data); t=t->next; a=a->next; b=b->next; }
        else if(a->data<b->data) a=a->next;
        else b=b->next;
    }
    return dummy.next;
}

void showList(Node* h){ while(h){ cout<<h->data<<" "; h=h->next; } cout<<"\n"; }

int main(){
    // Test Case 1 (Given)
    int A1[]={3,5,78,90,91,95,105,106,150,170,190,200,205,210};
    int B1[]={2,3,5,98,106,107,190,201,204,222,250};
    SLL s1,s2; s1.build(A1,14); s2.build(B1,11);

    cout<<"S1: "; s1.show();
    cout<<"S2: "; s2.show();

    Node* u1=Union(s1.getHead(),s2.getHead());
    Node* i1=Intersection(s1.getHead(),s2.getHead());

    cout<<"Union: "; showList(u1);
    cout<<"Intersection: "; showList(i1);

    // Test Case 2
    int A2[]={1,4,7,10};
    int B2[]={2,4,6,10,12};
    SLL s3,s4; s3.build(A2,4); s4.build(B2,5);
    cout<<"\nS3: "; s3.show();
    cout<<"S4: "; s4.show();
    cout<<"Union: "; showList(Union(s3.getHead(),s4.getHead()));
    cout<<"Intersection: "; showList(Intersection(s3.getHead(),s4.getHead()));

    // Test Case 3
    int A3[]={11,22,33,44};
    int B3[]={55,66,77};
    SLL s5,s6; s5.build(A3,4); s6.build(B3,3);
    cout<<"\nS5: "; s5.show();
    cout<<"S6: "; s6.show();
    cout<<"Union: "; showList(Union(s5.getHead(),s6.getHead()));
    cout<<"Intersection: "; showList(Intersection(s5.getHead(),s6.getHead()));
}
