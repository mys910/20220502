#include <iostream>
using namespace std;

int main()
{
	//배열
	//int Korean[10] = {0,0,0,0,0,0,0,0,0,0}; //배열 [] int뒤에도 사용 가능
	//int Korean[10] = { 0,}; // 대체 가능
	//int Math = 10;

	// >, <, ==, >=, <=. !=(같지 않다)
	//bool Result = true; //비교 연산자
	//Result = false;

	//Result = 10 < 2;

	//cout << Result << endl; // 0거짓 1 참

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
			break; // 아래 case 까지 실행하기 때문에 브레이크를 걸어 줘야 한다
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