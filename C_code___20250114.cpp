#include <iostream>
#include <string>
using namespace std;


//#define MAIN0114												// �����ϰ� ���� �ڵ尡 ���Ե� ���Ǹ��� �Է�(define�� �ּ�ó���ϸ� �ش� define�� main()�Լ��� ������ �ȵ�)
#ifdef MAIN0114													// �� ������Ʈ�� ���� ���� main()�Լ� �浹�� ���� ���� #ifdef ~ #endif ���̿� �ڵ� �Է� 


int main()
{
	cout << "���� _20250114" << endl;
	cout << "==============\n" << endl;

	// ���� ���� ���
	// ���ǹ� : if�� / switch�� / ���׿�����
	// if�� �񱳹��̳� ���ڿ��� ������ ������ �� ������
	// switch���� ���ڳ� ���� �� ���ڿ� ���ؼ��� case ���� �� ����
	// if (flag)�� �̿��ؼ� Ư�� �ڵ带 ������ϰų� ���࿩�θ� �ս��� ��ȯ�� �� ����
	// ���׿����ڴ� if~else�� ��� ǥ���� ����

	// �������� : &&, ||, !
	// ��������� : �⺻��Ģ������, %, ++(����/����), --(����/����)
	// %, ++ : �Ƶ��̳뿡�� ��۱��(2�ǹ��) ó���� �����


	return 0;
}

