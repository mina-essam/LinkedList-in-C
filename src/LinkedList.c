#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "LinkedList.h"

node_t* create_new_node(sint32_t value) {
	node_t* newNode = (node_t*)malloc(sizeof(node_t));
	if (newNode == NULL)
		return NULL;
	newNode->value = value;
	newNode->next = NULL;

	return newNode;
}

void printList(node_t* head) {

	node_t* temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->value);
		temp = temp->next;
	}
	printf("End\n");
}
node_t* insertAtHead(node_t **head, node_t* node_to_insert) {
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

node_t* findNode(node_t* head, int value)
{
	while (head != NULL) {
		if (head->value == value)
			return head;
		head = head->next;
	}
	return NULL;
}

void insertNodeAfter(node_t* node_to_insert, node_t* newNode) {
	newNode->next = node_to_insert->next;
	node_to_insert->next = newNode;
}

_bool deleteNode(node_t** head, int value) {

	if (*head == NULL)
		return false;
	
	node_t* current = *head;
	while (current->next != NULL) {

		if (current->next->value == value)
		{
			node_t* to_remove = current->next;
			current->next = current->next->next;
			free(to_remove);

		}
		current = current->next;
	}

	return true;
}

_bool deleteTail(node_t** head) {

	if (*head == NULL)
		return false;

	node_t* current = *head, *previous= NULL;

	while (current->next != NULL) {

		
		previous = current;
		current = current->next;
	}
	if (previous != NULL && previous->next != NULL )
	{
		previous->next = NULL;
		free(current);
	}
	else
	{
		// If previous is NULL, it means the list has only one node
		free(*head);
		*head = NULL;
	}
	
	return true;
}
_bool deleteHead(node_t** head) {

	if (*head == NULL)
		return false;

	node_t* current = *head;
	(*head) = current->next;

	 free(current);

	return true;
}

_bool remove_node(node_t** head, node_t* node_to_remove) {

	if (*head == node_to_remove) {
		*head = node_to_remove->next;
	}
	else {

		node_t* temp = *head;
		while (temp != NULL && temp->next != node_to_remove)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return false;
		temp->next = node_to_remove->next;
		node_to_remove->next = NULL;
		
	}

	return true;
}

/*My Implementation again*/
node_t* createNewNode(sint32_t value) {
	node_t* newNode = (node_t*)malloc(sizeof(node_t));
	if (newNode == NULL)
		return NULL;

	newNode->value = value;
	newNode->next = NULL;

	return newNode;
}
void	PrintList(node_t* head) {
	node_t* temp = head;
	while (temp != NULL)
	{
		printf("%d -> ", temp->value);
		temp = temp->next;
	}
	printf("End");
}
_bool	DeleteNode(node_t** head, sint32_t value) {
	if (*head == NULL)
		return false;
	node_t* node = *head;		
	while (node->next != NULL)
	{
		if (node->next->value == value)
		{
			node_t* to_remove = node->next;
			node->next = node->next->next;
			free(to_remove);
		}
		node = node->next;
	}
	return true;

}
node_t* InsertAtHead(node_t** head, node_t* node_to_insert) {
	
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}
node_t* InsertAtTail(node_t** head, node_t* node_to_insert) {
	node_t* temp = *head;

		while (temp != NULL && temp->next != NULL)
		{
			temp = temp->next; //it has last node in the list
		}
		if (temp != NULL)
		{
			temp->next = node_to_insert;
			node_to_insert->next = NULL;
		}
	
	return node_to_insert;
}
node_t* FindNode(node_t* head, int value) {
	
	while (head != NULL && head->next != NULL)
	{
		if (head->value == value)
			return head;
		head = head->next;
	}

	return NULL;
}
void	InsertNodeAfter(node_t* node_to_insert, node_t* newNode) {
	newNode->next = node_to_insert->next;
	node_to_insert->next = newNode;

}