#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
public:
    int size=0;
    vector<int> v;
    int f=0,r=0,cap=0;
    MyCircularQueue(int k) {
        v.resize(k);
        cap=k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        v[r]=value;
        r++;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        for(int i=1;i<r;i++){
            v[i-1]=v[i];
        }
        r=r-1;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
       return v[0];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return v[r-1];
    }
    
    bool isEmpty() {
        if(size==0)
            return true;
        return false;
    }
    
    bool isFull() {
        if(size==cap)
            return true;
        return false;
    }
};

int main(){
    CircularQueue cq(3);
    cout<<"Is queue empty? "<<cq.isEmpty()<<endl;
    cout<<"Add 10 to the queue: "<<cq.enQueue(10)<<endl;
    cout<<"Front element of queue: "<<cq.Front()<<endl;
    cq.enQueue(20);
    cout<<"Rear element of queue: "<<cq.Rear()<<endl;
    cout<<"Remove the front element in the queue: "<<cq.deQueue()<<endl;
    cout<<"Add 20 to the queue: "<<cq.enQueue(20)<<endl;
    cout<<"Add 30 to the queue: "<<cq.enQueue(30)<<endl;
    cout<<"Add 40 to the queue: "<<cq.enQueue(40)<<endl;
    cout<<"Add 50 to the queue: "<<cq.enQueue(50)<<endl;
    cout<<"Is queue full?: "<<cq.IsFull()<<endl;    
}