#include <iostream>
using namespace std;

int main()
{
	//�迭
	//int Korean[10] = {0,0,0,0,0,0,0,0,0,0}; //�迭 [] int�ڿ��� ��� ����
	//int Korean[10] = { 0,}; // ��ü ����
	//int Math = 10;

	// >, <, ==, >=, <=. !=(���� �ʴ�)
	//bool Result = true; //�� ������
	//Result = false;

	//Result = 10 < 2;

	//cout << Result << endl; // 0���� 1 ��

	//and &&
	//or ||(shift\\)

	int Score = 0;
	cin >> Score;
	char Grade = 'F';

	switch (Score/10)
	{
		case 10:
		case 9:
			Grade = 'A';
			break; // �Ʒ� case ���� �����ϱ� ������ �극��ũ�� �ɾ� ��� �Ѵ�
		case 8:
			Grade = 'B';
			break;
		case 7:
			Grade = 'C';
			break;
		case 6:
			Grade = 'D';
			break;
		default:
			Grade = 'F';
	}

	if (Score >= 90 && Score <= 100)
	{
		Grade = 'A';
	}
	else if (Score >= 80 && Score < 90)
	{
		Grade = 'B';
	}
	else if (Score >= 70 && Score < 80)
	{
		Grade = 'C';
	}
	else if (Score >= 60 && Score < 70)
	{
		Grade = 'D';
	}
	else if (Score < 60)
	{
		Grade = 'E';
	}
	else
	{
		cout << "Error" << endl;
		return -1;
	}

	cout << Grade << endl;


	//if (!Result)
	//{
	//	cout << "True" << endl;
	//}
	//else
	//{
	//	cout << "False" << endl;
	//}
	//for (;;)
	//{

	//}

	return 0;
}