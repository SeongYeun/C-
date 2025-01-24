#include <iostream>
#include <string>
using namespace std;


/*
// �ǽ�32. Ŀ���� ���ڿ� �Լ� �����
void InputStr() {
	//const int len_str;
	string temp="";
	int len = 0;
	bool flag = true;
	char* inputstr = new char[100];
	cout << "���ڿ��� �Է��ϼ��� : ";
	getline(cin, *inputstr);
	len_str = sizeof(*inputstr) / sizeof(inputstr[0]);
	cout << "�Է��� ���ڿ��� ���̴� : " << len_str<< endl;

}

*/


// �ǽ�32. Ŀ���� ���ڿ� �Լ� �����  �� ������ �ڵ�
int myLength(string& str) {
	bool flag = true;
	int i = 0;
	while (flag) {
		if (str[i] == 0) flag = false;
		else i++;
	}
	return i;
}

// �ǽ�32. Ŀ���� ���ڿ� �Լ� �����  �� copilot code
void len(char* str) {
	size_t len = strlen(str);
	// strlen()�� ���� �ڷ����� size_t�� ��ȣ���� ���������� int�� ���� ���� ū ������ �޺κ��� �սǵ� �� �ֱ� ������
	// unsigned long���� ��ȯ���ִ� ���� ������ �����
	cout << "�Է��� ���ڿ��� ���̴� : " << len << endl;
}



// ���սǽ�10. Ŀ���� �Է��Լ� �����
void InputStr() {
	bool flag = true;
	char ch;
	int idx = 0;
	char input_str[100];
	//char input_str[]="";	
	// ��> �̷��� ǥ���ϸ� �迭�� ũ����� ���ڿ��� �����߱� ������
	//	   �Էµ� ���ڿ��� ������ ������ ���� ���ѷ����� ������ ��
	cout << "���ڿ��� �Է��ϼ��� : ";
	while (flag) {
		ch = cin.get();
		//cout << ch << endl;
		if (ch == '\n') {		// �ܼ� �Է¿��� ����ڰ� ����Ű�� ġ�� ������ �񱳴���� NULL�� �ƴ� �ٹٲ�('\n')���� ����
			break;
		}
		else {
			input_str[idx] = ch;
		}
		idx++;
	}
	cout << "�Է��� ���ڿ� : ";
	for (int i=0; i<idx; i++)	cout << input_str[i];

}

// ���սǽ�10. Ŀ���� �Է��Լ� ����� �� ������ �ڵ�
char* custom_cin() {
	char ch;
	int n=5;
	int index = 0;
	bool flag=true;
	char* arr = new char[n];
	while (flag) {
		cin.get(ch);
		arr[index] = ch;

		if (arr[index] == '\n') {		// �Է��� �Ϸ������ �ݺ� ����
			arr[index] = 0;				// ���ڿ��� ���� ���
			flag = false;
		}
		index++;

		if (index >= n) {
			char* arr2 = new char[index + n];
			for (int i = 0; i < index; i++) arr2[i] = arr[i];
			delete[] arr;
			arr = arr2;
		}
	}
	return arr;
}

// �Լ� ������: �Լ��� ����Ű�� ������ -------------------------------------------------------------------------------------
void print(int num) {
	cout << "�Լ� ������ �׽�Ʈ" << endl;
	cout << "������ �� : " << num << endl;
}

// �ݹ��Լ� -------------------------------------------------------------------------------------
void myCallback_1(int result) {
	cout << "�ݹ� �Լ�_1�� ��µ� ��� : " << result << endl;
}
void myCallback_2(int result) {
	cout << "�ݹ� �Լ�_2�� ��µ� ��� : " << result << endl;
}
void perform(int a, int b, void(*callback)(int)) {
	int sum = a + b;
	callback(sum);
}

// �ǽ�33. �ݹ��Լ� ����غ���  (main�Լ� ��)
void Callback33(string result) {
	cout << "��ȯ�� ���ڿ�: " << result << endl;
}
void Perform33(string str, void(*callback_33)(string)) {
	int i = 0;
	while (str[i]) {
		str[i] = tolower(str[i]);
		i++;
	}
	callback_33(str);
}

// �ǽ�33. �ݹ��Լ� ����غ���  (main�Լ� ��) �� ������ �ڵ�
string Change(string &str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i]+32;
	}
	return str;
}
void Perform(string &str, string(*callback)(string&)) {
	string input = callback(str);
	cout << "��ȯ�� ���ڿ� : " << input << endl;

}
// ���ں� ASCII Code��
// A~Z : 65~90
// a~z : 97~122


