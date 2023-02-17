#include <iostream>
using namespace std;

class Node
{
    Node* pre;
    int data;
    Node* next;

    public:

    void setPre(Node* p)    
    {
        pre = p;
    }

    void setData(int d)
    {
        data = d;
    }

    void setNext(Node* n)
    {
        next = n;
    }

    Node* getPre()
    {
        return pre;
    }

    int getData()
    {
        return data;
    }

    Node* getNext()
    {
        return next;
    }
};

class LinkedList
{
    Node* head;

    public:

    LinkedList()
    {
        head = NULL;
    }

    void insertAtBeginning(int d)
    {
        Node* ptr = new Node();
        ptr->setData(d);
        ptr->setPre(NULL);
        ptr->setNext(head);
        if (head != NULL)
        {
            head->setPre(ptr);
        }
        
        head = ptr;
    }

    void insertAtEnd(int d)
    {
        Node* ptr = new Node();
        ptr->setData(d);
        ptr->setNext(NULL);
        
        if (head == NULL)
        {
            ptr->setPre(NULL);
            head = ptr;
        }

        else
        {  
            Node* temp = head;

            while(temp->getNext() != NULL)
            {
                temp = temp->getNext();
            }
        }
    }

    void insertAtPosition(int d, int p)
    {
        if (p == 1)
        {
            insertAtBeginning(d);
        }
        else
        {
            Node* temp = head;
            int  i = 1;
            while((i< p - 1) && (temp->getNext() != NULL))
            {
                temp=temp->getNext();
                i++;
            }
            if(p - i == 1)
            {
                Node* ptr=new Node;
                ptr->setData(d);
                ptr->setNext(temp->getNext());

                temp->setNext(ptr);
            }
            else
            {
                cout<<"INVALID CHOICE"<<endl;
            }
        }
    }

    void deleteAtPosition(int p)
    {
        if (p == 1)
        {
            deleteAtBeginning();
        }

        else
        {
            int i = 1;
            Node* temp = head;
            Node* ptr;
            while(i < p - 1)
            {
                ptr = temp;
                temp = temp->getNext();
                i++;
            }

            if (temp != NULL)
            {
                Node* temp1 = temp->getNext();
                if (temp1 != NULL)
                {
                    temp1 = temp->getNext();
                }
                
                temp->setNext(temp1->getNext());
                delete temp1;
            }
        }
    }

    void deleteAtBeginning()
    {
        if (head==NULL)
        {
            cout<<"no node to delete"<<endl;
        }

        else
        {
            Node* temp = head;
            head = temp->getNext();
            delete temp;
            cout << "delete by biginning" << endl;
        }
    }

    void deleteAtEnd()
    {
        if (head == NULL)
        {
            cout << "NO NODE TO DELETE" << endl;
        }

        else
        {
            Node* temp=head;
            Node* ptr;
            while (temp->getNext() != NULL)
            {
                ptr = temp;
                temp = temp->getNext();
            }
            ptr->setNext(NULL);
        }
    }

    void displayList()
    {
        if (head == NULL)
        {
            cout << "NO NODE TO DISPLAY" << endl;
        }
        
        else
        {
            Node* temp = head;

            while(temp != NULL)
            {
                cout << temp->getData() << " ";
                temp = temp->getNext();
            }
        }
    }
};

int main()
{
    LinkedList linkedList;
    linkedList.insertAtPosition(10,1);
    linkedList.insertAtPosition(20,2);
    // linkedList.insertAtPosition(30,3);
    // linkedList.insertAtPosition(40,4);
    // linkedList.insertAtPosition(50,5);
    linkedList.displayList();
}