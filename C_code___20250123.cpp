#include <iostream>
#include <string>

using namespace std;

void callByValue_1(int n1, int n2) {
	n1 = 10;
	n2 = 20;
	cout << n1 << " " << n2 << endl;

}
int callByValue_2(int n1, int n2) {
	n1 = 10;
	n2 = 20;
	cout << n1 << " " << n2 << endl;
	return n1;
}
void callByRef_1(int &n1, int &n2) {
	n1 = 10;
	n2 = 20;
	cout << n1 << " " << n2 << endl;

}
void callByRef_2(int* n1, int* n2) {
	*n1 = 30;
	*n2 = 50;

	cout << n1 << " " << n2 << endl;

}
// �ǽ�30. ���� ������ �����غ��� (main ��)
void inputNums(int* n1, int* n2, int* iter) {
	cout << "ù ��° ���ڸ� �Է��ϼ��� : ";
	cin >> *n1;
	cout << "�� ��° ���ڸ� �Է��ϼ��� : ";
	cin >> *n2;
	cout << "���� ������ų ȹ���� �Է��ϼ��� : ";
	cin >> *iter;
	cout << "�Էµ� �� : ù ��° ���� : " << *n1 << ", �� ��° ���� : " << *n2 << ", ���� Ƚ�� : " << *iter << "\n" << endl;
}
void IncSumNums(int* n1, int* n2, int* sum) {
	(*n1)++;
	(*n2)++;
	*sum = *n1 + *n2;
}


// �ǽ�30. ���� ������ �����غ��� (main ��)  �� ������ �ڵ�
void input(int &x, int& y, int& z) {
	cout << "ù ��° ���ڸ� �Է��ϼ��� : ";
	cin >> x;
	cout << "�� ��° ���ڸ� �Է��ϼ��� : ";
	cin >> y;
	cout << "���� ������ų Ƚ���� �Է��ϼ��� : ";
	cin >> z;
	//cout << "�Էµ� �� : ù ��° ���� : ";

}
void increase(int& x, int& y, int& z) {
	for (int i = 0; i < z; i++) {
		x++;
		y++;
		int sum = x + y;
		cout << "���� " << i + 1 << "ȸ�� :" << endl;
		cout << "���� �� : ù ��° ���� : " << x << ", �� ��° ���� : " << y << endl;
		cout << "�� ������ �� : " << sum << endl;
	}
}





