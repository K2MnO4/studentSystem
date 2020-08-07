#include "headFile.h"

//插入函数(录入信息)
void insertByHead(struct Node* listHeadNode, struct Student data)
{
	struct Node* insertNode = createNode(data);
	insertNode->next = listHeadNode->next;
	listHeadNode->next = insertNode;
}