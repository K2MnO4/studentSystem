/*
1.�˵����
2.��������
3.�������
4.ѡ�����ݴ洢��ʽ

*/

#include "headFile.h"

int main()
{
	struct Node* list = NULL;
	list = createList(); //��������
	readInfo("Student.txt", list); //��ȡ��Ϣ
	while (1)
	{
		systemMenu();
		keyDown(list);
		system("pause");
		system("cls");
	}
	return 0;
}