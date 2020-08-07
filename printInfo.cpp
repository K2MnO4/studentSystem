#include "headFile.h"

//打印函数(浏览信息)
void printList(struct Node* listHeadNode)
{
	struct Node* pMove = listHeadNode->next; //移动指针(从第二个节点开始打印)
	printf("姓名\t学号\t\t年龄\t电话\t\t家庭住址\n");
	while (pMove)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", pMove->data.name, pMove->data.id, pMove->data.age,
			pMove->data.tel, pMove->data.addr);
		pMove = pMove->next;
	}
}

//查找信息时打印节点
void printNode(struct Node* curNode)
{
	printf("姓名\t学号\t\t年龄\t电话\t\t家庭住址\n");
	printf("%s\t%s\t%d\t%s\t%s\n", curNode->data.name, curNode->data.id, curNode->data.age,
		curNode->data.tel, curNode->data.addr);
}