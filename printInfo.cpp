#include "headFile.h"

//��ӡ����(�����Ϣ)
void printList(struct Node* listHeadNode)
{
	struct Node* pMove = listHeadNode->next; //�ƶ�ָ��(�ӵڶ����ڵ㿪ʼ��ӡ)
	printf("����\tѧ��\t\t����\t�绰\t\t��ͥסַ\n");
	while (pMove)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", pMove->data.name, pMove->data.id, pMove->data.age,
			pMove->data.tel, pMove->data.addr);
		pMove = pMove->next;
	}
}

//������Ϣʱ��ӡ�ڵ�
void printNode(struct Node* curNode)
{
	printf("����\tѧ��\t\t����\t�绰\t\t��ͥסַ\n");
	printf("%s\t%s\t%d\t%s\t%s\n", curNode->data.name, curNode->data.id, curNode->data.age,
		curNode->data.tel, curNode->data.addr);
}