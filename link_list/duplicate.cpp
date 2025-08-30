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


void insert_tail(Node* &head , int val)
{
    Node * newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node * temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void duplicatElement(Node * head)
{
    Node * temp = head;

    bool isTrue = false;

    bool freq[101] = {false};

    while (temp!=NULL)
    {
       if(freq[temp->val]){
         isTrue = true;
         break;
       }
       freq[temp->val] = true;
       temp = temp->next;
    }

    if(isTrue)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}


int main()
{

    Node * head  = NULL;

    int val;

    while (1)
    {
       cin>>val;

       if(val == -1) break;
       insert_tail(head, val);
    }
    duplicatElement(head);
    
    return 0;
}