#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st;

    st.push(5);
    st.push(10);


    cout << endl;


    cout << st.top() << endl;
    cout << st.size() << endl;
    


    cout << endl;


    return 0;
}



// #include <iostream>
// #include <stack>

// int main() {
//     std::stack<int> myStack;

//     // Pushing elements onto the stack
//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);

//     // Getting the size of the stack
//     std::cout << "Size of stack: " << myStack.size() << std::endl;

//     // Accessing the top element of the stack
//     std::cout << "Top element: " << myStack.top() << std::endl;

//     // Popping elements from the stack
//     myStack.pop();

//     std::cout << "After popping, top element: " << myStack.top() << std::endl;

//     // Checking if the stack is empty
//     if (myStack.empty()) {
//         std::cout << "Stack is empty\n";
//     } else {
//         std::cout << "Stack is not empty\n";
//     }

//     return 0;
// }
