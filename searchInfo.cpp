#include "headFile.h"

//查找函数（通过学号查找信息查找信息）
struct Node* searchInfo(struct Node* listHeadNode, char* id)
{
	struct Node* pMove = listHeadNode->next; //利用pMove指针查找
	if (pMove == NULL)
		return pMove;
	else
	{
		while (strcmp(pMove->data.id, id))
		{
			pMove = pMove->next;
			if (pMove == NULL)
				break;
		}
		return pMove;
	}
}