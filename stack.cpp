// LIFO - Last in First Out
// which data inserted in last, will out at first !


#include<iostream>
using namespace std;

#define SIZE 3

class Stack{
    public:

    char* array;

    int top;

    Stack(){
        array=new char[SIZE];
        top=-1;
    }

    void push(char x){
        if(top==SIZE-1){
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        array[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"The stack is empty, can't pop!"<<endl;
            return;
        }
        top--;
    }

    int Top(){

        if(top==-1){
            return -1;
        }
        return array[top];
    }

    void empty(){
        if(top==-1){
            cout<<"True"<<endl;
            return;
        }

        cout<<"False"<<endl;
    }

    


};

// x=last digit of student id+4
// y=x+5;
// z=y+x;

// push(x+y)
// push(y+z)
// pop()
// push(y*z)
// push(x*y)
// pop()
// pop()
// push(x+z)

int main(){
    Stack s;
    Stack s2;

//     int x=1+4;
//     int y=x+5;
//     int z=y+x;

//     s.push(x+y);
//     cout<<s.Top()<<endl;
//     s.push(y+z);
//     cout<<s.Top()<<endl;
//     s.pop();
//     cout<<s.Top()<<endl;
//     s.push(y*z);
//     cout<<s.Top()<<endl;
//     s.push(x*y);
//     cout<<s.Top()<<endl;
//     s.pop();
//     cout<<s.Top()<<endl;
//     s.pop();
//     cout<<s.Top()<<endl;
//     s.push(x+z);
//     cout<<s.Top()<<endl;

s.push('C');
s.push('S');
s.push('E');
// s.push('d');

s2.pop();
s2.empty();



 }