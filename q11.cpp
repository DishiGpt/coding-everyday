#include <iostream>
//#include <cstdlib> // For exit()

struct Stack {
    int no;
    Stack* next;
};

Stack* start = nullptr;

void push();
int pop();
void display();

int main() {
    char ch;
    int choice, item;
    do {
        std::cout << "\n1: Push";
        std::cout << "\n2: Pop";
        std::cout << "\n3: Display";
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                item = pop();
                std::cout << "The deleted element is " << item << "\n";
                break;
            case 3:
                display();
                break;
            default:
                std::cout << "\nWrong choice";
        }

        std::cout << "\nDo you want to continue (Y/N)? ";
        std::cin >> ch;
    } while (ch == 'Y' || ch == 'y');

    return 0;
}

void push() {
    Stack* node = new Stack;
    std::cout << "\nEnter the number to be inserted: ";
    std::cin >> node->no;
    node->next = start;
    start = node;
}

int pop() {
    if (start == nullptr) {
        std::cout << "Stack is already empty\n";
        exit(1); // Exit with an error code
    }

    Stack* temp = start;
    start = start->next;
    int deletedValue = temp->no;
    delete temp;

    return deletedValue;
}

void display() {
    if (start == nullptr) {
        std::cout << "\nStack is empty";
        return;
    }

    Stack* temp = start;
    while (temp != nullptr) {
        std::cout << "\nno = " << temp->no;
        temp = temp->next;
    }
}
