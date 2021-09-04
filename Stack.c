#include <stdio.h>

int size = 8;
int stack[8];
int top = -1;

void raw(int compteur) {
    int i;
    for (i = 0; i < compteur-1; i++) {
        printf("=");
    }
    printf("=\n");
}
int isempty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

int isfull() {

    if (top == size)
        return 1;
    else
        return 0;
}

int peek() {
    return stack[top];
}

int pop() {
    int data;
    if (!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else {
        printf("Heap empty.\n");
    }
}

int push(int data) {

    if (!isfull()) {
        top = top + 1;
        stack[top] = data;
    }
    else {
        printf("Heap filled. \n");
    }

}

int main() {
    printf("Creation of the heap \n");
    printf("Heap successfully created \n");
    printf("Filling the heap \n");
    size(50);
    push(32);
    push(51);
    push(9);
    push(11);
    push(69);
    push(15);

    printf("The element in the top of the heap is : %d\n", peek());
    size(50);
    printf("Dumping the heap \n");
    printf("Elements: \n");

    while (!isempty()) {
        int data = pop();
        printf("%d\n", data);
    }

    printf("Heap entirely filled : %s\n", isfull() ? "True" : "False");
    printf("Heap empty : %s\n", isempty() ? "True" : "False");

    return 0;
}
