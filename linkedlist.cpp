#include <bits/stdc++.h>
using namespace std;


struct Node_dll{
    int data;
    struct Node_dll *prev=NULL;
    struct Node_dll *next=NULL;
    
};
class ll{
public:
    void insert_to_start(int element){
        if(head==NULL){
            head->data=element;
            return;
        }
        Node_dll *curr=head;
        curr->data=element;
        curr->next=head;
        head->prev=curr;
        head=curr;
    }
    void insert_to_end(int element){
        if(head==NULL){
            head->data=element;
            return;
        }
        Node_dll *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        //Node_dll *prev=curr;
        curr->next->data=element;
        curr->next->prev=curr;
    }
    void insert_at_position(int p, int element){
        if(p>size()){
            return;
        }
        Node_dll *curr=head;
        
    }
    void insert_after_element(int target, int element){

    }
    void insert_before_element(int target, int element){

    }
    void print_list(){

    }
    int size(Node_dll *ll){

    }
    void reverse(){

    }
    void remove_element(int element){

    }
    void remove_duplicates(){

    }

};
int main (){
    struct Node_dll *head=new Node_dll;
    struct Node_dll *second=new Node_dll;
    struct Node_dll *third=new Node_dll;
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    second->prev=head;
    third->prev=second;
}