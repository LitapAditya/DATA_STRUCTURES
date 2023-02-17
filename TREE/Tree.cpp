// BINARY SEARCH TREE
// ALL VALUES IN A TREE ARE UNIQUE

#include <iostream>
using namespace std;

class Node
{
    Node* lChild;
    int data;
    Node* rChild;

    public:

    Node()
    {
        lChild = NULL;
        data = 0;
        rChild = NULL;
    }

    void setLCHild(Node* ptr)
    {
        lChild = ptr;
    }

    void setRCHild(Node* ptr)
    {
        rChild = ptr;
    }

    void setData(int d)
    {
        data = d;
    }

    Node* getLChild()
    {
        return lChild;
    }

    Node* getRChild()
    {
        return rChild;
    }

    int getData()
    {
        return data;
    }
};

class Tree
{
    Node* root;

    public:

    Tree()
    {
        root = NULL;
    }

    void insertion(int data)
    {
        Node* ptr = new Node;
        ptr->setData(data);

        if (root == NULL)
        {
            root = ptr;
        }
        
        else
        {
            Node* temp = root;
            Node* temp1;

            while (temp != NULL)
            {
                temp1 = temp;
                
                if (data < temp->getData())
                {
                    temp = temp->getLChild();
                }

                else
                {
                    temp = temp->getRChild();
                }
            }

            if (data < temp1->getData())
            {
                temp1->setLCHild(ptr);
            }
            
            else
            {
                temp1->setRCHild(ptr);
            }
        }
    }

    void deletion(int data)
    {
        Node* temp = root;
        Node* temp1;
        int flag = 0;

        while (temp != NULL)
        {
            if (data == temp->getData())
            {
                temp = temp->getLChild();
                flag = 1;
                break;
            }

            else
            {
                temp1 = temp;

                if (data < temp->getData())
                {
                    temp = temp->getLChild();
                }
                
                else
                {
                    temp = temp->getRChild();
                }
            }
        }

        if (flag == 1)
        {
            if (temp->getLChild() == NULL && temp->getRChild() == NULL)
            {
                if (temp->getData() < temp1->getData())
                {
                    temp1->setLCHild(NULL);
                }
                
                else
                {
                    temp1->setRCHild(NULL);
                }
            }

            else
            {
                if (temp->getLChild() != NULL && temp->getRChild() == NULL)
                {
                    if ((temp->getLChild())->getData() < temp1->getData())
                    {
                        temp1->setLCHild(temp->getLChild());                        
                    }

                    else
                    {
                        temp1->setRCHild(temp->getLChild());
                    }
                }

                else
                {
                    if (temp->getLChild() != NULL && temp->getRChild() == NULL)
                    {
                        if ((temp->getRChild())->getData() < temp1->getData())
                        {
                            temp1->setLCHild(temp->getRChild());
                        }

                        else
                        {
                            temp1->setRCHild(temp->getRChild());
                        }
                    }
                    
                    else
                    {
                        if (temp->getData() < temp1->getData())
                        {
                            temp1->setLCHild(temp->getLChild());
                        }
                        
                        else
                        {
                            temp1->setRCHild(temp->getLChild());
                        }

                        Node* temp2 = temp->getLChild();

                        while (temp2->getRChild() != NULL)
                        {
                            temp2 = temp2->getRChild();
                        }
                        
                        temp2->setRCHild(temp->getRChild());
                    }
                }
            }   

            delete temp;
        }

        else
        {
            cout << "ELEMENT NOT FOUND" << endl;
        }
    }

    void inOrder()
    {
        inOrder(root);
    }

    void inOrder(Node* ptr)
    {
        if (ptr != NULL)
        {
            inOrder(ptr->getLChild());
            cout << ptr->getData() << " ";
            inOrder(ptr->getRChild());
        }
        
    }

    void preOrder()
    {
        preOrder(root);
    }

    void preOrder(Node* ptr)
    {
        if (ptr != NULL)
        {
            cout << ptr->getData() << " ";
            preOrder(ptr->getLChild());
            preOrder(ptr->getRChild());
        }
        
    }

    void postOrder()
    {
        postOrder(root);
    }

    void postOrder(Node* ptr)
    {
        if (ptr != NULL)
        {
            postOrder(ptr->getLChild());
            postOrder(ptr->getRChild());
            cout << ptr->getData() << " ";
        }
        
    }
};

int main()
{
    Tree tree;
    tree.insertion(50);
    tree.insertion(30);
    tree.insertion(70);
    tree.insertion(35);
    tree.insertion(65);
    tree.insertion(40);
    tree.insertion(60);
    tree.insertion(45);
    tree.insertion(55);
    tree.insertion(25);
    tree.insertion(75);
    tree.insertion(20);
    tree.insertion(80);
    tree.insertion(15);
    tree.insertion(85);

    tree.inOrder();

    return 0;
}