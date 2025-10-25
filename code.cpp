//Journal writing using C++ Concepts

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class JournalEntry {
private:
    string date;
    string title;
    string content;
public:

};

class Node{
public:
    JournalEntry entry;
    Node* next;

    Node(JournalEntry e){
        entry=e;
        next==nullptr;
    }
};

class Journal{

private:
    Node* head;
    Node* tail;
    int size;
    public:
    Journal(){
        head=nullptr;
        tail=nullptr;
        size=0;
    }
    void addEntry(JournalEntry entry){
        Node* newNode=new Node(entry);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }
    void displayEntries(){
        Node* current=head;
        while(current!=nullptr){
            //current->entry.display();
            current=current->next;
        }
    }
    int getSize(){
        return size;
    }


};

int main(){
Journal User1;
Journal User2;
int choice;
string choice2;


    cout<<"Which Journal User are you?(1/2)";
    cin>>choice;

    if(choice==1){
        int choice3;
    do{
        cout<<"Welcome User 1!"<<endl;
        cout<<"What would you like to do?"<<endl;
        cout<<"1. Add Entry"<<endl;
        cout<<"2. View Entries"<<endl;
        cout<<"3. Delete Entry"<<endl;
        cout<<"4. Search Entries"<<endl;
        cout<<"5. Modify Entry"<<endl;
        cout<<"6. Upload entries to file"<<endl;
        cout<<"7. Download entries from file"<<endl;
        cout<<"8. Delete all entries"<<endl;
        cout<<"9. Change User"<<endl;
        cout<<"10. Exit Journal"<<endl;


        cin>>choice3;
        switch(choice3){
            case 1:
                return;
            break;
            case 2:
                User1.displayEntries(); 
            break;
            case 3:
                return;
            break;
            case 4:
                return;
            break;
            case 5:
                return;
            break;
            case 6:
                return;
            break;
            case 7:
                return;
            break;
            case 8:
                return;
            break;
            case 9:
                cout<<"Switching User..."<<endl;
            break;
            case 10:
                cout<<"Exiting Journal..."<<endl;
                exit(0);
            break;
            default:
                cout<<"Invalid choice. Please select a number from 1 to 9."<<endl;
            break;

        }
    }while(choice3!=9|| choice3!=10);
    }
    else if(choice==2){
        int choice4;
        do{
        cout<<"Welcome User 1!"<<endl;
        cout<<"What would you like to do?"<<endl;
        cout<<"1. Add Entry"<<endl;
        cout<<"2. View Entries"<<endl;
        cout<<"3. Delete Entry"<<endl;
        cout<<"4. Search Entries"<<endl;
        cout<<"5. Modify Entry"<<endl;
        cout<<"6. Upload entries to file"<<endl;
        cout<<"7. Download entries from file"<<endl;
        cout<<"8. Delete all entries"<<endl;
        cout<<"9. Change User"<<endl;
        cout<<"10. Exit Journal"<<endl;


        cin>>choice4;
        switch(choice4){
            case 1:
                return;
            break;
            case 2:
                User1.displayEntries(); 
            break;
            case 3:
                return;
            break;
            case 4:
                return;
            break;
            case 5:
                return;
            break;
            case 6:
                return;
            break;
            case 7:
                return;
            break;
            case 8:
                return;
            break;
            case 9:
                cout<<"Switching User..."<<endl;
            break;
            case 10:
                cout<<"Exiting Journal..."<<endl;
                exit(0);
            break;
            default:
                cout<<"Invalid choice. Please select a number from 1 to 9."<<endl;
            break;

        }
    }while(choice4!=9|| choice4!=10);

    }
    else{
        cout<<"Invalid choice"<<endl;
    }


return 0;
}
