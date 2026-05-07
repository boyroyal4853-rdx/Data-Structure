#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = 0, rear = 2;

void dequeue() {
    if(front > rear) {
        printf("Queue Underflow\n");
    }
    else {
        printf("%d deleted\n", queue[front]);
        front++;
    }
}

int main() {

    queue[0] = 10;
    queue[1] = 20;
    queue[2] = 30;

    dequeue();

    return 0;
}