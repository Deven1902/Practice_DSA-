#include <iostream>
using namespace std;

class node
{
   int data;
   node*next,*prev;
   public:
      node()
      {
          data=0;
          next=NULL;
          prev=NULL;
      }
      node(int d)
      {
          data=d;
          next=NULL;
          prev=NULL;
      }
      void set_data(int d)
      {
          data=d;
      }
      int get_data()
      {
          return data;
      }
      void set_next(node *n)
      {
          next=n;
      }
      node *get_next()
      {
          return next;
      }
      void set_prev(node *n)
      {
          prev=n;
      }
      node *get_prev()
      {
          return prev;
      }

};

class LinkedList
{
   node *head;
   public:
     LinkedList()
     {
         head=NULL;
     }
     ~LinkedList()
     {
         node *deletable=head;
         node *temp=head;
         while(temp!=NULL)
         {
             deletable=temp;
             temp=temp->get_next();
             delete deletable;
         }
     }

     void insert_first(int d)
     {
         node *new_node = new node(d);
         if(head==NULL)
         {
             head=new_node;
             return;
         }
         head->set_prev(new_node);
         new_node->set_next(head);
         head=new_node;
         return;
     }

     void display()
     {
         node *temp=head;
         cout<<"\n";
         while(temp !=NULL)
         {
             cout<<temp->get_data()<<" ";
             temp=temp->get_next();
         }
     }

     void insert_last(int d)
     {
         node *new_node= new node(d);
         node *temp=head;
         if(head==NULL)
         {
             head=new_node;
             return;
         }
         while(temp->get_next()!=NULL)
         {
             temp=temp->get_next();
         }
         new_node->set_prev(temp);
         temp->set_next(new_node);
         return;
     }

    void insert_by_pos(int d, int pos)
     {
         node *new_node= new node(d);
         node *temp;
         if(head==NULL)
         {
             head=new_node;
             return;
         }
         if(pos==1)
         {
             new_node->set_next(head);
             head->set_prev(new_node);
             head=new_node;
             return;
         }
         temp=head;
         for(int i=0;(i<pos-1)&&(temp->get_next()!=NULL);i++)
         {
            temp=temp->get_next();
         }
         new_node->set_prev(temp);
         new_node->set_next(temp->get_next());
         temp->set_next(new_node);
         temp->get_next()->set_prev(new_node);
         return;
     }

     void delete_first()
     {
         if(head==NULL)
         {
             cout<<"List is empty..."<<endl;
             return;
         }
         node *deletable=head;
         head=head->get_next();
         delete deletable;
     }

     void delete_last()
     {
         if(head==NULL)
         {
             cout<<"List is empty..."<<endl;
             return;
         }
         node *temp= head ,*deletable;
         while(temp->get_next()->get_next()!=NULL)
         {
             temp=temp->get_next();
         }
         deletable=temp->get_next();
         temp->set_next(NULL);
         delete deletable;
     }
     
     void delete_by_pos(int pos)
     {
         node *temp=head;
         node *deletable;
         for(int i=1;i<pos-1;i++)
         {
             temp=temp->get_next();
         }
         deletable=temp->get_next();
         temp->set_next(temp->get_next()->get_next());
         delete deletable;
     }

     void insert_before(int d,int value)
     {
        node *temp=head;
        node *new_node= new node(d);
        while((temp->get_next()->get_data()!=value)&&(temp!=NULL))
        {
            temp=temp->get_next();
        }
        if(temp->get_next()->get_data()==value)
        {
            new_node->set_next(temp->get_next());
            temp->set_next(new_node);
        }
        if(temp==NULL)
        {
            cout<<"\nElement not found";
        }
     }

     void insert_after(int d, int value)
     {
         node *temp=head;
         node *new_node= new node(d);
         while((temp->get_data()!=value)&&(temp!=NULL))
         {
             temp=temp->get_next();
         }
         if(temp->get_data()==value)
         {
            new_node->set_next(temp->get_next());
            temp->set_next(new_node);
         }
         if(temp==NULL)
         {
             cout<<"\nElement not found";
         }
     }
};