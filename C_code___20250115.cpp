#include <iostream>
#include <string>
using namespace std;


//#define MAIN0115		// �����ϰ� ���� �ڵ尡 ���Ե� ���Ǹ��� �Է�(define�� �ּ�ó���ϸ� �ش� define�� main()�Լ��� ������ �ȵ�)
#ifdef MAIN0115			// �� ������Ʈ�� ���� ���� main()�Լ� �浹�� ���� ���� #ifdef ~ #endif ���̿� �ڵ� �Է� 


// �ݺ��� ���� : for��, while��, do~while��
// ���ѷ��� �� : while(true), while(1), for(;;), void roop() {�ڵ�}


int main()
{
	std::cout << "���� _ 20250115" << std::endl;


	return 0;
}

#endif



	/*
	//���սǽ�1. �Է� ���� �� ���� ũ�⸦ ��
	int today = 0;
	int birthday = 0;

	cout << "���� ��¥�� �Է��ϼ���.(��:5�� 24�� -> 0524)" << endl;
	cin >> today;

	cout << "������ �Է��ϼ���.(��:5�� 24�� -> 0524)" << endl;
	cin >> birthday;

	if (today < birthday) {
		cout << "������ ���� ��¥���� �� Ů�ϴ�." << endl;
	}
	else if (today > birthday) {
		cout << "���� ��¥�� ���Ϻ��� �� Ů�ϴ�." << endl;
	}
	else {
		cout << "���� ��¥�� ������ �����ϴ�." << endl;
	}

		//���սǽ�1. �Է� ���� �� ���� ũ�⸦ �� �� ������ �ڵ�
	int today = 0;
	int birth = 0;
	if (today == birth) {
		cout << "������ ���� �����Դϴ�." << endl;
	}
	else if (today > birth) {
		cout << "������ �������ϴ�.." << endl;
	}
	else  {
		cout << "������ ���� ������ �ʾҽ��ϴ�.." << endl;
	}



	//���սǽ�2. ���� ���α׷� �����
	char operator_0 = 0;
	float val_1 = 0;
	float val_2 = 0;
	float result = 0;

	cout << "====  ���� ���α׷�  ====" << endl;
	cout << "����� �����ڸ� �Է��ϼ��� (+, -, *, /)" << endl;
	cin >> operator_0;
	cout << "������ �տ� �� ���� �Է��ϼ���" << endl;
	cin >> val_1;
	cout << "������ �ڿ� �� ���� �Է��ϼ���" << endl;
	cin >> val_2;

	switch (operator_0) {
	case '+':
		result = val_1 + val_2;
		break;
	case '-':
		result = val_1 - val_2;
		break;
	case '*':
		result = val_1 * val_2;
		break;
	case '/':
		result = val_1 / val_2;
		break;
	}

	cout << val_1 << operator_0 << val_2 << " = " << result << endl;



	//���սǽ�2. ���� ���α׷� ����� �� ������ �ڵ�
	int val1 = 0;
	int val2 = 0;
	int ch = 0;
	int result = 0;

	cout << "�ǿ����� 1�� �Է��Ͻÿ�." << endl;
	cin >> val1;
	cout << "�ǿ����� 2�� �Է��Ͻÿ�." << endl;
	cin >> val1;
	cout << "�����ڸ� �Է��Ͻÿ�." << endl;
	cin >> ch;

	if (ch == '+') result = val1 + val2;
	else if (ch == '-') result = val1 - val2;
	else if (ch == '*') result = val1 * val2;
	else if (ch == '/') result = val1 / val2;
	else cout << "�����ڸ� �߸� �Է��ϼ̽��ϴ�." << endl;
	cout << "��� ����� "<< result <<" �Դϴ�." << endl;




	/*
	// �ݺ��� : for�� ----------------------------------------------------------------------------------
	// ���ѷ��� �� : for(;;)
	int until = 10;
	int val = 0;
	for (int i = 0; i <= until; i=i+2) {
		cout << "������ ���� : " << val++ << endl;
	}
	// ���� for��
	// ���� for������ ���� ���������� �ᵵ �� for�� ���ο��� �ٸ� ������ �ν���
	// ���� for������ �ܺ� for���� ���������� ������ ���� �� for���� ������������ �ٸ��� �����ϸ� ������
	for (int i = 0; i < 3; i++) {
		cout << "�ܺ� for�� i�� : " << i << endl;
		for (int i = 0; i < 2; i++) {
			cout << "    ������ for�� i�� : " << i << endl;
		}
	}
		

	// �ǽ�8. ������ �����
	// (1) 5�ܸ� ����غ���
	cout << "5�� ���" << endl;
	for (int i = 1; i < 10; i++) cout << "5 * " << i << " = " << 5 * i << endl;
	cout << "" << endl;

	// (2) 1~9�ܱ��� ��� ����غ���
	cout << "1~9�� ���" << endl;
	for (int i = 1; i < 10; i++)
	{
		cout << "===== " << i << "�� ��� =====" << endl;
		for (int j = 1; j < 10; j++){
			cout << i <<" * " << j << " = " << i * j << endl;
		}
		cout << "" << endl;
	}
	
	// �ǽ�8. ������ ����� �� ������ �ڵ�
	int dan = 5;
	int result = 0;
	// 5�ܸ� ���
	for (int i = 1; i <= 9; i++) {
		result = dan * i;
		cout << dan << "x" << i << " = " << result << endl;
	}
	// 2~9�� ��� ���
	for (int i = 2; i <= 9; i++) {
		cout << i << "�� ���" << endl;
		for (int j = 1; j <= 9; j++) {
			result = i * j;
			cout << i << "x" << j << " = " << result << endl;
		}
	}
	*/

	/*	
	// �ǽ�9. 1���� n������ �� ���ϱ�
	int input = 0;
	int output = 0;

	cout << "1���� n������ �� ���ϱ�\n" << endl;
	cout << "����(���� ����)�� �Է��ϼ��� : ";
	cin >> input;
	for (int i = 1; i <= input; i++) output += i;
	cout << "1���� n������ ���� :" << output << endl;


	// �ǽ�9. 1���� n������ �� ���ϱ� �� ������ �ڵ�
	int val = 0;
	int sum = 0;

	cout << "1���� n������ �� ���ϱ�\n" << endl;
	cout << "����(���� ����)�� �Է��ϼ��� : ";
	cin >> val;
	for (int i = 1; i <= val; i++) sum += i;
	cout << "1���� n������ ���� :" << sum << endl;
	*/


	/*
	// �ݺ��� : while�� ----------------------------------------------------------------------------------
	// ��ɹ����� break�� �������� �����ؾ� ���ѷ����� ������ �ʴ´�.
	// ���ѷ��� �� : while(1), while(true), while(0�� �ƴ� ���̳� ����),
	int val = 0;
	int con = 10;
	while (val < con) {
		cout << "while��  " << val++ << "��° ���" << endl;
		if (val == 5) break;
	}
	*/

	/*
	// �ݺ��� : while�� ----------------------------------------------------------------------------------
	int i=0;
	do {
		cout << "do while��" << endl;
		cout << "�����ϴ� ����" << i++ << endl;
	} while (i <= 0);

	i = 0;
	while (i < 0) {				// <- ���ǹ��� �������� �ʾƼ� while���� �ƿ� ����� ���� ����
		cout << "while��" << endl;
		cout << "�����ϴ� ����" << i++ << endl;
	}

	*/

	/*
	//�ǽ�10. while�� ����غ���
	// 1) �ǽ�8. ������ �����
	// 1-1) 5�ܸ� ����غ���
	int i = 0;
	cout << "5�� ���" << endl;

	while (i <= 9) {
		cout << "5 * " << i << " = " << 5 * (++i) << endl;
	}

	// 1-2) 2~9�ܱ��� ��� ����غ���
	int dan = 2;

	cout << "2~9�� ���" << endl;

	while (dan < 10) {
		cout << "==== " << dan << "�� ��� ====" << endl;
		i = 1;
		while (i < 10) {
			cout << dan << " * " << i << " = " << dan * i << endl;
			i++;
		}
		dan++;
	}

	// 2) �ǽ�9. 1���� n������ �� ���ϱ�
	int input = 0;
	int output = 0;
	i = 0;

	cout << "1���� n������ �� ���ϱ�\n" << endl;
		cout << "����(���� ����)�� �Է��ϼ��� : " ;
	cin >> input;

	while (i <= input) {
		output += i++;
	}
	cout << "1���� n������ �� : " << output << endl;
	//�ǽ�10. while�� ����غ��� �� ������ �ڵ�
	// 1) �ǽ�8. ������ �����
	// 1-1) 5�ܸ� ����غ��� �� ������ �ڵ�
	int dan = 6;
	int i = 1;
	int result = 0;

	while (i<9) {
		result = dan * i;
		cout << dan << " x " << i << " = " << result << endl;
		i++;
	}

	// 1-2) 2~9�ܱ��� ��� ����غ��� �� ������ �ڵ�
	dan = 2;
	result = 0;

	while (dan < 10) {
		cout << dan << "�� �Դϴ�." << endl;
		i = 1;
		while (i < 10) {
			result = dan * i;
			cout << dan << " x " << i << " = " << result << endl;
			i++;
		}
		dan++;
	}
	// 2) �ǽ�9. 1���� n������ �� ���ϱ� �� ������ �ڵ�
	int val = 0;
	int count = 1;
	int result = 0;

	cout << "1���� n������ �� ���ϱ�\n" << endl;
	cout << "����(���� ����)�� �Է��ϼ��� : ";
	cin >> val;

	while (count <= val) {
		result = result + count;
		count++;
	}
	cout << "1���� "<< val << "������ �� : " << result << endl;
	*/

	/*
	//�ǽ�11. ����ڰ� �Է��� ���� ���ϱ�
	int input = 0;
	int output = 0;
	std::cout << "����ڰ� �Է��� ���� ���ϱ�" << std::endl;
	do {
		std::cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
		cin >> input;
		output += input;
	} while (input != 0);
	std::cout << "����ڰ� �Է��� ���� ���� : " << output << std::endl;


	//�ǽ�11. ����ڰ� �Է��� ���� ���ϱ�  �� ������ �ڵ�
	int val = 0;
	int sum = 0;

	while (true) {
		std::cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
		std::cin >> val;
		sum += val;
		if (val == 0) break;
	}
	std::cout << "����ڰ� �Է��� ���� ���� : " << sum << std::endl;
	*/


	/*

	//�ǽ�12. �Է��� ���ڸ�ŭ �� ���
	int input = 0;
	int i = 1;
	int j = 1;

	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> input;
	while (i <= input) {
		j = 1;
		while (j<=i){
			cout << "*";
			j++;
		}
		cout << "" << endl;
		i++;
	}

	//�ǽ�12. �Է��� ���ڸ�ŭ �� ��� �� ������ �ڵ�
	int floor;
	int count_1 = 1;
	int count_2 = 1;

	std::cout << "�� ������ ��� �ұ��?" << std::endl;
	std::cin >> floor;
	while (count_1 <= floor) {
		count_2 = 1;
		while (count_2<= count_1) {
			std::cout << "*" ;
			count_2++;
		}
		count_1++;
		std::cout << std::endl;
	}
	*/

	/*

	// ���սǽ�3. �Ƕ�̵��� �� ���
	int star = 1;
	int space = 0;
	int layer = 0;
	int i = 1;
	int j = 1;

	std::cout << "�Ƕ�̵��� ���̸� �Է��Ͻÿ� : ";
	std::cin >> layer;
	space = layer-1;
	while (space >= 0) {
		i = 1;
		j = 1;
		while (i<=space) {
			std::cout << " ";
			i++;
		}
		while (j<=star) {
			std::cout << "*";
			j++;
		}
		std::cout << "" << std::endl;
		star= star+2;
		space--;

	}



	// ���սǽ�3. �Ƕ�̵��� �� ��� �� ������ �ڵ�
	int f = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;

	std::cout << "�Ƕ�̵� ���̸� �Է��Ͻÿ�";
	std::cin >> f;

	for (c1 = 1; c1 <= f; c1++ ) {		// ���� �ݺ�
		for (c2 = 1; c2 <= (f - c1); c2++) {	// ���� ���
			std::cout << " ";
		}
		for (c3 = 1; c3<= (c1 * 2 - 1); c3++) {	// �� ���
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	*/