#include <stdio.h>
#include <stdlib.h>

void customer();
void owner();
void addItems();
void editItems();
void showItems();
void displayItems();
void selectItems();
void viewBill();

int main() {
    int choice;
    printf("Welcome to our Boookshop!\n");
    printf("(1)Log as a customer");
    printf("(2)Log as the owner");
    printf("(3)Exit");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        customer();

        case 2:
        owner();

        case 3:
        exit(0);

        default:
        printf("You entered an invalid option\n");
    }
}

void customer() {

    int choice;
    printf("Choose your option");
    printf("(1)Display items");
    printf("(2)Select items");
    printf("(3)View Bill");
    printf("(4)Back to Home page");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        displayItems();  
        break;      

        case 2:
        selectItems();
        break;

        case 3:
        viewBill();
        break;

        case 4:
        main();

        default:
        printf("You entered an invalid option\n");
        break;
    }
}


void displayItems() {
    printf("Display items");
    printf("(1)Books");
    printf("(2)Pencils");
    printf("(3)Pens");
    printf("(4)Rulers");
    printf("(5)Erasers");
    printf("(6)File Covers");
    printf("(7)Drawing Books");
    printf("(8)Colour Pencils");
}

void selectItems() {
    printf("Select items");
    int choice;
    printf("Choose your option");  
    printf("(1)Enter Item Id: "); 
    printf("(2)Enter Item Quantity: "); 
    printf("You bought {} items of {} item.");         
}              

void viewBill() {
    printf("View Bill");
}


void owner() {

    int choice;
    printf("Choose your option");
    printf("(1)Add items");
    printf("(2)Edit Items");
    printf("(3)Show Items");
    printf("(4)Back to Home page");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        addItems();
        break;

        case 2:
        editItems();
        break;

        case 3:
        showItems();
        break;

        case 4:
        main();

        default:
        printf("You entered an invalid option\n");
        break;
    }
}


void addItems() {

    int count;
    char id, name, quantity;
    printf("add items");
    printf("How many items do you want to insert to the list");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        printf("(1)Enter Item Id: "); 
        scanf("%d", &id);
        printf("(2)Enter Item Name: ");
        scanf("%d", &name);
        printf("(3)Enter Item Quantity: "); 
        scanf("%d", &quantity);
        printf("Your shop has %s items of %s item." ,quantity,name); 
    }    
}

void editItems() {
    
    int count;
    char id, name, quantity;
    printf("edit items");
    printf("How many items do you want to edit of the list");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        printf("(1)Enter New Item Id: "); 
        scanf("%d", &id);
        printf("(2)Enter New Item Name: ");
        scanf("%d", &name);
        printf("(3)Enter New Item Quantity: "); 
        scanf("%d", &quantity);
        printf("Now your shop has %s items of %s item." ,quantity,name); 
    }
}

void showItems() {

    int count;
    char id, name, quantity;
    printf("show items");

    for (int i = 1; i <= count; i++) {
        
        printf("Id \tName \tQuantity", id,name,quantity);
        printf("%s \t%s \t%s", id,name,quantity);
    }
    printf("Your shop has item list of %s items." ,count); 
}

