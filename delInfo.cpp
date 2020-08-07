#include "headFile.h"

//删除函数(通过名字删除信息)
void delElem(struct Node* listHeadNode, char* name)
{
	struct Node* posFrontNode = listHeadNode;
	struct Node* tempDelNode = listHeadNode->next;
	if (tempDelNode == NULL)
	{
		printf("无相关内容, 无法删除\n");
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
				printf("无相关内容, 无法删除\n");
				return;
			}
		}
		posFrontNode->next = tempDelNode->next;
		free(tempDelNode);
	}
}