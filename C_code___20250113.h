#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

#define MAIN0113		// �����ϰ� ���� �ڵ尡 ���Ե� ���Ǹ��� �Է�
#ifdef MAIN0113			// �� ������Ʈ�� ���� ���� main()�Լ� �浹�� ���� ���� #ifdef ~ #endif ���̿� �ڵ� �Է� 

int main() {


	return 0;
}




	//std::cout << "hello, ����������� 1��!!" << std::endl;

	/*
	// �ڷ��� ----------------------------------------------------------------------------------
	bool b = true;
	char c = 'A';	// -127(-2^8) ~ 127(+2^8)  or 0 ~ 255  (1byte=8bit)
	int i = 1;      // -2,147,483,648 ~ 2,147,483,647  (4byte)
	long l = 1;     // -2,147,483,648 ~ 2,147,483,647  (8byte) 
	float f = 2.2;	//   (4byte)
	double d = 1.0; //   (8byte)

	// ���ڴ� ����ǥ
	// ���ڿ��� �ֵ���ǥ

	bool b = 4;
	char c = 'A';
	int i = 100;
	float f = 1.111;
	int z = 2 / 4;
	float y = 1000;

	std::cout << b << std::endl;	// 1
	std::cout << c << std::endl;	// A
	std::cout << i << std::endl;	// 100
	std::cout << f << std::endl;	// 1.111
	std::cout << z << std::endl;	// 0     // int���̶� �Ҽ��� ���ϴ� ���õǰ� ������ �����
	std::cout << y << std::endl;	// 1000  // ������¸� �������� �ʾƼ� ���������� ��µ�

	std::cout << "bool Ÿ�� ũ�� : " << sizeof(b) << std::endl;		// bool Ÿ�� ũ�� : 1
	std::cout << "char Ÿ�� ũ�� : " << sizeof(c) << std::endl;		// char Ÿ�� ũ�� : 1
	std::cout << "int Ÿ�� ũ�� : " << sizeof(i) << std::endl;		// int Ÿ�� ũ�� : 4
	std::cout << "float Ÿ�� ũ�� : " << sizeof(f) << std::endl;	// float Ÿ�� ũ�� : 4
	std::cout << "int Ÿ�� ũ�� : " << sizeof(z) << std::endl;		// int Ÿ�� ũ�� : 4
	std::cout << "float Ÿ�� ũ�� : " << sizeof(y) << std::endl;	// float Ÿ�� ũ�� : 4
	*/



	/*
	// ������ ----------------------------------------------------------------------------------

	// ������ �ۼ� - ���� ����
	// 	>> ���� �ڵ� �ľ� �Ǵ� ������ ���ؼ�
	//  >> ���� �ҽ��� commit�� �ϱ� ���ؼ��� 
	int number_of_motor = 5;	// ������ũ ǥ��� ���
	int NumberOfMotor = 5;		// �Ľ�Į ǥ��� ���
	double temperature = 23.4;	// �ǹ̸� �˼� �ִ� ������ ���

	// ������ �ۼ� - ���� ����
	short _1_motor = 1;		// ����ٳ� ���ڷ� �����ϴ� ������
	//int 1_sensor = 1;		// ����ٳ� ���ڷ� �����ϴ� ������
	int aaa = 100;			// �ǹ̾��� ������ ���
	char i = 1;				// �ǹ̾��� ������ ���


	// �ǽ�2. ������
	// 1) �л�������� ������(������ũ)
	char student_grade = 'A';

	// 2) ����1�� �µ� ���� �� ������ (ī��)
	float temperatureSensor1 = 23.4;
	float humidtySensor1 = 52.3;
	// >>>
	float sensor1Temp = 23.4;
	float sensor1Humi = 52.3;

	// 3) ���� �ӵ��� ������ (�Ľ�Į)
	float SpeedMotor = 32.4;
	// >>>
	int MotorSpeed = 20;

	*/


	/*
	// ������ �޸�(�ּ�) ----------------------------------------------------------------------------------
	int a = 100;
	int b = 100;

	int* ptr1 = 0;
	int* ptr2 = 0;

	ptr1 = &a;
	ptr2 = &b;

	std::cout << ptr1 << std::endl;		// 000000134011F884
	std::cout << ptr2 << std::endl;		// 000000134011F8A4
	// C++������ �� ������ ���� ������ �������� �޸��ּҴ� �������� �ǹ�
	// ���̽㿡���� �� ������ ���� ������ �������� �޸��ּҴ� ���� 
	// (�޸� �ּҰ� ���ٴ� ���� �޸𸮸� �� ���� Ȯ���Ѵٴ� �ǹ̴� �ƴ�)
	// ��Ʈ��ũ : ��������Ʈ���� ����
	// ��ǻ�ͳ� : ��������Ʈ���� ����
	*/


	/*
	// ���: iostream ----------------------------------------------------------------------------------
	int val = 10000;
	float val2 = 10000.2;
	
	std::cout << "����Ϸ��� ���� : " << std::endl;
	std::cout << val << std::endl;

	val = 20000;		// ���� ������ �ٸ� ���� ���Ҵ�ÿ��� �ڷ��� ���� �� ��

	std::cout << "���� �� ���� : " << std::endl;
	std::cout << val << std::endl;

	printf("C��� ������ printf�Լ��� �̿��� ���\n");

	printf("%.2f\n", val);		// 0.00				// val�� int���ε� ����� float������ ����ġ�ϸ鼭 ����ε� �� ����� �ȵ�
	printf("%.2f\n", val2);		// 10000.20
	printf("%d\n", val);		// 20000
	printf("%d\n", val2);		// -1610612736		// val2�� float���ε� ����� int������ ����ġ�ϰ� �����ؼ� ������ ���� ��µ�

	// % d: ������(int)
	// % f : �ε� �Ҽ���(float)
	// % lf : �ε� �Ҽ���(double)
	// % c : ���� ����(char)
	// % s : ���ڿ�(char �迭)
	// % x : 16����(�ҹ���)
	// % X : 16����(�빮��)
	// % o : 8����
	// % %: % ���� ��ü
	
	// ASCII�ڵ�
	char ch = 43;		// char���� ���ڸ� �Ҵ��ϸ� ASCII�ڵ�� �ν��Ͽ� ASCII�ڵ忡 �ش��ϴ� ���ڰ� ��µ�
	int i = 100;
	float f = 0.01;

	std::cout << ch << std::endl;
	// C++������ ASCII�ڵ�� �ν��ؼ� �ٷ� �����Ǵ� ���ڰ� ��µ�
	// ASCII code table ���� : https://www.commfront.com/pages/ascii-chart
	*/


	/*
	// �Է�: iostream ----------------------------------------------------------------------------------
	// Sensing ���� �ްų� Command ���� �޾Ƽ� �����Ҷ� �ַ� ����

	int val = 0;
	
	std::cout << "���� ���� �Է��Ͻÿ� : " << std::endl;
	std::cin >> val;
	std::cout << "�Էµ� �� : ";
	std::cout << val << std::endl;


	char ch = 0;
	std::cout << "�� ���ڸ� �Է��Ͻÿ� : " << std::endl;
	std::cin >> ch;
	std::cout << "�Էµ� �� : ";
	std::cout << ch << std::endl;


	// #include <stdio.h> ����
	int i = 0;
	scanf_s("%d", &i);
	printf("%d\n", i);


	// #include <string> ���� ��
	std::string input_string = "null";		// ���ڿ� ���� ����
	// �Ƶ��̳뿡���� string �ڷ��� ��� ������
	// C�� ����� ����� ���α׷������� string �ڷ��� ��� �Ұ����� (ARM���� ������ ���α׷� ��)


	//�ǽ�3. �����
	std::cout << "����� ���ڿ��� �Է��ϼ���.\n�� ���ڿ��� 5ȸ ���� ��µ˴ϴ�." << std::endl;
	std::cin >> input_string;
	std::cout << "�Է� : ";
	std::cout << input_string << std::endl;
	
	for (int i = 0; i < 5; ++i) {
		std::cout << i;
		std::cout << "ȸ ���! �Է��� ���ڿ� : ";
		std::cout << input_string << std::endl;
	}
	// C������ ���� ���ڿ� ������ ���� �ʾƼ�
	// ���� �� ���ھ� �迭�� �ְ� �迭�� �̿��ؼ� ���ڿ��� ����ϴ� ����� ����ϴµ�
	// ������ ������ �������鼭 ���ڿ��� �ν��ϱ⵵ �ϴ� �� �ϴ�

	*/
	

#endif



