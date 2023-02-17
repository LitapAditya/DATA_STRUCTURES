// #include <iostream>
// using namespace std;

// class Node
// {
//     Node* pre;
//     int data;
//     Node* next;

//     public:

//     void setPre(Node* p)    
//     {
//         pre = p;
//     }

//     void setData(int d)
//     {
//         data = d;
//     }

//     void setNext(Node* n)
//     {
//         next = n;
//     }

//     Node* getPre()
//     {
//         return pre;
//     }

//     int getData()
//     {
//         return data;
//     }

//     Node* getNext()
//     {
//         return next;
//     }
// };

// class DoublyCircular
// {
//     Node* tail;

//     public:

//     DoublyCircular()
//     {
//         tail = NULL;
//     }

//     void insertAtBeginning(int d)
//     {
//         Node* ptr = new Node;
//         ptr->setData(d);

//         if (tail == NULL)
//         {
//             ptr->setNext(ptr);
//             ptr->setPre(ptr);
//             tail = ptr;
//         }

//         else
//         {
//             ptr->setNext(tail->getNext());
//             if (tail == (tail->getNext())->getNext())
//             {
//                 tail->setPre(ptr);
//             }
//             tail->setNext(ptr);
//             ptr->setPre(tail);
//         }        
//     }

//     void insertAtEnd(int d)
//     {
//         Node* ptr = new Node;
//         ptr->setData(d);

//         if (tail == NULL)
//         {
//             ptr->setNext(ptr);
//             ptr->setPre(ptr);
//             tail = ptr;
//         }

//         else
//         {
//             ptr->setNext(tail->getNext());
//             tail->setNext(ptr);
//             ptr->setPre(tail);
//             if (tail == (tail->getNext())->getNext())
//             {
//                 tail->setPre(ptr);
//             }
//             tail = ptr;
//         }        
//     }

//     void insertAtPosition(int d, int p)
//     {
//         Node* ptr = new Node();
//         if (p == 1)
//         {
//             insertAtBeginning(d);
//         }

//         else
//         {
//             Node* temp = tail->getNext();
//             int i = 1;

//             while (i < (p - 1) && temp != tail)
//             {   
//                 temp = temp->getNext();
//                 i++;
//             }

//             if (i == p - 1)
//             {
//                 ptr->setData(d);
//                 ptr->setPre(temp);
//                 ptr->setNext(temp->getNext());
//                 temp->setNext(ptr);
//                 (ptr->getNext())->setPre(ptr);    
//             }
            
//             else
//             {
//                 cout << "INVAILD POSITION" << endl;
//             }

//             if (temp == tail)
//             {
//                 tail = ptr;
//             }
//         }
//     }

//     void deleteAtBeginning()
//     {
//         if (tail == NULL)
//         {
//             cout << "";
//         }

//         else
//         {
//             Node* temp = tail->getNext();
//             tail->setNext(temp->getNext());
//             (temp->getNext())->setPre(tail);
//             if (tail == temp)
//             {
//                 tail = NULL;
//                 deleteAtBeginning();
//             }
            
//             delete temp;
//         }
//     }

//     void deleteAtEnd()
//     {
//         if (tail == NULL)
//         {
//             cout << "";
//         }

//         else
//         {
//             Node* temp = tail->getPre();
//             temp->setNext(tail->getNext());
//             (tail->getNext())->setPre(temp);
//             delete tail;

//             if (tail == temp)
//             {
//                 tail = NULL;
//                 deleteAtEnd(); 
//             }

//             else 
//             {
//                 tail = temp;
//             }
//         }
//     }

//     void deleteAtPosition(int p)
//     {
//         if (p == 1)
//         {
//             deleteAtBeginning();
//         }

//         else
//         {
//             Node* temp = tail->getNext();
//             int i = 1;

//             while (i < p)
//             {
//                 temp = temp->getNext();
//                 i++;
//             }
            
//             (temp->getPre())->setNext(temp->getNext());
//             (temp->getNext())->setPre(temp->getPre());
//             delete temp;
//         }
//     }

//     void display()
//     {
//         if (tail == NULL)
//         {
//             cout << "NO NODE" << endl;
//         }

//         else
//         {
//             Node* temp = tail->getNext();
//             do
//             {
//                 cout << temp->getData() << endl;
//                 temp = temp->getNext();
//             } while (temp != tail->getNext());  
//         }
//     }
// };

// int main()
// {
//     DoublyCircular doublyCircular;
//     // doublyCircular.insertAtBeginning(50);
//     // doublyCircular.insertAtBeginning(40);
//     // doublyCircular.insertAtBeginning(30);
//     // doublyCircular.insertAtBeginning(20);
//     // doublyCircular.insertAtBeginning(10);
//     // doublyCircular.display();
//     // cout<< endl;
//     // doublyCircular.insertAtEnd(60);
//     // doublyCircular.insertAtEnd(70);
//     // doublyCircular.deleteAtBeginning();
//     // doublyCircular.deleteAtBeginning();
//     // doublyCircular.deleteAtEnd();
//     // doublyCircular.deleteAtEnd();
//     // doublyCircular.insertAtPosition(40,1);
//     // doublyCircular.insertAtPosition(50,2);
//     // doublyCircular.insertAtPosition(70,3);
//     doublyCircular.deleteAtPosition(2);
//     doublyCircular.display();

//     return 0;
// }