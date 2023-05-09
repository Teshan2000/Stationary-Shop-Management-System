#include <stdio.h>

int main() {
    int choice;
    printf("Welcome to our Boookshop!\n");
    printf("(1)Log as a customer");
    printf("(2))Log as a customer");
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
    int item;
    printf("Choose your stationary item");
    printf("Books");
    printf("Pencils");
    printf("Pens");
    scanf("%d", &item);
}

void owner() {
    
}

void order() {
    int additem;
    printf("");

}

void bill() {
    
}