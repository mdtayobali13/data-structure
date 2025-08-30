#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node * &head , int val) {
    Node * newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_position(Node *&head ,int pos , int val) {
    Node* newNode = new Node(val);

    Node * temp = head;
    for (int i = 1; i < pos-1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


void insert_head(Node *&head , int val)
{
   Node* newNode = new Node(val);

   newNode->next = head;
   head = newNode;

}

void delete_any_pos(Node * head , int pos)
{
    Node * temp = head;

    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    
}

void deleteHead(Node * &head)
{
    Node *deleteHead = head;
    
    head = head->next;
    delete deleteHead;
}

void print_Link_list(Node *head) {
    Node * temp = head;
    while (temp!=NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;

    while (true) {
       cout<<"Option 1 : Insert Tail"<<endl;
       cout<<"Option 2 : Insert at Position"<<endl;
       cout<<"Option 3 : Print Linked List"<<endl;
       cout<<"Option 4 : insert at head"<<endl;
       cout<<"Option 5 : delete any position"<<endl;
       cout<<"Option 6 : delete head"<<endl;
       cout<<"Option 7 : termineted"<<endl;
       
       int op;
       cin>>op;

      if(op == 1) {
        int val ;
        cin>>val;
        insert_tail(head , val);
      }
      else if(op == 2) {
         int val, pos;
         cin>>pos>>val;
         if(pos == 0){
          insert_head(head , val);
         } else{
          insert_position(head,pos,val);
         }
      }
      else if(op == 3) {
        print_Link_list(head);
      }
      else if(op == 4) {
        int val ;
        cin>>val;
        insert_head(head , val);

      }
      else if(op == 5)
      {
        int pos ;
        cin>>pos;
        if(pos == 0){
            deleteHead(head);
        }else{
          delete_any_pos(head , pos);
        }

      }else if(op == 6){
        deleteHead(head);
      }
      else if(op == 7)
      {
        break;
      }
    } 
    return 0;
}
