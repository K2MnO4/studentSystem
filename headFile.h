#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student //学生信息结构
{
	char name[10];
	char id[10];
	int age;
	char tel[20];
	char addr[10];
};

struct Node
{
	struct Student data; //数据域
	struct Node* next; //指针域
};

void systemMenu(); //菜单设计
void keyDown(struct Node* list); //用户交互
struct Node* createList(); //创建链表
struct Node* createNode(struct Student data); //创建结点
void insertByHead(struct Node* listHeadNode, struct Student data); //录入信息
void delElem(struct Node* listHeadNode, char* name); //删除信息
struct Node* searchInfo(struct Node* listHeadNode, char* id); //查找信息
void printList(struct Node* listHeadNode); //浏览信息
void printNode(struct Node* curNode); //打印单结点信息
void readInfo(const char* fileName, struct Node* listHeadNode); //读取数据
void saveInfo(const char* fileName, struct Node* listHeadNode); //输出数据

