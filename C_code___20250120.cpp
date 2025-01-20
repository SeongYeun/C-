#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#define MAIN0120
#ifdef MAIN0120

// ������ �Լ�  _ sensor_cal
int sensor_cal(int sensor_val, int offset) {
	int result = 0;
	result = sensor_val - offset;
	return result;
}
// ���ͼӵ��Լ� ���� _ motor_speed
void motor_speed(int motor_num, int speed) {
	cout << motor_num << "�� ���͸� " << speed << "�ӵ��� �۵�!" << endl;
	return;
}

// ���� �Լ��� ���� �ٸ� �Ű������� ���� ����
// �����ε� : �Ű������� �ٸ��� �Լ����� ���Ƶ� �ٸ� �Լ��� �ν��ؼ� �� �Լ��� ��� ȣ�� ������
// 1) �Ű����� 1�� ����
void hello(int a) {
	return ;
}


// �ǽ�21. �Լ� Ȱ���ϱ�
// (1) ¦��/Ȧ�� ����ϱ�
void even(int number) {
	if ((number % 2) == 0) {
		cout << number << "�� ¦���Դϴ�." << endl;
	}
	else {
		cout << number << "�� Ȧ���Դϴ�." << endl;
	}
	return;
}
// (1) ¦��/Ȧ�� ����ϱ�  �� ������ �ڵ�
void is_odd(int num) {
	if ((num % 2) == 0) cout << "¦��" << endl;
	else cout << "Ȧ��" << endl;
	
}

// (2) 3�� �� �� ���� ū �� ��ȯ�ϱ�
int max_num(int n1, int n2, int n3) {
	int numbers[] = { n1, n2, n3 };
	int max = n1;
	for (int i = 1; i < 3; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	return max;
}
///////////////////////////////////////////////////
// ���սǽ�6. ��Ģ���� �Լ� �����
// (1) �� ������ ��
int add(int n1, int n2) {
	return n1+n2;
}

// (2) �� ������ ����
int sub(int n1, int n2) {
	if (n1 >= n2) {
		return n1 - n2;
	}
	else {
		return n2 - n1;
	}
}

// (3) �� ������ ����
int mul(int n1, int n2) {
	return n1 * n2;
}

//// (4) �� ������ ������  �� ���� ����ȯ �ȵ� ��
//float divide(int n1, int n2) {
//	return n1 / n2;
//}
// (4) �� ������ ������  �� ���� ����ȯ �� ��
float divide_f(int n1, int n2) {
	return float(n1) / n2;    // �ϳ��� ����ȯ �Ǹ� �������� �ڵ����� ����ȯ ��
}
///////////////////////////////////////////////////
// ���սǽ�5. �迭�� ����ü Ȱ���ϱ�
struct Student {
	string name;
	float scores[3];
};

// Ŭ���� ----------------------------------------------------------------------------------
class CalClass {
private :
	int val;
public :
	void set_val(int num) {
		val = num;
	}
	void inc_val(int num) {
		val = val + num;
	}
	void dec_val(int num) {
		val = val - num;
	}
	void print_val() {
		cout << "���� ��� �� : " << val << endl;
	}
};

// ����22. Ŭ������ ���� ������
class Calculator {
private : 
	float result;
	string formular;
public :
	void calculator(int n1, char oper, int n2) {
		formular = to_string(n1) + oper + to_string(n2);
		switch (oper) {
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			result = (float)n1 / n2;
			break;
		}
	}
	void print_calculrator() {
		cout << formular << " = "<< result <<endl;
	}
};

// ����22. Ŭ������ ���� ������    �� ������ �ڵ�
class calClass {
private:
	int num1, num2;
	char op;
	float result;
	int test_val = 5;
public:
	void test(int test_val) {								// <- this : Ŭ���� ���� ���� ����Ŵ -----------------
		//cout << "this ���� �׽�Ʈ �� : " << this.test_val << endl;
		cout << "this ������ �׽�Ʈ �� : " << test_val << endl;
	}
	void input() {
		cout << "����1, ������, ����2�� �Է��ϼ��� : ";
		cin >> num1 >> op >> num2;
	}
	void calcul() {
		switch (op) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if (num2 == 0) {
				cout << "0���� ���� �� �����ϴ�." << endl;
				break;
			}
			result = (float)num1 / num2;		// <- ���� ����ȯ(int->float)
			break;
		}
	}
	void print() {
		cout << "����� ��� : " << num1 << " " << op << " " << num2 << " = " << result << endl;
	}
};