// ���սǽ�9. �������� �迭 �Ҵ��� �Է��ϱ�
class ControlArr {
private:
	//int* arr;
	int* arr = nullptr;			// <- 1�� �ʱ�ȭ
	// nulptr : C++11���� ���Ե� Ű����, �����Ͱ� � ��ȿ�� �ּҳ� ��ü�� ����Ű�� ������ ����ϱ� ���� ���.
	// nulptr : ������ ������ ���� null��
	int input, n;
	bool flag = true;

public:
	ControlArr() {
	//�ʱ� �迭 ����
	n = 3;
	//int* arr = new int[n];
	arr = new int[n];			// <- private���� nullptr�� ���� �� �����ڿ��� �߰� �ʱ�ȭ �۾�
	for (int i = 0; i < n; i++) arr[i] = 0;		// <- �迭 ��� (�ʱ�ȭ�� �ƴ�)
	cout << *arr << endl;
	cout << "�迭�� ũ�⸦ 3�� �ʱ�ȭ �߽��ϴ�.\n" << endl;
	cout << "1: ���� �迭 ���" << endl;
	cout << "2: �迭�� ��� �߰�" << endl;
	cout << "3: �迭�� ������ ��� ����" << endl;
	cout << "0: ����\n" << endl;
	
	while (flag) {
		cout << "����� �Է� �ϼ���: ";
		cin >> input;
		switch (input) {
		case 0:		//0: ���� ����
			cout << "���α׷��� �����մϴ�." << endl;
			flag = false;
			break;
		case 1:		//1: ���� �迭 ��� ���
			print_element(arr, n);
			break;
		case 2:		//2: �迭 �ϳ� �߰��ϰ� �� �Է�
			add_elem(arr);
			break;
		case 3:		//3: �迭 �ϳ� �����ϰ� ������ ���� ���� �迭 ���
			del_elem(arr);
			break;
		}
	}
	}
	~ControlArr() {
		delete[] arr;
		cout << "�迭 �޸𸮰� �����Ǿ����ϴ�." << endl;
	}
	//1: ���� �迭 ��� ���
	void print_element(int* arr, int n) {
		cout << "���� �迭 : ";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	//2: �迭 �ϳ� �߰��ϰ� �� �Է�
	void add_elem(int* arr) {
		int add_num;
		cout << "�߰��� ���� �Է��ϼ��� : ";
		cin >> add_num;
		n++;
		arr[n - 1] = add_num;
		cout << "�� " << add_num << "�� �迭�� �߰��߽��ϴ�." << endl;
		print_element(arr, n);
	}
	//3: �迭 �ϳ� �����ϰ� ������ ���� ���� �迭 ���
	void del_elem(int* arr) {
		n--;
		cout << "������ ��Ҹ� �����߽��ϴ�."<<endl;
		cout << "���ο� �迭: " ;
		print_element(arr, n);
	}
};

// ���սǽ�9. �������� �迭 �Ҵ��� �Է��ϱ� (main�Լ� ��) �� ������ �ڵ�
class ArrClass {
private:
	int n = 3;
	int* arr;
public:
	ArrClass() {
		arr = new int[n];
		cout << "�迭�� ũ�⸦ "<<n<<"���� �ʱ�ȭ�߽��ϴ�.\n" << endl;
		for (int i = 0; i < n; i++) arr[i] = 0;
	}
	void Add() {
		int input_val;
		n++;
		int* arr2 = new int[n];
		for (int i = 0; i < n; i++) arr2[i] = arr[i];
		cout << "�߰��� ���� �Է��ϼ��� : ";
		cin >> input_val;
		arr2[n - 1] = input_val;

		delete[] arr;	// <- �߰� �� �迭 ����
		arr = arr2;		// <- �迭 ù ���� �ּҰ��� ����
		// delete[] arr2;	// <- arr2�� �����ϸ� arr�� ���󰡾��� �ּҰ��� �������� trash value�� ��µ�
		// �ᱹ�� �迭 ������ 2���� ����ϰ� �ǰ� arr2 �����Ͱ� �߰��ٸ� �����̰�
		// arr�� �����Ͱ��� ���� �����ϴ°� �ƴ�

		cout << n << "��° �迭�� ���� �߰� �߽��ϴ�." << endl;
		Print();
	}	
	void Remove() {
		n--;
		int* arr2 = new int[n];
		for (int i = 0; i < n; i++) arr2[i] = arr[i];
		delete[] arr;
		arr = arr2;
		cout << "������ ��Ҹ� �����߽��ϴ�." << endl;
		Print();
	}
	void Print() {
		cout << "���� �迭 : ";
		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
	}
	~ArrClass() {
		delete[] arr;		// <- arr�� delete�ص� arr ����Ű�� data�� �����Ǹ鼭 arr2�� �ڵ������� �Ҹ�Ǵ� ȿ���� ����
		cout << "�迭 �޸𸮰� �����Ǿ����ϴ�." << endl;
	}
};

/* ���� �迭 �ùٸ� ���� ���
void Add() {
	int input_val;
	n++;
	int* arr2 = new int[n];
	for (int i = 0; i < n - 1; i++) arr2[i] = arr[i];  // �ùٸ� ����

	cout << "�߰��� ���� �Է��ϼ��� : ";
	cin >> input_val;
	arr2[n - 1] = input_val;

	delete[] arr;    // ���� �迭 ����
	arr = arr2;      // ���ο� �迭 �ּ� �Ҵ�

	cout << n << "��° �迭�� ���� �߰� �߽��ϴ�." << endl;
	Print();
}

*/

// �ǽ�31. ���ڿ� ��ġ��   �� ������ �ڵ�
int calsize(const char* str) {
	int i = 0;
	while(str[i]!=0){
		i++;
	}
	return i;
}

char* glue(const char* str1, const char* str2) {
	//g = str1 + str2;
	int str1_len = calsize(str1);
	int str2_len = calsize(str2);
	char* str_total = new char[str1_len + str1_len + 1];
	for (int i = 0; i < str1_len; i++) str_total[i] = str1[i];
	for (int i = 0; i < str2_len; i++) str_total[str1_len+i] = str2[i];
	str_total[str1_len + str1_len + 1] = 0;
	return str_total;
}



//#define M_0125
#ifdef M_0125
int main() {
	/*
	// call by value (�� ���纻 ����) -------------------------------------------------------------------------------------
	int x = 5;
	int y = 3;
	int* p_x = &x;
	int* p_y = &y;
	int res = callByValue_2(x, y);
	callByValue_1(x, y);					// 10 20
	cout <<"call by value_1 �� ������ : " << x << " " << y << endl;		// 5 3		<-- x, y���� ���纻�� �Լ��� �Ű������� ���޵����� �ǹ�
	cout << "call by value_2 �� ������ : " <<res << endl;// 10


	// call by reference (�ּҰ� ����) -------------------------------------------------------------------------------------
	callByRef_1(x, y);					// 10 20
	cout << "call by reference �� ������ : " << x << " " << y << endl;		// 10 20	<-- x, y�� �ּҰ��� �����ؼ� �Լ� ������ ���� ���Ҵ�

	callByRef_2(p_x, p_y);					// 00000034C3D8FAE4 00000034C3D8FB04
	cout << "call by reference �� ������ : " << x << " " << y << endl;		// 30 50	<-- x, y�� �ּҰ��� �����ؼ� �Լ� ������ ���� ���Ҵ�


	// �ǽ�30. ���� ������ �����غ���
	int n1, n2, iter, sum = 0;
	int* p_n1 = &n1;
	int* p_n2 = &n2;
	int* p_iter = &iter;
	int* p_sum = &sum;

	inputNums(p_n1, p_n2, p_iter);

	for (int i = 0; i < *p_iter; i++) {
		IncSumNums(p_n1, p_n2, p_sum);
		cout << "���� " << i + 1 << "ȸ�� : " << endl;
		cout << "���� �� : ù ��° ���� : " << *p_n1 << ", �� ��° ���� : " << *p_n2 << endl;
		cout << "�� ������ �� : " << *p_sum << endl;
	}

	// �ǽ�30. ���� ������ �����غ���  �� ������ �ڵ�
	int x, y, z;
	input(x, y, z);
	increase(x, y, z);



	// ���սǽ�9. �������� �迭 �Ҵ��� �Է��ϱ� (main�Լ� ��)
	ControlArr arr1;

	
	// ���սǽ�9. �������� �迭 �Ҵ��� �Է��ϱ� (main�Լ� ��)  �� ������ �ڵ�
	ArrClass AC;
	bool flag = true;
	int cmd;
	cout << "1: ���� �迭 ���" << endl;
	cout << "2: �迭�� ��� �߰�" << endl;
	cout << "3: �迭�� ������ ��� ����" << endl;
	cout << "0: ����" << endl;
	while (flag) {
		cout << "����� �Է��ϼ��� : " ;
		cin >> cmd;
		switch (cmd) {
		case 0:
			flag = false;
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		case 1:
			AC.Print();
			break;
		case 2:
			AC.Add();
			break;
		case 3:
			AC.Remove();
			break;
		}
	}
	*/

	/*
	int* arr = new int[5];
	int* p_arr = new int[5];
	for (int i = 0; i < 5; i++) arr[i] = i;
	arr[5] = 10;
	
	for (int i = 0; i < 6; i++) {
		cout<<arr[i]<<endl;
		p_arr[i] = &arr[i];
	}
	delete[] arr;
	for (int i = 0; i < 6; i++) cout << arr << endl;
	cout << *arr << endl;


	// ���ڿ��� ������ -------------------------------------------------------------------------------------
	char str[] = "helloworld";
	const char str2[] = "helloworld";				// <-- const�� ���̸� ���� �Ұ����°� ��
	char* p = str;									// p -> str
	//char* p2 = str2;								// �����߻� : "const char *" ������ ���� ����Ͽ� "char"������ ����Ƽ�� �ʱ�ȭ�� �� �����ϴ�.
	cout << "ù ��° ���� : " << *p << endl;		// h
	cout << "�� ��° ���� : " << *p+2 << endl;		// 106  (h�� ASCII���� 104�� 2�� ���� ���� 106�� ��µ�
	cout << "�� ��° ���� : " << *(p + 2) << endl;	// l (���� �ҹ��� l�� ��µ�)
	p[0] = 'H';
	//str2[0] = 'H';									// �����߻� : ���� ������ �� �ִ� value���� �մϴ�.
	cout << "���� �� ���ڿ� : " << str << endl;		// Helloworld



	// �ǽ�31. ���ڿ� ��ġ��
	char str1[] = "hello";
	char str2[] = "world";
	char* p_st1 = str1;
	char* p_st2 = str2;
	cout << "������ ���ڿ� : ";
	for (int i = 0; i < 10; i++) {
		if (i < 5) cout << *(p_st1 + i);
		else cout << *(p_st2 + (i-5));
	}
	*/

	// �ǽ�31. ���ڿ� ��ġ��   �� ������ �ڵ�
	const char* str1 = "hello";
	const char* str2 = "world";
	//cout<< "str1�� ũ�� : "<< calsize(str1);
	char* str_print = glue(str1, str2);
	cout << "������ ���ڿ� : " << str_print << endl;


	// �ǽ�32. Ŀ���� ���ڿ� �Լ� �����


	// ���սǽ�10. Ŀ���� �Է��Լ� �����




	return 9;
}

#endif