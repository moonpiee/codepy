#include <bits/stdc++.h>
using namespace std;

struct Node_ll{
    int data;
    struct Node_ll *prev;
    struct Node_ll *next;
    Node_ll(int x){
        data=x;
        next=NULL;
    }
};
class ll_imp{
public:
    void insert_to_start(Node_ll* &head,int element){
        Node_ll* temp=new Node_ll(element);
        if(head==NULL){
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
    }
    void insert_to_end(Node_ll* &head, int element){
        Node_ll* temp=new Node_ll(element);
        if(head==NULL){
            head=temp;
            return;
        }
        Node_ll* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
    //Note: pos is 1-indexed
    void insert_at_position(Node_ll* &head,int pos, int element){
        if(pos>size(head)){
            return;
        }
        Node_ll* temp=new Node_ll(element);
        Node_ll* curr=head;
        if(pos==1){
            temp->next=head;
            head=temp;
        }
        for(int i=1;i<=pos-2;i++){
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;    
    }
    void insert_after_element(Node_ll* &head,int target, int element){
        //search for first instance of target, and insert after
        Node_ll* curr=head;
        while(curr!=NULL){
            if(target==curr->data){
                break;
            }
            curr=curr->next;
        }
        if(curr==NULL) return;
        Node_ll* temp=new Node_ll(element);
        curr->next=temp;
    }
    void insert_before_element(Node_ll* &head,int target, int element){
        Node_ll* curr=head;
        Node_ll* temp=new Node_ll(element);
        if(target==curr->data){
            temp->next=head;
            head=temp;
        }
        while(curr!=NULL&&curr->next!=NULL){
            if(target==curr->next->data){
                break;
            }
            curr=curr->next;
        }
        if(curr==NULL||curr->next==NULL) return;
        temp->next=curr->next;
        curr->next=temp;
    }
    void print_list(Node_ll* head){
        Node_ll* curr=head;
        while(curr->next!=NULL){
            cout<<curr->data<<" -> ";
            curr=curr->next;
        }
        cout<<curr->data<<" -> NULL";
        cout<<endl;
    }
    int size(Node_ll *head){
        int c=0;
        Node_ll* curr=head;
        while(curr!=NULL){
            curr=curr->next;
            c++;
        }
        return c;
    }
    Node_ll* reverse(Node_ll* head){
        Node_ll *f=head,*b=NULL,*curr=head;
        if(size(head)==1 || size(head)==0) return head;
        while(curr!=NULL){
            f=curr->next;
            curr->next=b;
            b=curr;
            curr=f;
        }
        return b;
    }
    void remove_element(Node_ll* &head,int element){ //1st instance;
        if(head==NULL) return;
        if(head->data==element){
             Node_ll* todel=head;
             head=head->next;
             delete todel;
             return;
        }
        Node_ll* curr=head;
        while(curr!=NULL){
            if(curr->next->data==element){
                break;
            }
            curr=curr->next;
        }
        if(curr==NULL||curr->next==NULL) return;
        Node_ll* todel=curr->next;
        curr->next=curr->next->next;
        delete todel;
    }
    //removing duplicates in sorted linked list
    void remove_duplicates(Node_ll* &head){
        if(size(head)==1||size(head)==0) return;
        Node_ll* curr=head;
        while(curr!=NULL&&curr->next!=NULL){
            if(curr->data==curr->next->data){
               Node_ll* to_del=curr->next;
               curr->next=curr->next->next;
               delete to_del;
            }
            else{
                curr=curr->next;
            }
        } 
    }

};
int main (){
    ll_imp ll;
    Node_ll* head=new Node_ll(10);
    head->next=new Node_ll(20);
    head->next->next=new Node_ll(20);
    head->next->next->next=new Node_ll(40);
    head->next->next->next->next=new Node_ll(50);
    ll.print_list(head);
    cout<<ll.size(head)<<endl;
    ll.insert_to_start(head,11);
    ll.print_list(head);
    ll.insert_to_end(head,60);
    ll.print_list(head);
    cout<<ll.size(head)<<endl;
    ll.insert_at_position(head,3,15);
    ll.print_list(head);
    ll.remove_element(head,11);
    ll.print_list(head);
    ll.insert_before_element(head,50,45);
    ll.print_list(head);
    //ll.print_list(ll.reverse(head));
    ll.remove_duplicates(head);
    ll.print_list(head);
    return 0;    
}