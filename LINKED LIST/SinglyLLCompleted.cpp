#include<iostream>
#include<string.h>
using namespace std;
class node
{
    int data;
    node *next;
    public:
    node()
    {
        data=0;
        next=NULL;
    }
    void set_data(int value)
    {
        data=value;
    }
    void set_next(node *ptr)
    {
        next=ptr;
    }
    int get_data()
    {
        return data;
    }
    node*get_next()
    {
        return next;
    }
};
class Link_List
{
    node* head;
    public:
     Link_List()
     {
        head=NULL;
     }
     void insert_by_beginning(int value)
     {
        node*ptr =new node();
        ptr-> set_data(value);
        ptr-> set_next(head);
        head=ptr;
        cout<<"element insert at beginning :"<<value<<endl;

     }
     void insert_by_end(int value)
     {
        node*ptr=new node;
        ptr->set_data(value);
        ptr->set_next(NULL);
        if(head==NULL)
        {
            head=ptr;
        }
        else
        {
            node*ptr1=head;
            while(ptr1->get_next()!=NULL)
            {
                ptr1=ptr1->get_next();
            }
            ptr1->set_next(ptr);
            cout<<"Element inserted at the end : "<<value<<endl;
			
        }

     }
     void delete_by_biginning()
     {
        if(head==NULL)
        {
            cout<<"no node to delete"<<endl;
        }
        else
        {
            node*temp=head;
            head=temp->get_next();
            delete temp;
            cout<<"delete by biginning"<<endl;
        }
     }
     void delete_by_end()
     {
        if(head==NULL)
        {
            cout<<"no node to delete"<<endl;
        }
        else
        {
            node*temp=head;
            node*ptr;
            while(temp->get_next()!=NULL)
            {
                ptr=temp;
                temp=temp->get_next();
            }
            ptr->set_next(NULL);
            cout<<"delete by end "<<endl;
        }
     }
     void insert_between(int value,int pos)
     {
        if(pos==1)
        {
            insert_by_beginning(value);
        }
        else
        {
            node*temp=head;
          int  i=1;
            while((i<pos-1)&&(temp->get_next()!=NULL))
            {
                temp=temp->get_next();
                i++;
            }
            if(pos - i == 1)
            {
                node*ptr=new node;
                ptr->set_data(value);
                ptr->set_next(temp->get_next());
                temp->set_next(ptr);
                cout<<"insert between="<<value<<endl;
            }
            else
            {
                cout<<"invalide choice"<<endl;
            }
        }
     }
     void traverse()
     {
        node*a=head;
        if(head==NULL)
        {
            cout<<"linklist is empty"<<endl;
        }
        else
        {
            while(a!=NULL)
            {
                cout<<a->get_data()<<" ";
                a=a->get_next();
            }
        }
     }

};
int main()
{
     Link_List obj;
     obj.insert_by_beginning(10);
     obj.insert_by_beginning(20);
     obj.insert_by_beginning(30);


     obj.insert_by_end(80);
     obj.insert_by_end(89);

    obj.insert_between(100,1);
    obj.insert_between(200,1);
    obj.delete_by_biginning();
    obj.insert_by_beginning(10);
     obj.insert_by_beginning(20);
     obj.delete_by_end();


     obj.traverse();
}