// Ŭ���� : ������, �Ҹ��� ----------------------------------------------------------------------------------
class testClass {
private:
public:
	testClass() {								// <- ������
		for (int i = 0; i<2; i++) cout << "������_1�� ȣ�� �Ǿ����ϴ�." << endl;
	}
	testClass(int num1, int num2) {				// <- ������ (�����ε�)
		for (int i = 0; i < 2; i++) cout << "������_2�� ȣ�� �Ǿ����ϴ�." <<num1 << ", " << num2 << endl;
	}
	void print() {
		cout << "�Լ��� ȣ�� �Ǿ����ϴ�." << endl;
	}
	~testClass() {								// <- �Ҹ��� : ������ ������ ���� ���ؼ� ��� (�����ε� �ȵ�)
		cout << "�Ҹ��ڰ� ȣ�� �Ǿ����ϴ�." << endl;
	}
};

// �ǽ�23. ������ �Ҹ��� ����غ���
class Exam23 {
private:
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
public:
	Exam23() {
		cout << "������!" << endl;
		for (i=0; i<10;i++) cout << arr[i]<<" ";
		cout << endl;
	}
	~Exam23() {
		cout << "�Ҹ���!" << endl;
		for (i = 9; i >= 0; i--) cout << arr[i] << " ";
		cout << endl;
	}
};
// �ǽ�23. ������ �Ҹ��� ����غ���  �� ������ �ڵ�
class testClass_23 {
private:
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
public:
	testClass_23 () {
		cout << "������!" << endl;
		for (int i = 0; i < 10; i++) cout << arr[i];
	}
	~testClass_23() {
		cout << "�Ҹ���!" << endl;
		for (int i = 9; i >= 0; i--) cout << arr[i];
	}
};

// ���սǽ�7. �ؾ �����
class Fish {
private:
	string inside;
	int price;
	int qty;

public:
	Fish() {
		cout << "�ؾ ����� ����!" << endl;
		cout << "===================" << endl;
	}
	~Fish() {
		cout << "�ؾ ����� ��!" << endl;
	}
	void order() {
		cout << "� ���� �������? : " << endl;
		cin >> inside;
		cout << "�� ���� ������ �󸶷� �ұ��" << endl;
		cin >> price;
		cout << "�� ���� ������ : " << endl;
		cin >> qty;
		cout << endl;
	}
	void info() {
		cout << "�ؾ ���� : " << endl;
		cout << "����� : "<< inside << endl;
		cout << "���� : "<< qty << endl;
		cout << "�� ���� : "<< price*qty<< endl;
	}
};



