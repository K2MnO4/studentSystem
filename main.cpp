/*
1.菜单设计
2.按键交互
3.设计数据
4.选择数据存储方式

*/

#include "headFile.h"

int main()
{
	struct Node* list = NULL;
	list = createList(); //创建链表
	readInfo("Student.txt", list); //读取信息
	while (1)
	{
		systemMenu();
		keyDown(list);
		system("pause");
		system("cls");
	}
	return 0;
}