#include "headFile.h"

void systemMenu() //�˵����
{
	//�����˵���������
	printf("---------------ѧ������ϵͳ---------------\n");
	printf("\t\t0.�˳�ϵͳ\n");
	printf("\t\t1.������Ϣ\n");
	printf("\t\t2.�����Ϣ\n");
	printf("\t\t3.ɾ����Ϣ\n");
	printf("\t\t4.�޸���Ϣ\n");
	printf("\t\t5.������Ϣ\n");
	printf("-----------------------------------------\n");
	printf("�����루0 - 5��: ");
}

void keyDown(struct Node* list) //�û�����
{
	int userKey;
	struct Student tempData;

	scanf("%d", &userKey);
	switch (userKey)
	{
	case 0:
		printf("\t\t���˳�ϵͳ��\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("\t\t��������Ϣ��\n");
		printf("����������, ѧ��, ����, �绰, סַ: ");
		scanf("%s%s%d%s%s", tempData.name, tempData.id, &tempData.age,
			tempData.tel, tempData.addr);
		insertByHead(list, tempData); //����Ϣ���뵽����
		saveInfo("Student.txt", list);
		break;
	case 2:
		printf("\t\t�������Ϣ��\n");
		printList(list);
		break;
	case 3:
		printf("\t\t��ɾ����Ϣ��\n");
		printf("������Ҫɾ��ѧ��������: ");
		scanf("%s", tempData.name);
		delElem(list, tempData.name);
		saveInfo("Student.txt", list);
		break;
	case 4:
		printf("\t\t���޸���Ϣ��\n");
		printf("������Ҫ�޸�ѧ����ѧ�ţ�");
		scanf("%s", tempData.id);
		if (searchInfo(list, tempData.id) == NULL)
			printf("δ�ҵ������Ϣ, �޸���Ϣʧ��\n");
		else
		{
			struct Node* searchNode = searchInfo(list, tempData.id);
			printf("�������µ�����, ѧ��, ����, �绰, סַ: ");
			scanf("%s%s%d%s%s", searchNode->data.name, searchNode->data.id,
				&searchNode->data.age, searchNode->data.tel, searchNode->data.addr);
		}
		saveInfo("Student.txt", list);
		break;
	case 5:
		printf("\t\t��������Ϣ��\n");
		printf("������Ҫ����ѧ����ѧ��: ");
		scanf("%s", tempData.id);
		if (searchInfo(list, tempData.id) == NULL)
			printf("δ�ҵ������Ϣ, ������Ϣʧ��\n");
		else
			printNode(searchInfo(list, tempData.id));
		break;
	default:
		printf("�����������������\n");
		break;
	}
}