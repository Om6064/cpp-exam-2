#include<iostream>

using namespace std;
class Node{
    public :
        int data;
        Node *next; 
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList{
    public :
    Node *head;
    int count;

    LinkedList(){
        head = nullptr;
        count = 0;
    }
    void addAtStart(int data){
        Node *newNode = new Node(data);
        if (count == 0)
        {
           this->head = newNode;
        }else{
            newNode->next = head;
            this->head = newNode;
        }
        cout << "Add Element SuccesFully.."<<endl;
        this->count++;
        
    }
    void viewAll(){
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data<<" ";
            temp = temp->next;
        }
        
    }
    void search(int data){
         Node *temp = head;

         if (count == 0)
         {
            cout << "LinkedLIst is empty : "<<endl;
            return;
         }
         
        while (temp != nullptr)
        {
            if (temp->data == data)
            {
               cout << "True :: ";
            }
            
            temp = temp->next;
        }
    }
    void deleteAtAny(int pos){
        Node *current = head;
        Node *prev = head;
        if (count == 0)
        {
            cout << "LinkedList is empty : "<<endl;
            return;
        }
        if (pos == 0)
        {
           Node *temp = head;
          this->head = this->head->next;
           delete temp;
           temp = nullptr;

           cout << "deleted sucees : "<<endl;
           return;
        }
        
        

        for (int i = 0; i < pos; i++)
        {
            current=current->next;
        }
        for (int i = 0; i < (pos-1); i++)
        {
            prev = prev->next;
        }
        prev->next = current->next;
        delete current;
        current = nullptr;

        prev = nullptr;
        delete prev;
        cout << "deleted sucees : "<<endl;


        
        
    }
    void updateByPos(int pos,int data){
        Node *temp = head;
       for (int i = 0; i < pos; i++)
       {
        temp = temp->next;
       }
       
        temp->data = data;
       cout << "Update SucceesFully : "<<endl;
        
    }
    
};
int main(){
    LinkedList l1;
    int choice;

    do
    {
        cout << "\nEnter 0 For view All : "<<endl;
       cout << "Enter 1 For Add At Start : " << endl;
       cout << "Enter 2 For Search : " << endl;
       cout << "Enter 3 For Delete At Any : " << endl;
       cout << "Enter 4 For Update by Pos : " << endl;
       cout << "Enter 5 Exit : " << endl;
       cout << "Enter Your Choice : " << endl;
       cin >> choice;

       switch (choice)
       {
        case 0 :{
           l1.viewAll(); 
           break;
        }
       case 1:{
        int data;

        cout<<"Enter Data : ";
        cin >> data;

        l1.addAtStart(data);
         break;
       }
       case 2:{
        int data;
         cout<<"Enter Data : ";
        cin >> data;
        l1.search(data);

         break;
       }
       case 3:{
        int pos;
         cout<<"Enter pos : ";
        cin >> pos;
       

        l1.deleteAtAny(pos);

         break;
       }
       case 4:{
         int pos,data;
         cout<<"Enter pos : ";
        cin >> pos;
         cout<<"Enter Data : ";
        cin >> data;

        l1.updateByPos(pos,data);
         break;
       }
       case 5:{
        cout << "Thank You :: Visit Again";
         break;
       }
        
       
       
       default:
        cout << "Invalid Input : ";
        break;
       }
    } while (choice != 5);
    
    return 0;
}