#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node {

	sint32_t value;
	struct node* next;

};

typedef struct node node_t;

node_t* create_new_node(sint32_t);
void printList(node_t*);
void insertNodeAfter(node_t*, node_t*);
node_t* insertAtHead(node_t**, node_t*);
node_t* findNode(node_t*, int);
_bool deleteNode(node_t** , int);
_bool deleteTail(node_t** );
_bool deleteHead(node_t** );
_bool remove_node(node_t**, node_t*);


/*Rewriting functions again*/
node_t* createNewNode(sint32_t);
void	PrintList(node_t*);
void	InsertNodeAfter(node_t*, node_t*);
_bool	DeleteNode(node_t**, sint32_t);
node_t* InsertAtHead(node_t**, node_t*);
node_t* InsertAtTail(node_t**, node_t*);
node_t* FindNode(node_t*, int);
#endif