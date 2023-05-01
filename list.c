#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the car data structure
struct Car {
    char make[50];
    char model[50];
    int year;
    double price;
};

// Define the node data structure for the linked list
struct Node {
    struct Car car;
    struct Node* next;
};

// Create a linked list class to manage the nodes
struct CarLinkedList {
    struct Node* head;
};

// Add a car to the linked list
void addCar(struct CarLinkedList* list, const struct Car* newCar) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->car = *newCar;
    newNode->next = list->head;
    list->head = newNode;
}

// Remove a car from the linked list
void removeCar(struct CarLinkedList* list, const struct Car* carToRemove) {
    struct Node* currNode = list->head;
    struct Node* prevNode = NULL;
    while (currNode) {
        if (strcmp(currNode->car.make, carToRemove->make) == 0
            && strcmp(currNode->car.model, carToRemove->model) == 0
            && currNode->car.year == carToRemove->year
            && currNode->car.price == carToRemove->price) {
            if (prevNode) {
                prevNode->next = currNode->next;
            }
            else {
                list->head = currNode->next;
            }
            free(currNode);
            return;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }
}

// Print all the cars in the linked list
void printCars(const struct CarLinkedList* list) {
    struct Node* currNode = list->head;
    while (currNode) {
        printf("Make: %s, Model: %s, Year: %d, Price: %.2f\n",
            currNode->car.make, currNode->car.model, currNode->car.year, currNode->car.price);
        currNode = currNode->next;
    }
}

int main() {
    struct CarLinkedList carList;
    carList.head = NULL;

    struct Car car1 = { "Toyota", "Corolla", 2020, 20000.0 };
    struct Car car2 = { "Honda", "Civic", 2021, 25000.0 };
    struct Car car3 = { "Ford", "Mustang", 2019, 30000.0 };
    addCar(&carList, &car1);
    addCar(&carList, &car2);
    addCar(&carList, &car3);
    printCars(&carList);

    struct Car carToRemove = { "Honda", "Civic", 2021, 25000.0 };
    removeCar(&carList, &carToRemove);
    printCars(&carList);

    // Free memory allocated for the nodes
    struct Node* currNode = carList.head;
    while (currNode) {
        struct Node* temp = currNode;
        currNode = currNode->next;
        free(temp);
    }
    return 0;
}