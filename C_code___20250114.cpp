#include <iostream>
#include <string>
using namespace std;


#define MAIN0114		// �����ϰ� ���� �ڵ尡 ���Ե� ���Ǹ��� �Է�(define�� �ּ�ó���ϸ� �ش� define�� main()�Լ��� ������ �ȵ�)
#ifdef MAIN0114			// �� ������Ʈ�� ���� ���� main()�Լ� �浹�� ���� ���� #ifdef ~ #endif ���̿� �ڵ� �Է� 


int main()
{
	cout << "���� _20250114" << endl;
	cout << "==============\n" << endl;


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