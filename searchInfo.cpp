#include "headFile.h"

//���Һ�����ͨ��ѧ�Ų�����Ϣ������Ϣ��
struct Node* searchInfo(struct Node* listHeadNode, char* id)
{
	struct Node* pMove = listHeadNode->next; //����pMoveָ�����
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