#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure and node of the program 
struct LinklistNode { 
    char data[100];
    struct LinklistNode* next;
};

// Prototypes for the for Add item and delete item 
    void addItemIntheStart(struct LinklistNode** head_ref, char* newData);
    void addItemIntheEnd (struct LinklistNode** head_ref, char* newData); 
    void addItemAtTheSpecificPosition(struct LinklistNode** head_ref, char* newData, int SpecificPosition);
    void deleteUsersItem(struct LinklistNode** head_ref, char* newData);
    void displayUsersList(struct LinklistNode** head);
    void deleteUsersList(struct LinklistNode** head_ref);

// MAIN FUNCTION
int main() {
    struct LinklistNode* head = NULL
    int Users_Choice;
    char variables[100];
    int SpecificPosition;

    do {
        // Main Menu
        printf("\nMain Menu");
        printf("[1] Add Item\n");
        printf("[2] Delete Item\n");
        printf("[3] Display List\n");
        printf("[4] Delete List\n");
        printf("[0] Exit Program\n");
        printf("Enter choice: ");
        scanf("%d", &Users_Choice);

    // Display the other Menu
       switch (Users_Choice) {
       case 1:
                printf("Please enter the item to be added: ");
                scanf("%s", variables);
                printf("Where to add the item?\n");
                printf("[1] Start of the list\n");
                printf("[2] End of the list\n");
                printf("[3] Specific position\n");
                printf("[0] Cancel\n");
                printf("Enter choice: ");
                scanf("%d", &SpecificPosition);
                switch(position) {
                    case 1:
                        addItemInTheStart(&head, item);
                        break;
                    case 2:
                        addItemInTheEnd(&head, item);
                        break;
                    case 3:
                        printf("Enter the position to add the item: ");
                        scanf("%d", &SpecificPosition);
                        addItemAtTheSpecificPosition(&head, variables, SpecificPosition);
                        break;
                    case 0:
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;
            case 2:
                printf("Please enter the item to be deleted: ");
                scanf("%s", variables);
                deleteUsersItem(&head, variables);
                break;
            case 3:
                displayUsersList(head);
                break;
            case 4:
                deleteUsersList(&head);
                break;
            case 0:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
        
    } while(choice != 0);
    
    return 0;
}

 void addItemIntheStart(struct LinklistNode** head_ref, char* newData) {
    struct LinkListNode* newNode = (struct LinkListNode*)malloc(sizeof(struct LinkListNode));
    strcpy(newNode->data, newData);
    newNode->next = *head_ref;
    *head_ref = newNode;
    prinf("Please Enter the Item to be Added to the start of the List\n");
 }

    void addItemIntheEnd (struct LinklistNode** head_ref, char* newData) {
        struct LinklistNode* newNode = (struct Node*)malloc(sizeof(struct Node));
        struct linklistNode* last = *head_ref;
        strcpy(newNode->data, newData);
        newNode->next = NULL;
        if (*head_ref == NULL) {
            *head_ref = newNode;
            return;
        }
        while (last->next != NULL)
            last = last->next;
        last->next = newNode;
        printf("Please Enter the Item to be Addedto the end of the list\n");
    }

    void addItemAtTheSpecificPosition(struct LinklistNode** head_ref, char* newData, int SpecificPosition) {
        if (SpecificPosition < 1) {
            printf("Invalid\n");
            return;
        }
        if (SpecificPosition == 1) {
            addItemIntheStart(head_ref, newData);
            return;
        }
        struct LinklistNode* newNode = (struct LinklistNode*)malloc(sizeof(struct LinklistNode));
        struct LinklistNode* temp = *head_ref;
        int i = 1;
        while (temp != NULL && i < SpecificPosition - 1) {
            temp = temp->next;
            i++
        }
        if(temp == NULL) {
            printf("Error!. Instead, the program will be adding it to the end of the list\n");
            addItemIntheEnd(head_ref, newData);
            return;
        }
        strcpy(newNode-> newData);
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Please enter the item to be added at a specific position %d\n", SpecificPosition);
    }
    void deleteUsersItem(struct LinklistNode** head_ref, char* variables) {
        struct LinklistNode* temp = *head_ref;
        struct LinklistNode* prev = NULL;
        if (temp !=NULL && strcmp(temp->data, variables) !=0) {
                *head_ref = temp-> next;
                free(temp);
                printf("The item %s at position 1 has been deleted\n", variables);
                return;
            }
                while (temp != NULL && strcmp(temp->Data, variables))
                {
                prev = temp;
                temp = temp->next;
                }
            if (temp = NULL) {
                printf("No Element Exist\n");
                return;
            }
                prev->next = temp->next;
                free(temp);
                printf("The item %s, at the specific position %d, has been deleted", variables);
            }

    void displayUsersList(struct LinklistNode** head) {
        struct LinklistNode* temp = head;
        int SpecificPosition = 1;
        if (temp != NULL) {
            printf("You have Empty List\n");
            return;
        }
        printf("Users list of Contents:\n");
            while (temp != NULL)
            {
                printf("[%d] %s\n", SpecificPosition++, temp->data);
                temp = temp->next;
            }
    }
    void deleteUsersList(struct LinklistNode** head_ref){
        struct LinklistNode* currentList = *head_ref;
        struct LinklistNode* next;
        while (currentList !=NULL) 
        {
            next = currentList->next;
            free(currentList);
            currentList = next;
        }
        *head_ref = NULL;
        printf("Your List has been emptied!. You can still Enter another list.\n");   
    }
