#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// For queue node
typedef struct Node {
    char CustomerName[50]; // Customer's Name
    float total; // For Customer total amount of purchase
    struct Node* next;
} Node;

// For queue
typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Initialize queue
Queue* INIT() {
    Queue* queue = (Queue*)malloc(sizeof(Queue)); // Allocate memory
    if (queue == NULL) { // check memory allocatin
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    queue->front = queue->rear = NULL; // Initialize front and rear
    return queue;
}

// To check queue
bool EMPTY(Queue* queue) {
    return (queue->front == NULL); // Return if front is NULL
}

// Get front item 
void FRONT(Queue* queue) {
    if (!EMPTY(queue)) { // Check queue 
        printf("Next order: For %s with total amount payable of %.4f.\n", queue->front->CustomerName, queue->front->total); // Print for the nect customer name and total amount of purchase 
    } else {
        printf("The QUEUE is EMPTY. No order to serve.\n"); // Print if the queue is empty 
    }
}

// Enqueue an item
void ENQUEUE(char CustomerName[], float total, Queue* queue) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory 
    if (newNode == NULL) { // check memory if it is a failed 
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE); 
    }
    newNode->total = total; // assign new node to total amount 
    strcpy(newNode->CustomerName, CustomerName); // using strcpy to copy Customer name to new node 
    newNode->next = NULL; // set new node to next pointer to null

    if (EMPTY(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Dequeue an item
void DEQUEUE(Queue* queue) {
    if (!EMPTY(queue)) { // to check if queue is not empty 
        Node* temp = queue->front;
        printf("Now serving %s with total amount payable of %.4f.\n", temp->CustomerName, temp->total);
        queue->front = queue->front->next;
        free(temp); // free memory 
        if (queue->front == NULL) {
            queue->rear = NULL; // Update the rear to Null 
        }
    } else {
        printf("The QUEUE is EMPTY. No orders to serve.\n");
    }
}

// Serve all customers
void serve(Queue* queue) {
    while (!EMPTY(queue)) { // a loop up until the queue is empty 
        DEQUEUE(queue); // serve each customer
    }
    printf("All the customers have been served.\n");
}

int main() {
    Queue* checkout = INIT(); // Initialize 
    int Users_choice;
    do {
        printf("Hell Clothing Shop Counter 0:\n");
        printf("[1] Fall in line\n");
        printf("[2] Serve customer\n");
        printf("[3] Next customer\n");
        printf("[4] Closing time\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &Users_choice);

        switch (Users_choice) { // base on users choice 
            case 1: {
                char CustomerName[50];
                float total;
                printf("Enter customer's name: ");
                scanf("%s", CustomerName);
                printf("Enter total amount payable: ");
                scanf("%f", &total);
                ENQUEUE(CustomerName, total, checkout);
                break;
            }
            case 2:
                DEQUEUE(checkout); // Serve Customer 
                break;
            case 3:
                FRONT(checkout); // Next Customer 
                break;
            case 4:
                serve(checkout); // Serve all 
                break;
            case 0:
                printf("The checkout system has been terminated.\n"); // print if the program is terminated 
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n"); // print if the user enter an invalid choice 
        }
    } while (Users_choice != 0); // a loop up until the user choose to exit the program 

    return 0; 
}
