#include<iostream>
using namespace std;

class Queues{
    int *arr;
    int  front;
    int  back;
    int  size;
    
    public:
    //intialization of queue
          Queues(){
             size=10;
             arr=new int(size);
             front=0;
             back=0;
          }

    void push(int data){
        if(back==size){
            cout<<"size is full"<<endl;
            return;
        }else{
            arr[back]=data;
            back++;
        }
    }

    int pop(){
        if(front==back){
            return -1;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==back){
                front=0;
                back=0;
            }
        }
    }

    int Qfront(){
        if(front==back){
            return -1;
        }
        else{
            cout<<"top element is:";
            return arr[front];
        }
    }

    bool empty(){
        if(front==back){
            return true;
        }else
       return false;
    }
};

int main(){
  Queues q;
    q.push(3);
    q.push(6);
    q.push(8);
    q.push(9);
     q.pop();
    q.push(1);
   cout<< q.Qfront()<<endl;
    q.pop();
     cout<< q.Qfront()<<endl;
   cout<<q.empty()<<endl;
   q.pop();
//    q.pop();
//     cout<<q.empty()<<endl;

    return 0;
}
