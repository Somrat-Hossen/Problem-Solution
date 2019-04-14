#include <bits/stdc++.h>
using namespace std;

class node
{
  public:

    int data;
    node *next;
};

class linked_list
{
    private:
    node *head;

    public:
    linked_list()
    {
        head = NULL;
    }

 void Insert(int item)
 {
        node *new_node = new node();
        if(new_node==NULL)
        {
            cout<<"Creating node is impossible"<<endl;
            exit(0);
        }

        if(head == NULL)
        {
           new_node->data=item;
           new_node->next=NULL;
           head=new_node;
        }

      else
	  {
		node *current_node=head; //make a copy of root node
		while(current_node->next!=NULL) //Find the last node
		{
			current_node=current_node->next; //go to next address
		}

		node *newnode = new node(); //create a new node
		newnode->data=item;
		newnode->next=NULL;

		current_node->next=newnode; //link the last node with new node
	  }
 }

void delete_node(int item)
{
	node *current_node=head;
	node *previous_node=NULL;
	while(current_node->data!=data) //Searching node
	{
		previous_node=current_node; //Save the previous node
		current_node=current_node->next;
	}
	if(current_node==head) //Delete root
	{
		node *temp=head; //save root in temporary variable
		head=head->next; //move root forward
		delete(temp); //free memory
	}
	else //delete non-root node
	{
		previous_node->next=current_node->next; //previous node points the current node's next node
		delete(current_node); //free current node
	}

}


  void Display()
  {
     node *tmp=head;
     cout<<"Current data is:"<<endl;
     while(tmp!=NULL)
     {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
     }
  }
};

int main()
{
    linked_list a;

    a.Insert(1);
    a.Insert(2);
    a.Insert(5);
    a.Display();
   // a.delete_node(2);
    //a.Display();

    return 0;
}

