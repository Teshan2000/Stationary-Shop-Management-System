#include <stdio.h>

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
        exit();
    }


}

void customer() {

    int choice;
    printf("Choose your option");
    printf("(1)Select items");
    printf("(2)Display Items");
    printf("(3)View Bill");
    printf("(4)Exit");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        displayItems();        

        case 2:
        selectItems();

        case 3:
        viewBill();

        case 4:
        exit();
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
        printf("You can buy {} items of {} item.");         
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
    printf("(4)Exit");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        addItems();

        case 2:
        editItems();

        case 3:
        showItems();

        case 4:
        exit();
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
    printf("show items");
}


void order() {
    int additem;
    printf("");

}