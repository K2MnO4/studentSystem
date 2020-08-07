#include "headFile.h"

struct Node* createList()
{
	struct Node* listHeadNode = (struct Node*)malloc(sizeof(struct Node));
	listHeadNode->next = NULL;
	return listHeadNode;
}

//创建新节点
struct Node* createNode(struct Student data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}