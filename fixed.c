#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car {
char owner[50];
char number[10];
char model[50];
int year;
char make[50];
struct car *next;
};
struct car *head = NULL;
void insert_car() {
struct car* new_car=(struct car*) malloc(sizeof(struct car));
printf("\nEnter the owner's name: ");
scanf("%s",new_car->owner);
printf("Enter the car number: ");
scanf("%s",new_car->number);
printf("Enter the car model: ");
scanf("%s",new_car->model);
printf("Enter the car year: ");
scanf("%d",&new_car->year);
printf("Enter the car make: ");
scanf("%s",new_car->make);
new_car->next = head;
head = new_car;
printf("\nCar information added successfully.\n\n");
}
void display_cars() {
struct car *ptr = head;
if (ptr == NULL) {
printf("No cars added yet.\n");
return;
}
printf("\n\nOwner\tNumber\tModel\tYear\tMake\n");
while (ptr != NULL) {
printf("%s\t%s\t%s\t%d\t%s\n"
, ptr->owner, ptr->number,
ptr->model, ptr->year, ptr->make);
ptr = ptr->next;
}
}
void exit_program() {
printf("\nExiting program...\n");
exit(0);
}
int main() {
int choice;
while (1) {
printf("\n1. Insert car information\n");
printf("2. Display car information\n");
printf("3. Exit\n");
printf("\nEnter your choice: ");
scanf("%d"
, &choice);
switch (choice) {
case 1:
insert_car();
break;
case 2:
display_cars();
break;
case 3:
exit_program();
break;
default:
printf("Invalid choice. Try again.\n");
break;
}
}
return 0;
}