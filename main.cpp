#include <iostream>
#include<new>


using namespace std;

class StackUsingLinkedList {

    class Node {
    public:
        int data;
        Node *next;

    };

    Node *top;

    bool isEmpty() {
        return top == NULL;
    }

    void push(int val) {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        Node *temp;

        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow" << endl;
            exit(1);
        } else {

            // Assign top to temp
            temp = top;
            cout << "The popped element is " << top->data << endl;

            // Assign second node to top
            top = top->next;
            // Release memory of top node
            // delete the node

        }
    }

    int peek() {// top method
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }

    void display() {
        Node *temp;

        if (isEmpty()) {
            cout << "\nStack Underflow";
            exit(1);
        } else {
            temp = top;
            while (temp != NULL) {
                cout << temp->data << "-> ";
                temp = temp->next;
            }
        }
    }

    int size() {
        Node *temp = top;
        int count;
        while (temp != NULL) {
            ++count;
            temp = temp->next;
        }
        return count;

   }


   int main(){
        int choice, val;
       cout<<"1) Push in stack"<<endl;
       cout<<"2) Pop from stack"<<endl;
       cout<<"3) Peek the top element"<<endl;
       cout<<"4) Display stack"<<endl;
       cout<<"5) Display the size of the stack"<< endl;
       cout<<"6) Exit"<<endl;

    while(choice!=6){
        cout<<"Enter a choice"<< endl;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter value to be pushed:"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3:{
                peek();
                break;
            }
            case 4: {
                display();
                break;
            }
            case 5:{
                size();
                break;
            }
            case 6: {
                cout<<"Exit"<<endl;
                break;
            }
            default: {
                cout<<"Invalid Choice"<<endl;
            }
        }

        }
    return 0;
    }

};


