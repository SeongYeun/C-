#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;		// std : ǥ�� ���̺귯��

//#define MAIN0116
#ifdef MAIN0116

struct Car {
	string name;
	char safety_grade = 'A';
	int door;
	int age;
	float engine_temp;
	float fuel_gauge[10];				// �迭�� ����
};

struct Rectangle {
	float width;
	float height;
};


int main()
{


	std::cout << "���� _ 20250116" << std::endl;
	std::cout << "=============================\n\n" << std::endl;
	// const�� �տ� �ٿ��ָ� val�� �������� ���� �ڵ忡�� ����� �ν��ϰ��ϴ� ��ɾ���
	// float ���� �������� ������ �ʱⰪ 0�� �Ҽ���(.0)�� �Է����� �ʾƵ� ��
	// ����ü�� ���̽��� Ŭ������ ������ ����
	

	/*
	// �ǽ�19. 2���� �迭 ����غ���
	// 1) exam�� 2���� �迭 ���� ����
	// (5�� �л��� '����', '����', '����' ���� ���� �Է�)
	int exam[5][3] = { {34,54,86},{64,75,81},{81,76,96},{77,69,81},{43,65,71} };
	// 2) exma�� ��� ���� ���
	int row = sizeof(exam) / sizeof(exam[0]);
	int col = sizeof(exam[0]) / sizeof(exam[0][0]);

	for (int i = 0; i < row; i++) {
		cout << i << "�� �л��� ����, ����, ���� ������  : ";
		for (int j=0; j<col; j++){
			cout << " " << exam[i][j] ;
		}
		cout << endl;
	}

	// ���սǽ�4. �迭 ����غ��� (string �Լ� �ִ��� Ȱ��)
	const int row = 5;
	const int col = 3;
	int idx[2] = { 0, };
	int exam[row][col] = { {0,}, };
	string score= "";
	string subject[3] = { "����", "����", "����" };

	// ���� �Է¹ޱ�
	for (int i = 0; i < row; i++) {
		cout << i + 1 << "�� �л��� ����, ����, ���� ������ �Է��ϼ��� : ";
		getline(cin, score);
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				idx[i] = score.find(" ");
			}
			else {
				idx[i] = score.find(" ", idx[i-1]+1);
			}
		}
		for (int j = 0; j < col; j++) {
			if (j == 0) {
				exam[i][j] = stoi(score.substr(0, idx[j]));
			}
			else if (j==1){
				exam[i][j] = stoi(score.substr(idx[j-1]+1, idx[j]-idx[j-1]-1));
			}
			else {
				exam[i][j] = stoi(score.substr(idx[j-1]));
			}
		}
	}

	cout << "==================================================" << endl;
	// ��� ���� ����ϱ�
	for (int i = 0; i < row; i++) {
		cout << i + 1 << "�� �л��� ����, ����, ����, ������ : ";
		for (int j = 0; j < col; j++) {
			cout << " " << exam[i][j];
		}
		cout << endl;
	}


		// ���սǽ�4. �迭 ����غ���   �� ������ �ڵ�
	const int student = 5;
	const int subject = 3;
	int exam[student][subject] = {};
	string str = " ";
	int point = 0;
	int val = 0;
	for (int i = 0; i < student; i++)
	{
		cout << i + 1 << "��° �л��� ����, ����, ���� ������ (�Է�): ";
		getline(cin, str);
		//for �� �Ⱦ��� �Ѱ�
		//cout << str << endl;
		//int val = str.find(" ");
		//cout << "ù��° find �� : " << val << endl;
		//string tmp = str.substr(0, val);
		//cout << "ù��° ���� : " << tmp << endl;
		//int val2 = str.find(" ", val + 1);
		//cout << "�ι�° find �� : " << val2 << endl;
		//string tmp2 = str.substr(val+1, val2 - val);
		//cout << "�ι�° ���� : " << tmp2 << endl;
		//string tmp3 = str.substr(val2+1);
		//cout << "����° ���� : " << tmp3 << endl;
		for (int i_i = 0; i_i < subject; i_i++)
		{
			//for�� ����
			val = str.find(" ", point);
			string tmp = str.substr(point, val - point);
			point = val + 1;
			exam[i][i_i] = stoi(tmp);
		}
	}
	cout << "----------------------------------------" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << j + 1 << "��° �л��� ����, ����, ���� ������ (���): " << exam[j][0] << " " << exam[j][1] << " " << exam[j][2] << endl;
	}
	*/




	// ������ �迭 ----------------------------------------------------------------------------------
	/*int score[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9} };*/


	/*
	// ����ü ----------------------------------------------------------------------------------
	// ����ü ���� ���_1
	Car car1;						// car1�̶�� ����ü(�ν��Ͻ�) ����
	//Car c1, c2, c2, c4;				// ���� �ν��Ͻ� ���� ���� ����

	car1.name = "KIM";
	car1.age = 2000;
	car1.door = 4;
	car1.engine_temp = 99.9;
	car1.fuel_gauge[0] = 20.1;
	car1.fuel_gauge[1] = 30.2;
	// ����ü ���� ���_2
	//Car car1 = { "KIM",2000,4,99.9 };
	cout << car1.name << endl;
	cout << car1.age << endl;
	cout << car1.door << endl;
	cout << car1.engine_temp << endl;
	cout << car1.fuel_gauge[0] << endl;
	cout << car1.fuel_gauge[1] << endl;
	*/

	/*
	// �ǽ�18. �迭�� Ȱ���ϱ�
	// 1) grade��� �迭 ���� ���� �� ���� �Է¹ޱ�
	int grade[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : ";
		cin >> grade[i];
		cout << endl;
	}

	// 2) for���� Ȱ���Ͽ� �л� 5���� ���� ��� ����
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += grade[i];
	}
	float average = sum / 5;
	cout << "���� ��� : " << average << endl;


	// �ǽ�18. �迭�� Ȱ���ϱ�  �� ������ �ڵ�
	const int val = 5;					// const�� �տ� �ٿ��ָ� val�� �������� ���� �ڵ忡�� ����� �ν��ϰ��ϴ� ��ɾ���
	float grade[val] = { 0.0, };
	float sum = 0;						// float ���� �������� ������ �ʱⰪ 0�� �Ҽ���(.0)�� �Է����� �ʾƵ� ��
	float avg = 0;

	for (int i = 0; i < val; i++) {
		cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : ";
		cin >> grade[1];
	}
	for (int j = 0; j < val; j++) {
		sum = sum + grade[j];
	}
	avg = sum / val;
	cout << "���� ��� : " << avg << endl;
	*/



	/*
	// �ǽ� 20. ����ü ����غ���
	Rectangle item;
	string str = "";
	cout << "����, ���� ���̸� �Է��ϼ���. ";
	getline(cin, str);
	item.width = stof(str.substr(0, str.find(" ")));
	item.height = stof(str.substr(str.find(" ") + 1));
	cout << "���̴� : " << int(item.width * item.height) << endl;

	// �ǽ� 20. ����ü ����غ���  �� ������ �ڵ�
	Rectangle r1;
	cout << "����, ���� ���̸� �Է��ϼ���. ";
	cin >> r1.width;			// <- getline�� �Ƚᵵ ������ �����ؼ� ������ �ν�
	cin >> r1.height;
	//cout << r1.width << endl;
	//cout << r1.height << endl;
	float area = r1.width * r1.height;
	cout << "���̴� : " << area << endl;

	*/






	return 0;
}

#endif
