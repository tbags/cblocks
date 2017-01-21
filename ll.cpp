#include<iostream>

#include<cstdlib>
using namespace std;

struct node{
    int data;
    node* next;
    };  
//node* A;

class LL
{
    node *link;
    public:
    LL();
        void insert(int);
        void reverse();
        void out_ll();
        
};

LL::LL(){
    link = NULL;
}

void LL::insert(int a){
    struct node *temp;
    temp = new node;
    temp->data = a;
    temp->next = link;
    link = temp;
}

void LL::reverse(){
    struct node *prev;
    prev = new node;
    prev = NULL;
    //struct node *current = NULL;
    struct node *current = new node;
    current = link;
    struct node *temp;
    temp = new node;
    temp = NULL;
    //temp->next=NULL;
    while(current != NULL){
            temp = current->next;
	    current->next = prev;
            prev = current;
	    current = temp;
            //current = current->next;
            
            }
    
    link = prev;
}

void LL::out_ll(){
    struct node *a = link;
    int count = 0;
    while(a != NULL){
       cout << a->data << " -> " << count++ << endl;
       a = a->next;
    }
}

int main(){
LL my_ll;
int a = 0;
int casex =0;
int data;
while(a==0){
    cout << "press 1 for insert and 2 for reverse and 3 to display" << endl;
    cin >> casex;
    switch(casex){
       case 1: cout << "enter dyata" <<endl;
       		cin >> data;
       	       my_ll.insert(data);break;
 	case 2: my_ll.reverse();break;
	case 3: my_ll.out_ll();break;
	default: cout << "done"<< endl;a=1; break;
	}
}
   return 0; 
}

