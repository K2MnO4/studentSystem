#include "headFile.h"

//���뺯��(¼����Ϣ)
void insertByHead(struct Node* listHeadNode, struct Student data)
{
	struct Node* insertNode = createNode(data);
	insertNode->next = listHeadNode->next;
	listHeadNode->next = insertNode;
}