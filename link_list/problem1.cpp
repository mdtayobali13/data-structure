#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
      int val;
      Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *& head , int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    temp->next = newNode;
    
}

int count_Link_List(Node * &head)
{
    int cout = 0;
    Node* temp = head;
    while (temp!=NULL)
    {
        cout++;
        temp = temp->next;
    }
    return cout;
}

int main()
{
    Node * head = NULL;

    int val;
    
    while (true)
    {
        cin>>val;
        if(val ==-1) break;
        insert_at_tail(head , val);
    }
    cout<<count_Link_List(head)<<endl;
    

    return 0;
}