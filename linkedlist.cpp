#include <iostream>
using namespace std;

class Node
{

public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insertFront(int value)
    {
        Node *newNode = new Node(value);

        newNode->next = head;

        head = newNode;
    }

    void insertEnd(int value)
    {
        Node *newNode = new Node(value);

        if (this->head == NULL)
        {
            head = newNode;
            return;
        }

        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }

        current->next = newNode;
    }

    int getHeadValue()
    {
        if (head == NULL)
            return -1;
        else
            return head->value;
    }

    int getLastValue()
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            return current->value;
        }
    }
};

int main()
{
    LinkedList *linkedList = new LinkedList();
    linkedList->insertFront(1);
    cout << linkedList->getHeadValue() << endl;
    linkedList->insertFront(2);
    cout << linkedList->getHeadValue() << endl;
    linkedList->insertFront(3);
    cout << linkedList->getHeadValue() << endl;

    linkedList->insertEnd(1);
    cout << linkedList->getLastValue() << endl;
    linkedList->insertEnd(2);
    cout << linkedList->getLastValue() << endl;
    linkedList->insertEnd(3);
    cout << linkedList->getLastValue() << endl;
}