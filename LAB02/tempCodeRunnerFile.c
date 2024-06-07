#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum size of the stack
#define MAX_STACK_SIZE 10

// Structure for node in stack to hold the string for kitchenwares names
typedef struct Node {
    char kitchenwares_name[50]; 
    struct Node *next; // A member pointing to the other node forming a linklist
} Node;

// Structure for the stack for top
typedef struct {
    Node *top; // a node member pointing to the top 
} Stack;

// Functions use in the programm
void pushToS(Stack *stack, const char *item); // to push stack
char* popFromS(Stack *stack); // to pop stack 
int StackFull(Stack *stack); // when the stack is full
int StackEmpty(Stack *stack); // when stack is empty 
char* StackTop(Stack *stack); // what's the next kitchenware to be wash 
void StackNull(Stack *stack); // setting the stack to null 

int main() {
    Stack tokitchenwareStack;
    tokitchenwareStack.top = NULL;

    int choice;
    char item[50];
// Where the selection happen, this is where the user add,wash,top, wash all and exit selcetion happen
    do {
        printf("\nKitchenware Washing Machine\n");
        printf("[1] Add kitchenware\n");
        printf("[2] Wash kitchenware\n");
        printf("[3] Top kitchenware\n");
        printf("[4] Wash all\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice); // storing the choice of the user

// This is where the choice of the user being evaluated 
        switch(choice) {
            case 1:
                if (!StackFull(&tokitchenwareStack)) {
                    printf("Enter kitchenware name: ");
                    scanf("%s", item);
                    pushToS(&tokitchenwareStack, item);
                } else {
                    printf("The STACK is FULL. Cannot add kitchenware.\n");
                }
                break;
            case 2:
                if (!StackEmpty(&tokitchenwareStack)) {
                    printf("%s is being washed.\n", popFromS(&tokitchenwareStack));
                } else {
                    printf("The STACK is EMPTY. No more kitchenware to wash.\n");
                }
                break;
            case 3:
                if (!StackEmpty(&tokitchenwareStack)) {
                    printf("%s is next to be washed.\n", StackTop(&tokitchenwareStack));
                } else {
                    printf("The STACK is EMPTY. No kitchenware to wash.\n");
                }
                break;
            case 4:
                while (!StackEmpty(&tokitchenwareStack)) {
                    printf("%s is being washed.\n", popFromS(&tokitchenwareStack));
                }
                printf("All kitchenware has been washed.\n");
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    StackNull(&tokitchenwareStack); // Free memory before exiting the program 
    return 0;
}

// Function to push an item onto the stack and to check the memory allocation, whether it is full or not 
void pushToS(Stack *stack, const char *item) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Stack may be full.\n");
        return;
    }
    // Ensure that it handles the situation where memory allocation fails due to stack being full
    strcpy(newNode->kitchenwares_name, item);
    newNode->next = stack->top;
    stack->top = newNode;   
}

// Pop an item 
char* popFromS(Stack *stack) {
    if (StackEmpty(stack)) {
        printf("Stack underflow.\n");
        exit(1);
    }
    Node *temp = stack->top;
    char* item = strdup(temp->kitchenwares_name);
    stack->top = stack->top->next;
    free(temp);
    return item;
}

// If stack is full
int StackFull(Stack *stack) {
    return 0;
}

// If stack is empty
int StackEmpty(Stack *stack) {
    return (stack->top == NULL);
}

// Top item of the stack
char* StackTop(Stack *stack) {
    if (StackEmpty(stack)) {
        printf("Stack is empty.\n");
        exit(1);
    }
    return stack->top->kitchenwares_name;
}

// Make the stack empty
void StackNull(Stack *stack) {
    while (!StackEmpty(stack)) {
        popFromS(stack);
    }
}
