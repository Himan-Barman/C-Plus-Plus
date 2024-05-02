#include <iostream>
#include <list>

int main() {
    // Create a linked list of integers
    std::list<int> myLinkedList;

    // Insert elements into the linked list
    myLinkedList.push_back(10);
    myLinkedList.push_back(20);
    myLinkedList.push_back(30);
    myLinkedList.push_front(5); // Insert at the beginning

    // Print the elements of the linked list
    std::cout << "Elements of the linked list: ";
    for (int elem : myLinkedList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Accessing elements by index is not directly supported in std::list
    // You may need to traverse the list to access elements at specific positions

    // Removing elements from the linked list
    myLinkedList.pop_front(); // Remove the first element
    myLinkedList.pop_back();  // Remove the last element

    // Print the modified linked list
    std::cout << "Modified linked list: ";
    for (int elem : myLinkedList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
