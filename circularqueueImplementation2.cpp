#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
public:
    int size=0;
    vector<int> v;
    int f=-1,r=-1;
    CircularQueue(int k) {
        v.resize(k);
        size=k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        if(f==-1&&r==-1){
            f++;
        }
        r=(r+1)%size;
        v[r]=value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        if(f==r){
            f=-1,r=-1;
        }
        else
            f=(f+1)%size;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
       return v[f];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return v[r];
    }
    
    bool isEmpty() {
        if(f==-1&&r==-1)
            return true;
        return false;
    }
    
    bool isFull() {
        if((r+1)%size==f)
            return true;
        return false;
    }
};

int main(){
    CircularQueue cq(3);
    std::cout<<"Is queue empty? "<<cq.isEmpty()<<endl;
    std::cout<<"Add 10 to the queue: "<<cq.enQueue(10)<<endl;
    std::cout<<"Front element of queue: "<<cq.Front()<<endl;
    std::cout<<"Rear element of queue: "<<cq.Rear()<<endl;
    std::cout<<"Remove the front element in the queue: "<<cq.deQueue()<<endl;
    std::cout<<"Add 20 to the queue: "<<cq.enQueue(20)<<endl;
    std::cout<<"Add 30 to the queue: "<<cq.enQueue(30)<<endl;
    std::cout<<"Add 40 to the queue: "<<cq.enQueue(40)<<endl;
    std::cout<<"Add 50 to the queue: "<<cq.enQueue(50)<<endl;
    std::cout<<"Is queue full?: "<<cq.isFull()<<endl;    
    std::cout<<"Front element of queue: "<<cq.Front()<<endl;
    std::cout<<"Rear element of queue: "<<cq.Rear()<<endl;
}