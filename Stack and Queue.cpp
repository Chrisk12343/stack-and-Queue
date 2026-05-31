

#include <iostream>
#include <string>
using namespace std;

// Node class used to build the linked list
class Node
{
public:
    string message;   // Stores the text message
    Node* next;       // Pointer to the next node

    // Constructor
    Node(string msg)
    {
        message = msg;
        next = nullptr;
    }
};

// Stack Class (LIFO - Last In First Out)
class Stack
{
private:
    Node* top; // Points to the top node of the stack

public:
    // Constructor
    Stack()
    {
        top = nullptr;
    }

    // Add a message to the top of the stack
    void push(string msg)
    {
        Node* temp = new Node(msg);
        temp->next = top;
        top = temp;
    }

    // Remove and return the top message
    string pop()
    {
        if (top == nullptr)
            return "";

        Node* temp = top;
        string msg = temp->message;

        top = top->next;
        delete temp;

        return msg;
    }

    // Check if stack is empty
    bool isEmpty()
    {
        return top == nullptr;
    }

    // Display all messages in the stack
    void display()
    {
        Node* current = top;

        while (current != nullptr)
        {
            cout << current->message << endl;
            current = current->next;
        }
    }
};

// Queue Class (FIFO - First In First Out)
class Queue
{
private:
    Node* front; // First node in queue
    Node* rear;  // Last node in queue

public:
    // Constructor
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    // Add a message to the rear of the queue
    void enqueue(string msg)
    {
        Node* temp = new Node(msg);

        if (rear == nullptr)
        {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    // Remove and return the front message
    string dequeue()
    {
        if (front == nullptr)
            return "";

        Node* temp = front;
        string msg = temp->message;

        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;

        return msg;
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return front == nullptr;
    }

    // Display all messages in the queue
    void display()
    {
        Node* current = front;

        while (current != nullptr)
        {
            cout << current->message << endl;
            current = current->next;
        }
    }
};

int main()
{
    // Create a stack for Person 1
    Stack person1;

    // Create a queue for Person 2
    Queue person2;

    // Person 1 messages stored in a stack
    person1.push("Bye!");
    person1.push("Thanks.");
    person1.push("Sounds good.");
    person1.push("See you then.");
    person1.push("At 5 PM.");
    person1.push("Sure.");
    person1.push("The mall?");
    person1.push("Want to hang out?");
    person1.push("Doing well.");
    person1.push("Hey!");

    // Person 2 messages stored in a queue
    person2.enqueue("Hi!");
    person2.enqueue("Glad to hear.");
    person2.enqueue("Sure.");
    person2.enqueue("The mall works.");
    person2.enqueue("What time?");
    person2.enqueue("Perfect.");
    person2.enqueue("See you there.");
    person2.enqueue("Great.");
    person2.enqueue("You're welcome.");
    person2.enqueue("Bye!");

    int choice;

    // Menu loop
    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Display Lists\n";
        cout << "2. Display Messages\n";
        cout << "3. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Show all messages stored in both structures
            cout << "\nPerson 1 Stack:\n";
            person1.display();

            cout << "\nPerson 2 Queue:\n";
            person2.display();
            break;

        case 2:
            // Play back the conversation
            cout << "\nConversation:\n\n";

            while (!person1.isEmpty() && !person2.isEmpty())
            {
                cout << "Person 1: "
                    << person1.pop() << endl;

                cout << "Person 2: "
                    << person2.dequeue() << endl;

                cout << endl;
            }
            break;

        case 3:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 3);

    return 0;
}




