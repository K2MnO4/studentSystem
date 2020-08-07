#include "headFile.h"

void readInfo(const char* fileName, struct Node* listHeadNode)
{
	FILE* fp = fopen(fileName, "r"); //��һ�����ڶ�ȡ���ı��ļ�
	if (fp == NULL) //���֮ǰû�и��ı��ļ�
		fp = fopen(fileName, "w");  //����һ������д����ı��ļ�
	struct Student nowData;
	while (fscanf(fp, "%s\t%s\t%d\t%s\t%s\n", nowData.name, nowData.id, &nowData.age,
		nowData.tel, nowData.addr) != EOF)
	{
		insertByHead(listHeadNode, nowData);
		memset(&nowData, 0, sizeof(nowData)); //��ʼ��һ��ԭ������
	}
	fclose(fp); //�ر��ļ�
}

void saveInfo(const char* fileName, struct Node* listHeadNode)
{
	FILE* fp = fopen(fileName, "w");
	struct Node* pMove = listHeadNode->next;
	while (pMove)
	{
		fprintf(fp, "%s\t%s\t%d\t%s\t%s\n", pMove->data.name, pMove->data.id, pMove->data.age,
			pMove->data.tel, pMove->data.addr);
		pMove = pMove->next;
	}
	fclose(fp);
}