int main(){	 // main ---------------------------------------------------------------------------------------
	/*
	///////////////////////////////////////////////////
	// �ǽ�21. �Լ� Ȱ���ϱ�
	// (1) ¦��/Ȧ�� ����ϱ�
	even(50);
	even(27);

	// (2) 3�� �� �� ���� ū �� ��ȯ�ϱ�
	cout << "5, 30, 12 �� ���� ū �� : " << max_num(5, 30, 12) << endl;


	///////////////////////////////////////////////////
	// ���սǽ�5. �迭�� ����ü Ȱ���ϱ�
	const int n = 3;
	Student students[n];
	string sc1, sc2, sc3 = "";
	float avg[n] = {0,};
	float max = 0.0;
	string max_name = "";
	for (int i = 0; i < n; i++) {
		cout << i+1 << "�� �л��� �̸��� �Է��ϼ��� : ";
		cin >> students[i].name;
		cout << students[i].name << "�� 3���� ������ �Է��ϼ��� : ";
		cin >> sc1 >> sc2 >> sc3;
		students[i].scores[0] = stoi(sc1);
		students[i].scores[1] = stoi(sc2);
		students[i].scores[2] = stoi(sc3);
		avg[i] = (students[i].scores[0] + students[i].scores[1] + students[i].scores[2]) / n;
	}
	max = avg[0];
	max_name = students[0].name;
	for (int i = 0; i < n; i++) {
		cout << students[i].name << "�� ��� ���� : " << avg[i] << endl;
		if (avg[i] > max) {
			max = avg[i];
			max_name = students[i].name;
		}		
	}
	cout << "1�� : " << max_name << " (��� ���� : " << max << ")" << endl;
	



	///////////////////////////////////////////////////
	// ���սǽ�6. ��Ģ���� �Լ� �����
	// (5) main�Լ����� �Լ� ���ϰ� ���� ���
	cout << "1) add(15, 5)�� ���ϰ� : " << add(15, 5) << endl;
	cout << "2) sub(15, 5)�� ���ϰ� : " << sub(15, 5) << endl;
	cout << "3) mul(15, 5)�� ���ϰ� : " << mul(15, 5) << endl;
	cout << "4) divide(15, 5)�� ���ϰ� : " << divide(15, 5) << endl;
	cout << "4) divide(15, 4)�� ���ϰ� : " << divide(15, 4) << endl;
	cout << "4) divide_f(15, 4)�� ���ϰ� : " << divide_f(15, 4) << endl;


	*/


	/*
	// Ŭ���� ----------------------------------------------------------------------------------
	CalClass cc1, cc2;
	cc1.set_val(3);
	cc1.inc_val(3);
	cc1.print_val();

	cc1.dec_val(3);
	cc1.print_val();


	// ����22. Ŭ������ ���� ������
	Calculator c[3] = { };
	int n1, n2 = 0;
	char oper = ' ';
	for (int i = 0; i < 3; i++) {
		cout << "����1, ������(+ - * /), ����2�� �Է��ϼ��� : ";
		cin >> n1 >> oper >> n2;
		c[i].calculator(n1, oper, n2);
		c[i].print_calculrator();
	}
	// ����22. Ŭ������ ���� ������  �� ������ �ڵ�
	calClass c1;
	int i = 0;
	while (i < 3) {
		c1.input();
		c1.calcul();
		c1.print();
		i++;
	}
	// this ----------------------------------------------------------------------------------
	int;
	
	// Ŭ���� : ������ ----------------------------------------------------------------------------------
	testClass tC1;
	testClass tC2(5, 3);		// �Ű������� ���� �ٸ� �����ڸ� ������ �� ����



	// �ǽ�23. ������ �Ҹ��� ����غ��� (main�Լ� ��)
	Exam23 a;

	*/

	// ���սǽ�7. �ؾ ����� (main�Լ� ��)
	Fish f1;
	f1.order();
	f1.info();

	return 0;
}

#endif



	/*
	// ����ü ���սǽ�5. �迭�� ����ü Ȱ���ϱ�   �� ������ �ڵ� 
	// ����ü ���� (main�Լ� ��)
	struct Student {
		string name;
		float scores[3];
	
	// ����ü ���๮ (main�Լ� ��)
	Student students[3];
	float avgs[3] = {0, };
	float max_val = 0;
	for (int i=0; i<3; i++) {
		cout << i+1 << "�� �л��� �̸��� �Է��ϼ��� : ";
		cin >> students[i].name;
		cout << students[i].name<<"�� 3���� ������ �Է��ϼ��� : ";
		cin >> students[i].score[0] >> students[i].score[1] >> students[i].score[2];   // <- string�� �����̽��� �ٷ� float ������ �־ ��
	}
	for (int j=0; j<3; j++){
		float avg = 0;
		avgs[i] = (students[j].score[0]+students[j].score[1]+students[j].score[2])/3;
		cout << students[j].name << "�� ��� ���� : " << avg << endl;
	}
	int index = 0;
	if (avg[0] > avg[1]){
		max_val = avgs[0];
		index = 0;
	}else{
		max_val = avgs[1];
		index = 1;
	}
	if (avg[1] > avg[2]){
		max_val = avgs[1];
	}else{
		max_val = avgs[2];
	}
	cout << "1�� : " << students[index].name <<"(��� : << max_val <<")" << endl;
	
	
	*/


	/*
	// �Լ� ----------------------------------------------------------------------------------
	cout<< "������ : "<< sensor_cal(50, 5) << endl;
	motor_speed(5,200);
	*/