#include "headFile.h"

void systemMenu() //菜单设计
{
	//几个菜单几个函数
	printf("---------------学生管理系统---------------\n");
	printf("\t\t0.退出系统\n");
	printf("\t\t1.插入信息\n");
	printf("\t\t2.浏览信息\n");
	printf("\t\t3.删除信息\n");
	printf("\t\t4.修改信息\n");
	printf("\t\t5.查找信息\n");
	printf("-----------------------------------------\n");
	printf("请输入（0 - 5）: ");
}

void keyDown(struct Node* list) //用户交互
{
	int userKey;
	struct Student tempData;

	scanf("%d", &userKey);
	switch (userKey)
	{
	case 0:
		printf("\t\t【退出系统】\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("\t\t【插入信息】\n");
		printf("请输入姓名, 学号, 年龄, 电话, 住址: ");
		scanf("%s%s%d%s%s", tempData.name, tempData.id, &tempData.age,
			tempData.tel, tempData.addr);
		insertByHead(list, tempData); //将信息插入到链表
		saveInfo("Student.txt", list);
		break;
	case 2:
		printf("\t\t【浏览信息】\n");
		printList(list);
		break;
	case 3:
		printf("\t\t【删除信息】\n");
		printf("请输入要删除学生的姓名: ");
		scanf("%s", tempData.name);
		delElem(list, tempData.name);
		saveInfo("Student.txt", list);
		break;
	case 4:
		printf("\t\t【修改信息】\n");
		printf("请输入要修改学生的学号：");
		scanf("%s", tempData.id);
		if (searchInfo(list, tempData.id) == NULL)
			printf("未找到相关信息, 修改信息失败\n");
		else
		{
			struct Node* searchNode = searchInfo(list, tempData.id);
			printf("请输入新的姓名, 学号, 年龄, 电话, 住址: ");
			scanf("%s%s%d%s%s", searchNode->data.name, searchNode->data.id,
				&searchNode->data.age, searchNode->data.tel, searchNode->data.addr);
		}
		saveInfo("Student.txt", list);
		break;
	case 5:
		printf("\t\t【查找信息】\n");
		printf("请输入要查找学生的学号: ");
		scanf("%s", tempData.id);
		if (searchInfo(list, tempData.id) == NULL)
			printf("未找到相关信息, 查找信息失败\n");
		else
			printNode(searchInfo(list, tempData.id));
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
}