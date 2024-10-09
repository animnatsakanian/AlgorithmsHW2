#include <stdio.h>
#define SIZE 100

int arr[SIZE], front=-1, rear=-1;

void enqueue (int value) {

    if (rear == SIZE-1) {
        printf("Queue is full\n");
    }
    else {
        if (front ==-1) {
            front = 0;
        }
        rear++;
        arr[rear]=value;
        printf("Enqueue -> %d \n", value);
    }
}

void dequeue () {
    if (rear == -1) {
        printf ("Queue is empty\n");
    }
    else {
        printf ("Deleted -> %d\n", arr[front]);
        front++;
        if (front > rear) {
            rear = front =-1;
        }
    }
}

void display() {
    if (front==-1) {
        printf("Empty queue\n");
    }
    else {
        for (int i = front; i<=rear; i++) {
            printf("%d  ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(20);
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue();

}