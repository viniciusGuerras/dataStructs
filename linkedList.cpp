#include <iostream>

class Node{
public:
    int val;
    Node* next;
    
    Node(int val): val(val), next(nullptr){}
};

class LinkedList{

private:
    Node* head;

public: 
    LinkedList() : head(nullptr){}

    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void printList(){
        Node* temp = head;
        while(temp != nullptr){
            std::cout << temp->val << "\n";
            temp = temp->next;
        }
    }
    Node* top(){
        return this->head;
    }
};
