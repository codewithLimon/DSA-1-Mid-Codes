#include<iostream>

using namespace std;

#define br cout<<endl

void insertionDescending(int array[], int size){
    for(int i=0;i<size;i++){
        int key=array[i];
        int j=i-1;

        while(j>=0 && array[j]<=key){
            swap(array[j],array[j+1]);
            j--;
        }
    }
}

void print(int array[],int size){
    for(int i=0;i<size;i++){
        if(i!=size-1){
            cout<<array[i]<<", ";
        }else{
            cout<<array[i]<<endl;
        }
    }
}

int main(){
    int size;
    cin>>size;

    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    br;

    cout<<"Unsorted array:"<<endl;
    print(array,size);

    br;

    cout<<"Sorted array:"<<endl;
    insertionDescending(array,size);
    print(array,size);

    

}