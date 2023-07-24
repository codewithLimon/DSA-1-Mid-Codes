//FIFO
// First in first out
//Insertion from back, removal from front


#include<iostream>

using namespace std;

#define SIZE 100

class Queue{
    public:
     
    int* array;
    int front;
    int back;

    Queue(){
        array=new int[SIZE];
        front=-1;
        back=-1;
    }

    void enqueue(int value){
        if(back==SIZE-1){
            cout<<"Queue overflow"<<endl;
            return;
        }

        back++;
        array[back]=value;

        if(front==-1){
            front++;
        }

    }

    void dequeue(){
        if(front==-1 || front>back){
            cout<<"Can't dequeue an empty queue"<<endl;
            return;
        }

        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            return -1;
        }

        return array[front];
    }

    void empty(){
        if(front==-1 || front>back){
            cout<<"YES"<<endl;
            return;
        }

        cout<<"NO"<<endl;
    }
};

int main(){
    Queue q;

    q.enqueue(191);

    q.enqueue(288);

    q.dequeue();
    // cout<<q.front<<endl;

    q.enqueue(97);


    q.enqueue(191);

    q.dequeue();



    // q.enqueue(20);
    // q.enqueue(30);
    // q.enqueue(40);
    // q.enqueue(50);
    cout<<q.peek()<<endl; //10
    // q.dequeue(); //10 removed

    // cout<<q.peek()<<endl; //20
    // q.dequeue(); // 20 removed


    // cout<<q.peek()<<endl; //30
    // q.dequeue(); //30 removed


    // cout<<q.peek()<<endl; //40
    // q.dequeue(); //40 removed

    // cout<<q.peek()<<endl; //50
    // q.dequeue(); //50 removed

    // q.empty(); //YES

    // cout<<q.peek()<<endl;
    // q.dequeue();

}