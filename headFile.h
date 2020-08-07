#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student //ѧ����Ϣ�ṹ
{
	char name[10];
	char id[10];
	int age;
	char tel[20];
	char addr[10];
};

struct Node
{
	struct Student data; //������
	struct Node* next; //ָ����
};

void systemMenu(); //�˵����
void keyDown(struct Node* list); //�û�����
struct Node* createList(); //��������
struct Node* createNode(struct Student data); //�������
void insertByHead(struct Node* listHeadNode, struct Student data); //¼����Ϣ
void delElem(struct Node* listHeadNode, char* name); //ɾ����Ϣ
struct Node* searchInfo(struct Node* listHeadNode, char* id); //������Ϣ
void printList(struct Node* listHeadNode); //�����Ϣ
void printNode(struct Node* curNode); //��ӡ�������Ϣ
void readInfo(const char* fileName, struct Node* listHeadNode); //��ȡ����
void saveInfo(const char* fileName, struct Node* listHeadNode); //�������

