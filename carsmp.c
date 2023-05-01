#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char make[20];
    char model[20];
    int year;
};

struct Node {
    struct Car car;
    struct Node* next;
};

struct Node* head = NULL;

void insert(struct Car car) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->car = car;
    new_node->next = head;
    head = new_node;
}

void display() {
    struct Node* ptr = head;
    while (ptr != NULL) {
        printf("%s %s %d\n", ptr->car.make, ptr->car.model, ptr->car.year);
        ptr = ptr->next;
    }
}

int main() {
    struct Car car1 = {"Toyota", "Corolla", 2010};
    struct Car car2 = {"Honda", "Civic", 2015};
    struct Car car3 = {"Ford", "Mustang", 2020};

    insert(car1);
    insert(car2);
    insert(car3);

    display();

    return 0;
}