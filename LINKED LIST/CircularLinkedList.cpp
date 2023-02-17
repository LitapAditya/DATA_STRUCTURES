#include <iostream>
using namespace std;

class Node
{
    int data;
    Node* next;

    public:

    int getData()
    {
        return data;
    }

    void setData(int data)
    {
        this->data = data;
    }

    Node* getNext()
    {
        return next;
    }

    void setNext(Node*next)
    {
        this->next = next;
    }
};

class LinkedList
{
    Node* tail;
    int count;

    public:

    void insertAtBeginning(int data)
    {
        Node* node = new Node();
        if (tail == NULL)
        {
            node->setData(data);
            node->setNext(node);
            tail = node;
        }

        else
        {
            node->setData(data);
            node->setNext(tail->getNext());
            tail->setNext(node);
        }
        count++;
    }

    void insertAtEnd(int data)
    {
        Node* node = new Node();
        if (tail == NULL)
        {
            insertAtBeginning(data);
        }

        else
        {
            node->setData(data);
            node->setNext(tail->getNext());
            tail->setNext(node);
            tail = node;

            count++;
        }
    }

    void deleteAtBeginning()
    {
        if (tail == NULL)
            cout << "NO LIST PRESENT" << endl;

        else if (tail->getNext() == tail)
        {
            delete tail;
            count--;
        }

        else
        {
            tail->setNext((tail->getNext())->getNext());
            count--;
        }
    }

    void deleteAtEnd()
    {
        if (tail == NULL || tail->getNext() == tail)
            deleteAtBeginning();

        else
        {
            Node* nodeReference = tail;
            while ((nodeReference->getNext()) != tail)
                nodeReference = nodeReference->getNext();

            nodeReference->setNext(tail->getNext());
            delete tail;
            tail = nodeReference;

            count--;
        }
    }

    void insertInBetween(int data, int position)
    {
        if (position > count + 1)
        {
            cout << "INVALID POSITION" << endl;
        }

        else
        {
            if (position == 1)
                insertAtBeginning(data);

            else
            {
                Node* newNode = new Node();
                newNode->setData(data);
                Node* nodeReference = tail;
                int i = position - 1;

                while (i != 0)
                {
                    nodeReference = nodeReference->getNext();
                    if (nodeReference == tail)
                    {
                        break;
                    }
                    i--;
                }

                newNode->setNext(nodeReference->getNext());
                nodeReference->setNext(newNode);

                if (nodeReference == tail)
                {
                    tail = newNode;
                }

                count++;
            }
        }
    }

    void deleteFromBetween(int position)
    {
        if (position > count)
            cout << "INVALID POSITION" << endl;

        else
        {
            if (tail == NULL || position == 1)
                deleteAtBeginning();

            else
            {
                Node* nodeReference = tail;
                Node* toBeDeleted = NULL;
                int i = position - 1;

                while (i != 0)
                {
                    nodeReference = nodeReference->getNext();
                    if (nodeReference == tail)
                    {
                        break;
                    }
                    i--;
                }

                toBeDeleted = nodeReference->getNext();

                if (toBeDeleted == tail)
                {
                    tail = nodeReference;
                }

                nodeReference->setNext(toBeDeleted->getNext());
                delete toBeDeleted;

                count--;
            }
        }
    }

    void traverseList()
    {
        Node* displayNode = tail;

        if (tail == NULL)
        {
            cout << "NO STRING PRESENT" << endl;
        }

        else
            do
            {
                displayNode = displayNode->getNext();
                cout << displayNode->getData() << endl;
            } while (displayNode != tail);
    }
};

int main()
{
    LinkedList* linkedList;
    linkedList->insertAtBeginning(50);
    linkedList->insertAtBeginning(40);
    linkedList->insertAtBeginning(30);
    linkedList->insertAtBeginning(20);
    linkedList->insertAtBeginning(10);
    linkedList->insertAtEnd(60);
    linkedList->insertAtEnd(70);
    linkedList->insertAtEnd(80);
    linkedList->insertAtEnd(90);
    linkedList->insertAtEnd(100);
    linkedList->deleteAtBeginning();
    linkedList->deleteAtBeginning();
    linkedList->deleteAtBeginning();
    linkedList->deleteAtBeginning();
    linkedList->deleteAtBeginning();
    linkedList->deleteAtEnd();
    linkedList->deleteAtEnd();
    linkedList->deleteAtEnd();
    linkedList->deleteAtEnd();
    linkedList->deleteAtEnd();
    linkedList->insertInBetween(10, 1);
    linkedList->insertInBetween(20, 2);
    linkedList->insertInBetween(30, 3);
    linkedList->insertInBetween(40, 4);
    linkedList->insertInBetween(50, 6);
    linkedList->deleteFromBetween(1);
    linkedList->deleteFromBetween(2);
    linkedList->deleteFromBetween(3);
    linkedList->deleteFromBetween(2);
    linkedList->deleteFromBetween(1);
    linkedList->traverseList();
}