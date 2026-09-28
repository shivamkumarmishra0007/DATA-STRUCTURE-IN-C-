#include<stdio.h>
#define MAX 5

int queue[MAX]={10,20,30,10,50};

int front = 0;
int rear = 4;
void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue is Empty:");
    }else{
        printf("%d deleted from queue \n ",queue[front]);
        front++;
    }
}
int main(){
    dequeue();
     dequeue();
}

