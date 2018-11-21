#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct Node *next;
} node_t;

int main(void)
{
	int node_num = 0;
	node_t *head = NULL;
	
	head = malloc(sizeof(node_t));
	head->data = 1;
	head->next = NULL;
	
	node_t *current = head;

	printf("FORWARD LIST\n");

	for(int i = head->data+1; i < head->data+10; i++)
	{
		current->next = malloc(sizeof(node_t));
		current = current->next;
		current->data = i;
	}
	
	current = head;
	while(current != NULL)
	{
		printf("Data @ node%d: %d\n", node_num, current->data);
		current = current->next;
		node_num++;
	}	

	printf("REVERSE LIST\n");

	node_t *prev = NULL;
	node_t *next_node = NULL;

	current = head;
	while(current != NULL){
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}
	head = prev;

	current = head;
	node_num = 0;
	while(current != NULL)
	{
		printf("Data @ node%d: %d\n", node_num, current->data);
		current = current->next;
		node_num++;
	}
	return 0;
}
