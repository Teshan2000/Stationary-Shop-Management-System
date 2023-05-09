#include <stdio.h>

int main() {
    int choice;
    printf("Welcome to our Boookshop!\n");
    printf("Log as a customer");
    scanf("%d", &choice);
}

void customer() {
    int item;
    printf("Choose your stationary item");
    printf("Books");
    printf("Pencils");
    printf("Pens");
    scanf("%d", &item);
}