#endif


	/*
	// ���ǹ� : if�� ----------------------------------------------------------------------------------
	
	int val=4;
	std::cout << "������ �Է��ϼ���." << "\n";
	std::cin >> val ;
	std::cout << "�ȳ��ϼ���?" << "\n";
	std::cout << "���� K-Digital-Training" << std::endl;
	std::cout << "����������� 1��" << std::endl;
	
	if (val == 1) {
		std::cout << "�Ƶ��̳� ";
	}
	else if (val == 2) {
		std::cout << "���̽� ";
	}
	else if (val == 3) {
		std::cout << "AWS ";
	}
	else {
		std::cout << "C++ ";
	}
	
	std::cout << "�Դϴ�." << std::endl;
	*/
	

	/*
	//�ǽ�5. if��(2) �� ������ �ڵ�
	string str;
	
	cout << "�̸��� �Է��ϼ���." << endl;
	cin >> str;
	
	if (str == "ȫ�浿") {
		cout << "����" << endl;
	}
	else if (str == "������") {
		cout << "����" << endl;
	}
	else {
		cout << "�𸣰ھ��." << endl;
	}
	*/
	
	
	
	/*
	//�ǽ�5. if��(2)
	std::string input_name = "";
	
	std::cout << "�̸��� �Է��ϼ���." << std::endl;
	std::cin >> input_name;
	if (input_name == "ȫ�浿") {
		std::cout << "����" << std::endl;
	}
	else if (input_name == "������") {
		std::cout << "����" << std::endl;
	}
	else {
		std::cout << "�𸣰ھ��." << std::endl;
	}
	*/
	
	
	/*
	//�ǽ�4. if��(1)
	int age = 0;
	std::cout << "���̸� �Է��ϼ���." << std::endl;
	std::cin >> age;
	
	if (age >= 200) {
		std::cout << "���̰� �ʹ� �����ϴ�." << std::endl;
	}
	else if (age >= 20) {
		std::cout << "����" << std::endl;
	}
	else if (age >= 17) {
		std::cout << "����л�" << std::endl;
	}
	else if (age >= 14) {
		std::cout << "���л�" << std::endl;
	}
	else if (age >= 8) {
		std::cout << "�ʵ��л�" << std::endl;
	}
	else if (age >= 0) {
		std::cout << "����" << std::endl;
	}
	else {
		std::cout << "���̸� �� �� �Է��ϼ̽��ϴ�." << std::endl;
	}
	*/
	
	/*
	//�ǽ�4. if��(1) �� ������ �ڵ�
	int age = 0;
	cout << "���̸� �Է��ϼ���." << endl;
	cin >> age;

	if (age >= 1 && age <= 7) {
		cout << "����" << endl;
	}
	else if (age >= 8 && age <= 13) {
		cout << "�ʵ��л�" << endl;
	}
	else if (age >= 14 && age <= 16) {
		cout << "���л�" << endl;
	}
	else if (age >= 17 && age <= 19) {
		cout << "����л�" << endl;
	}
	else if (age >= 20) {
		cout << "����" << endl;
	}
	*/
	
	/*
	// �񱳿����� ----------------------------------------------------------------------------------
	int score = 85;
	cout << "�� ����� ";
	if (score == 100) {
		cout << "A+";
	}
	else if (score >= 80) {
		cout << "B+";
	}
	else if (score >= 60) {
		cout << "C+";
	}
	else {
		cout << "F";
	}

	cout << " �Դϴ�." << endl;
	*/

	/*
	// ���� : switch case�� ----------------------------------------------------------------------------------
	int val = 0;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> val;

	switch (val) {
	case 0:
		cout << "case 0 �Դϴ�." << endl;
		break;
	case 1:
		cout << "case 1 �Դϴ�." << endl;
		break;
	case 2:
		cout << "case 2 �Դϴ�." << endl;
		break;		// ���� break;�� ������ �� 2�� �Է��ϸ� case2�� case3���� ��� �����.
	case 3:
		cout << "case 3 �Դϴ�." << endl;
		break;
	case 4:
		cout << "case 4 �Դϴ�." << endl;
		break;
	default:
		break;
	}
	*/
	/*
	// �������� ----------------------------------------------------------------------------------
	int val = 0;
	bool flag = true;

	cout << "���� �Է��� ���ڴ� ";

	cin >> val;
	if (val >= 40 && val <= 60) {
		cout << "40���� 60���� �Դϴ�." << endl;
	}
	else if (val >= 70 && val <= 80) {
		cout << "70���� 80���� �Դϴ�." << endl;
	}
	else if (val >= 90 || val < 0) {
		cout << "90���� ũ�ų� 0���� �۽��ϴ�." << endl;
	}
	else {
		cout << "�ش�Ǵ� ������ �����ϴ�." << endl;
	}

	if (!!flag) {
		cout << "flag�� false�Դϴ�." << endl;
	}

	int val1 = 0;
	int val2 = 0;
	bool flag = true;

	val1 = 25;
	val2 = 200;

	// ���ǽ� Ʋ�� �� 
	// val1=175�϶� : ���ǽ��� �պκ� 50<=val1 �Ǻ��� true�� ���� ������ ��(true=1<=100) �Ǻ��ؼ� ���� true�� ��
	// val1=25�϶�  : ���ǽ��� �պκ� 50<=val1 �Ǻ��� false�� ���� ������ ��(false=0<=100) �Ǻ��ؼ� ���� true�� ��
	if (50 <= val1<=100) {
		cout << "50���� 100 ���� �Դϴ�." << endl;
	
	}
	if (val1 >= 50 && val1 <= 100) {		// ����ε� ���ǽ���
		cout << "50���� 100 ���� �Դϴ�." << endl;
	}
	else {
		cout << "������ ������ϴ�." << endl;
	}
	*/

	/*
	// ��������� ----------------------------------------------------------------------------------
	int val_1 = 9;
	int val_2 = 21;
	int result = 0;

	result = val_1 + val_2;
	cout << "���� ��� : " << val_1 << " + " << val_2 << " = " << result << endl;
	result = val_1 - val_2;
	cout << "���� ��� : " << val_1 << " - " << val_2 << " = " << result << endl;
	result = val_1 * val_2;
	cout << "���� ��� : " << val_1 << " * " << val_2 << " = " << result << endl;
	result = val_2 / val_1;
	cout << "������ ��� : " << val_2 << " / " << val_1 << " = " << result << endl;
	result = val_2 % val_1;
	cout << "������ ��� : " << val_2 << " % " << val_1 << " = " << result << endl;

	cout << "���� result �� :  " << result << endl;
	// result = 3
	cout << "���� ���� ������(result++) �� :  " <<  result++ << endl; // 3 ���
	// result = 3+1 = 4
	cout << "���� ���� ������(result--) �� :  " << result-- << endl;  // 4 ���
	// result = 4-1 = 3

	++result;		// result = 3+1 = 4
	cout << "���� ���� ������(++result) �� :  " << result << endl;		// 4 ���
	--result;		// result = 4-1 = 3
	cout << "���� ���� ������(--result) �� :  " << result << endl;		// 3 ���

	cout << "���� ����/���� ������  :  �ش� �ڵ� ������ ������ ���� ������ ������ �ݿ��� �� �ش���� �ڵ� ����" << endl;
	cout << "���� ����/���� ������  :  �ش� �ڵ� ������ ���� �Ŀ� ������ ������ �ݿ��Ǽ� �ش���� �ڵ� ����� ���� �ݿ��� �ȵȻ��·� ����" << endl;
	*/

	/*
	//�ǽ�6. switch�� �� ������ �ڵ�
	int input = 0;
	char grade = 0;
	bool flag = !true;		// if (flag)�� �̿��ؼ� Ư�� �ڵ���� on/offó�� ���࿩�θ� ������ �� ����

	cout << "������ �Է��Ͻÿ�." << endl;
	cin >> input;

	// �Ƶ��̳뿡�� ��źκ��� if ���ǹ����� �����ϰ�
	// ����κ��� if���ǹ��� ����� switch������ �����ϴ� ��찡 ����

	if (input >= 91 && input <= 100) {
		grade = 'A';
	}
	else if (input >= 76 && input <= 90) {
		grade = 'B';
	}
	else if (input >= 51 && input <= 75) {
		grade = 'C';
	}
	else if (input >= 35 && input <= 50) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	switch (grade) {
	case 'A' :
		if (flag) cout << "������ " << grade << " �Դϴ�." << endl;
		break;
	case 'B':
		if (flag) cout << "������ " << grade << " �Դϴ�." << endl;
		break;
	case 'C':
		if (flag) cout << "������ " << grade << " �Դϴ�." << endl;
		break;
	case 'D':
		if (flag) cout << "������ " << grade << " �Դϴ�." << endl;
		break;
	case 'F':
		if (flag) cout << "������ " << grade << " �Դϴ�." << endl;
		break;

	}



	//�ǽ�6. switch��
	int score = 0;
	int grade = 0;
	cout << "������ ������ �Է��ϼ���.(0~100)" << endl;
	cin >> score;

	if (score >= 91 && score <= 100) {
		grade = 0;
	} else if (score >= 76 && score <= 90) {
		grade = 1;
	} else if(score >= 51 && score <= 75) {
		grade = 2;
	} else if (score >= 35 && score <= 50) {
		grade = 3;
	} else {
		grade = 4;
	}

	switch (grade) {
	case 0 :
		cout << "������ A �Դϴ�." << endl;
		break;
	case 1:
		cout << "������ B �Դϴ�." << endl;
		break;
	case 2:
		cout << "������ C �Դϴ�." << endl;
		break;
	case 3:
		cout << "������ D �Դϴ�." << endl;
		break;
	case 4:
		cout << "������ F �Դϴ�." << endl;
		break;
	}
	*/

	/*
	// ���ǹ� : ���׿����� ----------------------------------------------------------------------------------
	char score = 0;
	
	cout << "������ �Է��ϼ���." << endl;
	cin >> score;
	
	score == 'F' ?   cout << "�����" :   cout << "�����߽��ϴ�.";
	
	
	
	// �ǽ�7. ���׿�����
	int input = 0;
	
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> input;
	
	input % 5 == 0 ?
		cout << input << "�� 5�� ����Դϴ�." << endl
		: cout << input << "�� 5�� ����� �ƴմϴ�." << endl;
	
	// �ǽ�7. ���׿����� �� ������ �ڵ�
	int val = 0;
	cout << "���ڸ� �Է��Ͻÿ�." << endl;
	cin >> val;
	val % 5 == 0 ? cout << val << "�� 5�ǹ�� �Դϴ�." << endl : cout << val << "�� 5�ǹ���� �ƴմϴ�." << endl;
	*/