// ���սǽ�11. ���� �����ϱ� (main�Լ� ��)
void Add_sy(int n1, int n2) {
	int result = n1 + n2;
	cout << "���� ���" << endl;
	cout << "��� : " << result << endl;
}
void Substraction_sy(int n1, int n2) {
	int result = n1 - n2;
	cout << "���� ���" << endl;
	cout << "��� : " << result << endl;
}void Multiple_sy(int n1, int n2) {
	int result = n1 * n2;
	cout << "���� ���" << endl;
	cout << "��� : " << result << endl;
}void Divide_sy(int n1, int n2) {
	float result;
	if (n2 == 0) cout << "0���� ���� �� �����ϴ�.";
	else {
		result= (float)n1 / n2;
		cout << "������ ���" << endl;
		cout << "��� : " << result << endl;
	}
}
void performOperation_sy(int a, int b, void(*callback)(int, int)) {
	callback(a, b);
}

// ���սǽ�11. ���� �����ϱ� (main�Լ� ��) �� ������ �ڵ�
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int performOperation(int a, int b, int(*callback)(int, int)) {
	int res = callback(a, b);
	return res;
}

#define M_0124
#ifdef M_0124
int main() {

	/*
	// �ǽ�32. Ŀ���� ���ڿ� �Լ� �����
	//InputStr();

	// �ǽ�32. Ŀ���� ���ڿ� �Լ� �����  �� ������ �ڵ�
	string str;
	cout << "���ڿ��� �Է��ϼ��� : ";
	getline(cin, str);
	int length = myLength(str);
	cout << "�Է��� ���ڿ��� ���̴� : " << length << endl;

	// �ǽ�32. Ŀ���� ���ڿ� �Լ� �����  �� copilot code
	char* str_co = new char[100];
	cout << "���ڿ��� �Է��ϼ��� : ";
	cin.getline(str_co, 100);
	len(str_co);
	delete str_co;

	// ���սǽ�10. Ŀ���� �Է��Լ� �����
	InputStr();



	// ������ ȥ�� ����
	//int value = 7;
	//int* ptr = &value;
	//cout << "value : " << value << endl;			// 7
	//cout << "&value : " << &value << endl;			// 000000A70034F524
	//cout << "*ptr : " << *ptr << endl;				// 7
	//cout << "ptr : " << ptr << endl;				// 000000A70034F524
	

	int arr[] = { 9,5,3,2,1 };
	int* ptr_arr = arr;
	cout << *(ptr_arr + 0) << endl;		// 9
	cout << *(ptr_arr + 1) << endl;		// 5
	cout << *(ptr_arr + 2) << endl;		// 3
	cout << *(ptr_arr + 3) << endl;		// 2
	cout << *(ptr_arr + 4) << endl;		// 1

	cout << "(uintptr_t)(ptr_arr) : " << (uintptr_t)(ptr_arr) << endl;		// 315234448712
	cout << "(uintptr_t)(&arr) : " << (uintptr_t)(&arr) << endl;			// 315234448712
	cout << "(uintptr_t)(&arr[0]) : " << (uintptr_t)(&arr[0]) << endl;		// 315234448712

	cout << "sizeof(arr) : "<<sizeof(arr) << endl;				// 20
	cout << "sizeof(arr[0]) : "<<sizeof(arr[0]) << endl;		// 4
	cout << "sizeof(&arr[0]) : " << sizeof(&arr[0]) << endl;	// 8
	cout << "sizeof(ptr_arr) : " << sizeof(ptr_arr) << endl;	// 8
	*/

	/*
	C++���� string str = "hello";��� �ڵ带 ���� �鶧 
	str�� �Ҵ��� ���ڿ� �ȿ��� �� ���ڿ� ���� �ε������� ������ �����ѵ� 
	string ������ �ּҰ��� �̿��ؼ� ������ ������ �̿��ؼ� ���� ������ �ȵǴ��� ���ο� �� ����

	>> copliot �亯
	C++���� std::string Ŭ������ ���ڿ��� ���� ���ϰ� �ٷ�� ���� ����� Ŭ�����Դϴ�. 
	std::string ��ü ���ο����� ���ڿ� �����͸� ���� �迭�� �����ϸ�, 
	�̸� ���� ���ڿ��� ũ�⸦ �����ϰ� ������ �� �ֽ��ϴ�.

	�⺻������ std::string ��ü�� �ε����� �̿��� ���� ���ڿ� ������ �� �ֽ��ϴ�. 
	���� ���, str[0]�� ����ϸ� str�� ����� ù ��° ���� 'h'�� ������ �� �ֽ��ϴ�.
	
	������, std::string ��ü�� �ּҰ��� ������ ������ ���� ���� �����Ϸ��� �ϸ� ������ �߻��� �� �ֽ��ϴ�. 
	�� ������ std::string�� ���������� ���� �����͸� �����ϴ� ����� �ܼ��� C ��Ÿ�� ���ڿ��� �ٸ��� �����Դϴ�.
	
	std::string ��ü�� �������� �޸� ��Ͽ� ���ڿ� �����͸� ����������, 
	��ü�� �ּҰ��� ���ڿ� �������� �ּҰ��� �ٸ��ϴ�. 
	std::string ��ü�� �ּҰ��� ��ü ��ü�� �ּҸ� ����Ű��, 
	��ü ������ ù ��° ���ڿ� �����Ϸ��� ��ü�� ������ ����� �����ؾ� �մϴ�. 
	�̸� ���� c_str() �Ǵ� data() ��� �Լ��� ����� �� �ֽ��ϴ�.
	c_str() �Լ� ��� : C��� ��Ÿ���� ���ڿ��� ��ȯ�ϴ� �Լ�
						�� �Լ��� const char*�� ��ȯ�ϱ� ������ ������ ������ �Ұ�����

	==== ���� �ڵ� : string ���ڿ��� �����͸� �̿��� ����====
	string str = "hello";
	const char* cstr = str.c_str();
	while (*cstr) {
		cout << *cstr << " ";
		++cstr;
	}
	cout << endl;



	// ���սǽ�10. Ŀ���� �Է��Լ� ����� �� ������ �ڵ�
	//char ch;
	//cin.get(ch);
	//cout << "���� ��� : " << ch << endl;		// �Է��� ���ڿ��� ù ���ڸ� ��µ�
	cout << "���ڿ��� �Է��ռ��� : ";
	char* input = custom_cin();
	cout << "�Է��� ���ڿ� : " << input << endl;
	delete[] input;
	*/



	// �Լ� ������: �Լ��� ����Ű�� ������ -------------------------------------------------------------------------------------
	/*
	// �Լ������� ����
	void (*fun_ptr)(int) :

	// �Լ������� �ּҰ� �Ҵ�
	fun_ptr = &fun;

	// �Լ������� ���
	(*fun_ptr)(3);
	
	//void print(int num) �Լ� ���ǵ� ���¿���
	void(*point_f)(int);	// �Լ� ������ ���� : ����Ÿ��(�����ͺ�����)(�Ű�����Ÿ��)

	point_f = print;		// <- &��� ���� �۵���
	//point_f = &print;
	//point_f = *print;		// <- *�־ ���� �۵���
	//point_f = **print;		// <- **�־ ���� �۵���   (�����Ϳ� �Լ� ����)
	// ��> ���� 3������ ��� �����۵��ϴ� ������ �����Ϸ��� �����ϰ� �Ͻ������� ��ȯ�ϱ� ������ 
	//     ������ ������(*) �ϴ��� ��� ����� ������
	
	//(*point_f)(3);			// 3
	point_f(3);					// 3		<- point_f�� print �Լ��� �ּҸ� ����Ű�Ƿ� print�Լ��� ȣ����
	//&point_f(3);				// ���� �߻�
	cout << endl;


	// �ݹ��Լ� -------------------------------------------------------------------------------------
	//void myCallback_1(int result) 
	//void myCallback_2(int result)
	//void perform(int a, int b, void(*callback)(int))
	perform(1, 2, myCallback_1);		// 3
	perform(4, 5, myCallback_2);		// 9
	cout << endl;

	// �ǽ�33. �ݹ��Լ� ����غ��� (main�Լ� ��)
	string input_str_33;
	cout << "���ڿ��� �Է��ϼ��� : ";
	getline(cin, input_str_33);
	Perform33(input_str_33, Callback33);

	// �ǽ�33. �ݹ��Լ� ����غ��� (main�Լ� ��)  �� ������ �ڵ�
	string input_str;
	cout << "���ڿ��� �Է��ϼ���. : ";
	getline(cin, input_str);
	Perform(input_str, Change);
	cout << endl;




	// ���սǽ�11. ���� �����ϱ� (main�Լ� ��)
	int n1, n2;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> n1 >> n2;
	performOperation_sy(n1, n2, Add_sy);
	performOperation_sy(n1, n2, Substraction_sy);
	performOperation_sy(n1, n2, Multiple_sy);
	performOperation_sy(n1, n2, Divide_sy);
	*/

	// ���սǽ�11. ���� �����ϱ� (main�Լ� ��)  �� ������ �ڵ�
	int sum = performOperation(5,3, add);
	cout << "���� ���" << endl;
	cout << "��� : "<< sum<<endl;
	int min = performOperation(5, 3, sub);
	cout << "���� ���" << endl;
	cout << "��� : " << min << endl;



	return 0;
}
#endif