#include <stdio.h>

#define SIZE 5

int queue[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void display() {
    int i;

    if(front > rear) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Queue elements are:\n");

        for(i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
}

int main() {

    display();

    return 0;
}