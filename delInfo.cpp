#include "headFile.h"

//ɾ������(ͨ������ɾ����Ϣ)
void delElem(struct Node* listHeadNode, char* name)
{
	struct Node* posFrontNode = listHeadNode;
	struct Node* tempDelNode = listHeadNode->next;
	if (tempDelNode == NULL)
	{
		printf("���������, �޷�ɾ��\n");
		return;
	}
	else
	{
		while (strcmp(tempDelNode->data.name, name))
		{
			posFrontNode = tempDelNode;
			tempDelNode = posFrontNode->next;
			if (tempDelNode == NULL)
			{
				printf("���������, �޷�ɾ��\n");
				return;
			}
		}
		posFrontNode->next = tempDelNode->next;
		free(tempDelNode);
	}
}