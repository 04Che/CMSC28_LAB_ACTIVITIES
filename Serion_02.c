#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LinklistNode {
    char data[100];
    struct LinklistNode* next;
};

void addItemIntheStart(struct LinklistNode** head_ref, char* newData, FILE *output_file);
void addItemIntheEnd(struct LinklistNode** head_ref, char* newData, FILE *output_file);
void addItemAtTheSpecificPosition(struct LinklistNode** head_ref, char* newData, int SpecificPosition, FILE *output_file);
void deleteUsersItem(struct LinklistNode** head_ref, char* newData, FILE *output_file);
void displayUsersList(struct LinklistNode* head, FILE *output_file);
void deleteUsersList(struct LinklistNode** head_ref, FILE *output_file);

int main() {
    struct LinklistNode* head = NULL;
    FILE *output_file = fopen("Usersoutput.txt", "w");
    if(output_file == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }
    int Users_Choice;
    char variables[100];
    int SpecificPosition;

    do {
        // Main Menu
        printf("\nMain Menu\n");
        fprintf(output_file, "\nMain Menu\n");
        printf("[1] Add Item\n");
        fprintf(output_file, "[1] Add Item\n");
        printf("[2] Delete Item\n");
        fprintf(output_file, "[2] Delete Item\n");
        printf("[3] Display List\n");
        fprintf(output_file, "[3] Display List\n");
        printf("[4] Delete List\n");
        fprintf(output_file, "[4] Delete List\n");
        printf("[0] Exit Program\n");
        fprintf(output_file, "[0] Exit Program\n");
        printf("Enter choice: ");
        scanf("%d", &Users_Choice);
        fprintf(output_file, "Enter choice: %d\n", Users_Choice);

        switch (Users_Choice) {
            case 1:
                printf("Please enter the item to be added: ");
                fprintf(output_file, "Please enter the item to be added: ");
                scanf("%s", variables);
                fprintf(output_file, "%s\n", variables);
                printf("Where to add the item?\n");
                fprintf(output_file, "Where to add the item?\n");
                printf("[1] Start of the list\n");
                fprintf(output_file, "[1] Start of the list\n");
                printf("[2] End of the list\n");
                fprintf(output_file, "[2] End of the list\n");
                printf("[3] Specific position\n");
                fprintf(output_file, "[3] Specific position\n");
                printf("[0] Cancel\n");
                fprintf(output_file, "[0] Cancel\n");
                printf("Enter choice: ");
                fprintf(output_file, "Enter choice: ");
                scanf("%d", &SpecificPosition);
                fprintf(output_file, "%d\n", SpecificPosition);
                switch (SpecificPosition) {
                    case 1:
                        addItemIntheStart(&head, variables, output_file);
                        break;
                    case 2:
                        addItemIntheEnd(&head, variables, output_file);
                        break;
                    case 3:
                        printf("Enter the position to add the item: ");
                        fprintf(output_file, "Enter the position to add the item: ");
                        scanf("%d", &SpecificPosition);
                        fprintf(output_file, "%d\n", SpecificPosition);
                        addItemAtTheSpecificPosition(&head, variables, SpecificPosition, output_file);
                        break;
                    case 0:
                        break;
                    default:
                        printf("Invalid choice\n");
                        fprintf(output_file, "Invalid choice\n");
                }
                break;
            case 2:
                printf("Please enter the item to be deleted: ");
                fprintf(output_file, "Please enter the item to be deleted: ");
                scanf("%s", variables);
                fprintf(output_file, "%s\n", variables);
                deleteUsersItem(&head, variables, output_file);
                break;
            case 3:
                displayUsersList(head, output_file);
                break;
            case 4:
                deleteUsersList(&head, output_file);
                break;
            case 0:
                printf("Exiting program...\n");
                fprintf(output_file, "Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
                fprintf(output_file, "Invalid choice\n");
        }

    } while (Users_Choice != 0);

    fclose(output_file);
    return 0;
}

void addItemIntheStart(struct LinklistNode** head_ref, char* newData, FILE *output_file) {
    struct LinklistNode* newNode = (struct LinklistNode*)malloc(sizeof(struct LinklistNode));
    if(newNode == NULL) {
        printf("Memory allocation failed\n");
        fprintf(output_file, "Memory allocation failed\n");
        return;
    }
    strcpy(newNode->data, newData);
    newNode->next = *head_ref;
    *head_ref = newNode;
    printf("Item added at the start of the list\n");
    fprintf(output_file, "Item added at the start of the list\n");
}

void addItemIntheEnd(struct LinklistNode** head_ref, char* newData, FILE *output_file) {
    struct LinklistNode* newNode = (struct LinklistNode*)malloc(sizeof(struct LinklistNode));
     if(newNode == NULL) {
        printf("Memory allocation failed\n");
        fprintf(output_file, "Memory allocation failed\n");
        return;
    }
    struct LinklistNode* last = *head_ref;
    strcpy(newNode->data, newData);
    newNode->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
    printf("Item added at the end of the list\n");
    fprintf(output_file, "Item added at the end of the list\n");
}

void addItemAtTheSpecificPosition(struct LinklistNode** head_ref, char* newData, int SpecificPosition, FILE *output_file) {
    if (SpecificPosition < 1) {
        printf("Invalid position\n");
        fprintf(output_file, "Invalid position\n");
        return;
    }
    if (SpecificPosition == 1) {
        addItemIntheStart(head_ref, newData, output_file);
        return;
    }
    struct LinklistNode* newNode = (struct LinklistNode*)malloc(sizeof(struct LinklistNode));
    struct LinklistNode* temp = *head_ref;
    int i = 1;
    while (temp != NULL && i < SpecificPosition - 1) {
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Error! Inserting at the end of the list\n");
        fprintf(output_file, "Error! Inserting at the end of the list\n");
        addItemIntheEnd(head_ref, newData, output_file);
        return;
    }
    strcpy(newNode->data, newData);
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Item added at position %d\n", SpecificPosition);
    fprintf(output_file, "Item added at position %d\n", SpecificPosition);
}

void deleteUsersItem(struct LinklistNode** head_ref, char* variables, FILE *output_file) {
    struct LinklistNode* temp = *head_ref;
    struct LinklistNode* prev = NULL;
    int position = 1;
    if (temp != NULL && strcmp(temp->data, variables) == 0) {
        *head_ref = temp->next;
        free(temp);
        printf("The item '%s' at position %d has been deleted\n", variables, position);
        fprintf(output_file, "The item '%s' at position %d has been deleted\n", variables, position);
        return;
    }
    while (temp != NULL && strcmp(temp->data, variables) != 0) {
        prev = temp;
        temp = temp->next;
        position++;
    }
    if (temp == NULL) {
        printf("Item '%s' not found in the list\n", variables);
        fprintf(output_file, "Item '%s' not found in the list\n", variables);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("The item '%s' at position %d has been deleted\n", variables, position);
    fprintf(output_file, "The item '%s' at position %d has been deleted\n", variables, position);
}

void displayUsersList(struct LinklistNode* head, FILE *output_file) {
    int position = 1;
    if (head == NULL) {
        printf("List is empty\n");
        fprintf(output_file, "List is empty\n");
        return;
    }
    printf("Contents of the list:\n");
    fprintf(output_file, "Contents of the list:\n");
    while (head != NULL) {
        printf("[%d] %s\n", position, head->data);
        fprintf(output_file, "[%d] %s\n", position, head->data);
        head = head->next;
        position++;
    }
}

void deleteUsersList(struct LinklistNode** head_ref, FILE *output_file) {
    struct LinklistNode* current = *head_ref;
    struct LinklistNode* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
    printf("Your list has been deleted\n");
    fprintf(output_file, "Your list has been deleted\n");
}
