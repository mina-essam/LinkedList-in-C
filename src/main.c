#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


#define SUCCESS_EXIT 0

#define FAILURE_EXIT 1
#define TOTAL_NUMBERS_OF_NODES 100
sint32_t main() {
	node_t *listPtr;
	node_t* head = NULL;
	for (uint32_t i = 0; i < TOTAL_NUMBERS_OF_NODES; i++)
	{
		listPtr = create_new_node(i);
		
		if (i == 0)
		InsertAtHead(&head, listPtr);
		
		else 

			InsertAtTail(&head, listPtr);
	}
	//InsertAtTail(&head, createNewNode(1025));
	//listPtr = create_new_node(10);
	//head = listPtr;
	//listPtr = create_new_node(12);
	//listPtr->next = head;
	//head = listPtr;
	//listPtr = create_new_node(777);
	//listPtr->next = head;
//	head = listPtr;
	
	listPtr = FindNode(head, 0);
	printf("found node with value %d\n", listPtr->value);
	//insertNodeAfter(listPtr, create_new_node(777));
	InsertNodeAfter(listPtr, createNewNode(777));
	//deleteNode(&head,3);
	//deleteNode(&head, 5);
	//deleteTail(&head);
	//deleteHead(&head);
	remove_node(&head, listPtr);
	//DeleteNode(&head, listPtr);
	PrintList(head); 	

	free(head);
	free(listPtr);
	return SUCCESS_EXIT;
}