#include "headFile.h"

void readInfo(const char* fileName, struct Node* listHeadNode)
{
	FILE* fp = fopen(fileName, "r"); //打开一个用于读取的文本文件
	if (fp == NULL) //如果之前没有该文本文件
		fp = fopen(fileName, "w");  //创建一个用于写入的文本文件
	struct Student nowData;
	while (fscanf(fp, "%s\t%s\t%d\t%s\t%s\n", nowData.name, nowData.id, &nowData.age,
		nowData.tel, nowData.addr) != EOF)
	{
		insertByHead(listHeadNode, nowData);
		memset(&nowData, 0, sizeof(nowData)); //初始化一下原有数据
	}
	fclose(fp); //关闭文件
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