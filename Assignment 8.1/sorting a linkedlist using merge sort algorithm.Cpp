#include<bits/stdc++.h>
 using namespace std;

  class node{

    public:
    int data;
    node* next;
    node* prev;
         
         node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
         }

  };

 node *createLinkedList(int n){
 	int a; //this variable will be used to read the input from user
 
 	node *head = NULL; //after creating the linkedlist we will returns it's head
 	node *tail = NULL; //we will be inserting the new node at tail ex: if linked list is 1->2->null
 					   // new node will be inserted behind 2 => tail->next = new Node()
 
 	//we will need to read the n inputs from user and create n nodes;
 	for(int i=0;i<n;i++){
 		cin>>a; //reading input from user
 		node *temp = new node(a); //a new Node will be created and it's pointer will be saved in temp
 
 
 		if(head==NULL){
 			//if linkedlist is empty then first node will be head and tail both
 			head = temp;
 			tail = temp;
 		}
 		else{
 			//if the linkedlist isn't empty then the newNode will be attached to tail and tail will become new Node
 			tail->next = temp; //attaching the newNode to tail
 			tail = temp; //changing the tail to new Node
 		}
 	}
 
 	return head;
 }

  int getlength(node* &head){

    node* temp=head;
    int length=0;

    while(temp!=NULL){
        temp=temp->next;
        length++;
    }

    return length;
 }

  node* position(node* head,int j){

      node* temp=head;
      int count=0;

           while(count!=j){

            temp=temp->next;
            count++;

           }

      return temp;
  }

 

/**
 * mergeTwoSortedLinkedList will take head for two sorted linked list as input and will merge them such that the final linked list is sorted
 * */
node *mergeTwoSortedLinkedList(node *head1, node* head2){
	node *newHead=NULL; //head of the newly created linked list will be return
	node *newTail=NULL; //tail because new node will be attached to tail
 
	while(head1!=NULL && head2!=NULL){
		node *temp;
		if(head1->data < head2->data){
			temp = head1;
			head1 = head1->next;
		}
		else{
			temp=head2;
			head2 = head2->next;
		}
 
		//temp node is to be inserted at tail of new LinkedList
		if(newHead==NULL){
			//if linked is empty then headofAns Linkedlist will be temp
			newHead= temp;
		}
		else{
			newTail->next = temp;
		}
		newTail = temp;
	}
 
	/*now one list will remain and no need to traverse as all the remaining nodes are attached to head1 or head2
		3-> 5-> 8->10->11->15->NULL 
		1-> 2-> 4-> 5-> 6->NULL
		after the loop ends the 
			new LinkedLsit => 1->2->3->4->5->5->6->nULL
		=>	head1 will point to 8->10->11->15->NULL;
			head2 will be NULL
			newTail will be pointing to node with val 6
			newHead will be point to node with val 1
			so all we need to do is newTail->next = remainingHead
	*/
 
	//it is also possible that newHead is NULL
	if(newHead==NULL){
		if(head1!=NULL){
			newHead = head1;
		}
		else{
			newHead = head2;
		}
	}
	else{
		if(head1!=NULL){
			newTail->next = head1;
		}
		else{
			newTail->next = head2;
		}
	}
 
	return newHead;
}


/**
 * getKthNodeOfLinkedList will take head  of linkedList and an positive interger k in input and 
 * it's will return kth node (1 based counting)
 * */
 
Node* getKthNodeOfLinkedList(Node *head, int k){

	return head;
}
  // void sort(node* &head,int start,int end){
    
	// if(start == end){
	// 	return;
	// }

	// int mid = (start+end)/2;
	// sort(head,start,mid);
	// sort(head,mid+1,end);
	// mergesort(head,start, end, mid);
  // }

   
  void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<endl;
  }




 int main (){

  int n,m;
  cout<<"type size for length of 1st and 2nd linklist"<<endl;
  cin>>n>>m;

  cout<<"type data for 1st linklist size of :"<<n<<endl;
  node* head1 =createLinkedList(n);
	cout<<"first linkedList: "; 
	display(head1);
 
  cout<<"type data for 2nd linklist size of :"<<m<<endl;
	node* head2 = createLinkedList(m);
	cout<<"second linkedList: "; 
	display(head2);
 
	node *head= mergeTwoSortedLinkedList(head1, head2);
 
	cout<<"sorted linkedList: "; 
	display(head);

  
  int size= getlength(head);
  cout<<"size of head->"<<size;

   getKthNodeOfLinkedList(head, k);

    return 0;
}
