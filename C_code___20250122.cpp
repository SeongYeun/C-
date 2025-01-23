#include <iostream>
#include <string>

using namespace std;

//#define MAIN0122
#ifdef MAIN0122
// �ǽ�27. ������ ����غ���

char char_sum(char* ch, int delta) {
	*ch += delta;
	return *ch;
}
int int_sum(int* in, int delta) {
	*in += delta;
	return *in;
}
float float_sum(float* fl, int delta) {
	*fl += delta;
	return *fl;
}
// �ǽ�27. ������ ����غ���  �� ������ �ڵ�

void charInc(char* p)
{
	(*p)++;
	cout << "char ���� �� : " << *p << endl;
}
void intInc(int* p)
{
	(*p)++;
	cout << "int ���� �� : " << *p << endl;
}
void floatInc(float* p)
{
	(*p)++;
	cout << "float ���� �� : " << *p << endl;
}
void charDec(char* p)
{
	(*p)--;
	cout << "char ���� �� : " << *p << endl;
}
void intDec(int* p)
{
	(*p)--;
	cout << "int ���� �� : " << *p << endl;
}
void floatDec(float* p)
{
	(*p)--;
	cout << "float ���� �� : " << *p << endl;
}




//////////////////////////////////////////////////////////////////////////////////////
int main() {
	/*
	// ������ -------------------------------------------------------------------------------------
	char val1 = 5;
	char val2 = 5;
	char val3 = 'a';
	float val4 = 120.1;

	char* p_v1 = &val1;
	char* p_v2 = &val2;
	char* p_v3 = &val3;
	float* p_v4 = &val4;
	// cout�� �����Ͱ� ��½� ���ڿ� �������� �ؼ��ϸ鼭 trash value ��µ� �� ����
	// char ������ ������ ����� �� �����Ͱ��� trash vlaue�� ��ȯ�Ǵ� ������ ���� �߻�
	// char �����͸� cout���� ����ϸ� ���ڿ��� �ؼ��Ǳ� ������ trash value ��µ�
	// 1) �޸� �ּҸ� ���������� ĳ����
	// static_cast<void*>(p_v1)
	// 2) ������ ���
	// *p_v1

	cout << "1) ���� ��      : " <<  val1 << endl;
	cout << "1) ������ ��    : " << static_cast<void*>(p_v1) << endl;
	cout << "1) ������ �� *  : " << *p_v1 << endl;
	cout << "2) ���� ��      : " <<  val2 << endl;
	cout << "2) ������ �� static_cast<void*>   : " << static_cast<void*>(p_v1) << endl;
	cout << "2) ������ �� (void*)   : " << (void*)(p_v1) << endl;
	cout << "2) ������ �� *  : " << *p_v2 << endl;
	cout << "3) ���� ��      : " <<  val3 << endl;
	cout << "3) ������ ��    : " << static_cast<void*>(p_v3) << endl;
	cout << "3) ������ �� *  : " << *p_v3 << endl;
	cout << "4) ���� ��      : " <<  val4 << endl;		// 120.1
	cout << "4) ������ ��    : " <<  p_v4 << endl;		// 000000F446CFF584
	cout << "4) ������ �� *  : " << *p_v4 << endl;		// 120.1


	//// ���ڿ�, �迭 �� trash value
	char str_arr_1[] = { 'h','e','l','l','o' };
	char str_arr_2[] = { 'h','e','l','l','o','\0' };
	// ���ڿ� �迭���� ���������� null�̿��� �ؼ� \0�� �Է������ ��
	// \0�̳� ����ǥ ���� 0 ������ ������ ���� �ڿ� ���� ��µȴ�.
	// ��������(main�Լ� ��)�� �ڵ����� 0���� �ʱ�ȭ�Ǳ� ������ trash ���� �ȳ�������
	// ��������(main�Լ� ��)�� �ڵ����� 0���� �ʱ�ȭ�Ǳ� �ʱ� ������ trash ���� ����
	// ���ڿ� ������ ������ �ʴ� \0 �Ǵ� null���� �־ �� ���� ���ؼ� ���ڿ��� ���� �ν��Ѵ�.
	string str5(str_arr_1);
	string str6(str_arr_2);

	cout << "str5 : " << str5 << endl;			// hello��������������������������?ello
	cout << "str6 : " << str6 << endl;			// hello

	int i = 0;
	string str = "hello";
	char c_arr[] = {'h','e','l','l','o', NULL};

	cout << str[5] << endl;
	//cout << str[6] << endl;
	if (str[5] == 0) {
	cout << "str[5] �� 0 �Դϴ�." << endl;		// <- �ش� ������ ��µ�
	}
	cout << str << endl;		//	hello
	cout << c_arr << endl;		//	hello

	*/

	/*


	int arr[3] = { 1,2,3 };
	int* p_val1 = NULL;
	p_val1 = arr;
	(*p_val1)++;
	(*p_val1+=1)++;
	cout << "1) arr    : " << arr << endl;


	cout << "1) ������ ��    : " << p_val1 << endl;			// 0000005ED36FF9E8
	cout << "1) ������ �� *  : " << *p_val1 << endl;		// 4


	// �ǽ�27. ������ ����غ���
	char ch = 'A';
	int in = 10;
	float fl = 5.5;

	char* v1 = &ch;
	int* v2 = &in;
	float* v3 = &fl;

	cout << "char ���� �� : " << char_sum(v1, 1) << endl;
	cout << "int ���� �� : " << int_sum(v2, 1) << endl;
	cout << "float ���� �� : " << float_sum(v3, 1)<< endl;
	cout << "char ���� �� : " << char_sum(v1, -1) << endl;
	cout << "int ���� �� : " << int_sum(v2, -1) << endl;
	cout << "float ���� �� : " << float_sum(v3, -1) << endl;


	// �ǽ�27. ������ ����غ���  �� ������ �ڵ�

	char ch = 'A';
	int i = 10;
	float f = 5.5;
	charInc(&ch);
	intInc(&i);
	floatInc(&f);
	charDec(&ch);
	intDec(&i);
	floatDec(&f);


	// ���� �迭 -------------------------------------------------------------------------------------
	int* arr_0 = new int[10];
	arr_0[0] = 10;
	cout << "�����迭 : " << arr_0[0] << endl;		// �����迭 : 10
	cout << "�����迭 : " << arr_0 << endl;			// �����迭 : 0000017652964C00
	cout << "�����迭 : " << *arr_0 << endl;

	int h = 0;
	cout << "���ڸ� �Է� �Ͻÿ� : ";
	cin >> h;
	int* arr = new int[h];
	int m = h;
	arr[0] = 0;
	for (int i = 0; i < h; i++) {
		m += 2;
		arr[i] = m;
		cout << "arr[" << i << "] : " << arr[i] << endl;
	}
	arr[h-1] = 5;
	cout << arr[h-1] << endl;							// 5
	delete[] arr;
	*/




	/*
	// �ǽ�28. �����迭 ����غ���
	int n=0;
	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	cin >> n;
	int *arr = new int[n];

	cout << n << "���� ���� �Է��ϼ���:" << endl;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° �� : ";
		cin >> arr[i];
	}
	cout << "�Էµ� �迭�� �� : ";
	for (int j = 0; j <n; j++) {
		cout << arr[j] << " ";
	}
	delete[] arr;


	// �ǽ�28. �����迭 ����غ��� �� ������ �ڵ�
	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	int num;
	cin >> num;

	cout << num<<"���� ���� �Է��ϼ��� : "<< endl;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° �� : ";
		cin >> arr[i];
	}
	cout << "�Էµ� �迭�� �� : ";
	for (int j = 0; j < num; j++) {
		cout << arr[j] <<" ";
	}

	*/


	/*
	// 2���� ���� �迭 -------------------------------------------------------------------------------------
	int s_arr[2][3] = {};
	int val;
	cout <<"�迭 ũ�⸦ �����ϼ���" << endl;
	cin >> val;

	// �� ����
	int** arr2 = new int* [val];

	// �� ����
	for (int i = 0; i < val; i++) {
		arr2[i] = new int[val];
	}
	
	// �迭 ���(�� �Ҵ�)
	for (int i = 0; i < val; i++) {
		for (int j = 0; j < val; j++) {
			arr2[i][j] += 1;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	// �� ����
	for (int i = 0; i < val; i++) {
		delete[] arr2[i];
	}

	// �� ����
	delete[] arr2;



	// �������� ������
	int val1 = 10;
	int* p = &val1;
	int** pp = &p;
	cout << "val1 �� : "<< val1 << endl;
	cout << "p�� �ּ� �� : "<< p << endl;
	cout << "p�� ������ �� : " << *p << endl;
	cout << "pp�� �ּ� �� : "<< pp << endl;
	cout << "pp�� ������ �� : " << **pp << endl;

	int s_arr[5][5] = {
		{ 1,2,3,4,5 }, { 6,7,8,9,10 },
	};
	int* p_arr = &s_arr[0][0];
	int** pp_arr = &p_arr;
	// 8���� ����
	cout << "p�� �ּ� �� : " << *(p_arr +7) << endl;


	// �����迭 vs �����迭
	int s_arr[5] = { 0, };
	int* p_a = new int[5];

	int* p = NULL;
	double* d = NULL;


	cout << "���� �迭�� ũ�� : " << sizeof(s_arr) << endl;			// 20  : �迭�� ũ��(����Ʈ �� = 4(int) * 5)
	cout << "���� �迭�� ũ�� : " << sizeof(p_a) << endl;			// 8   : �ּҰ��� ũ��(����Ʈ ��) 
	cout << "������ p_a ũ�� : " << sizeof(p_a) << endl;			// 8   : �ּҰ��� ũ��
	cout << "������ P ũ�� : " << sizeof(p) << endl;				// 8   : �ּҰ��� ũ��
	cout << "������ d ũ�� : " << sizeof(d) << endl;				// 8   : �ּҰ��� ũ��

	// ������ �Ҵ��� �߸��� ��
	p_a[100] = 10;
	cout << "���� �迭�� ����Ʈ �׽�Ʈ p_a[100] : " << p_a[100] << endl;			// 10
	// �޸� �ּҴ� �迭�� �Ҵ�� ������� �̹� �ִ� �����̱� ������ �ּҰ��� �Ҵ�� ���� ��µ�
	// �Ҵ��� ������ ���� �ǵ��� �迭�δ� ������ �� ����

	// ������ �ʹ� ���� �ݺ��ǰų� ���� ���� �ʹ� Ŀ���� trash value�� ��ȯ�Ǵ� ��찡 ����
	// �̷����� ���� ���α׷�/������ �����ϰ� ���� ���α׷�/������ �ϸ� ���� ���ɼ��� ���� �� ����

	int size = 5;
	int* arr = new int[size];

	// ���� �迭 �ʱ�ȭ
	for (int i = 0; i < size; ++i) {
		arr[i] = i + 1;
	}

	// ���� �ʰ� �������� ���� garbage value
	for (int i = 0; i < size + 5; ++i) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	// ��� ��
	// arr[0] = 1
	// arr[1] = 2
	// arr[2] = 3
	// arr[3] = 4
	// arr[4] = 5
	// arr[5] = -33686019		// <- arr ���� ����鼭 ���� garbage value�� return��
	// arr[6] = 207421294
	// arr[7] = -2147474432
	// arr[8] = -572662307
	// arr[9] = -572662307
	
	// �޸� ����
	delete[] arr;


	// �ǽ�29. 2���� �����迭 ����غ���
	int row, col = 0;
	bool flag = true;

	// �迭 ũ�� �Է¹ޱ�
	while (flag) {
		cout << "x�� �Է��ϼ��� : ";
		cin >> row;
		cout << "y�� �Է��ϼ��� : ";
		cin >> col;
		if ((row > 0) && (col > 0)) {
			flag = false;
		}
		else {
			cout << "x�� y ��� ����� �Է����ּ���." << endl;
		}
	}
	// �� ����
	int** arr2 = new int* [row];

	// �� ����
	for (int i = 0; i < row; i++) {
		arr2[i] = new int[col];
	}

	// �迭 ���(�� �Ҵ�) �� ���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr2[i][j] = i*col + (j+1);
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	// �� ����
	for (int i = 0; i < row; i++) {
		delete[] arr2[i];
	}

	// �� ����
	delete[] arr2;


	// �ǽ�29. 2���� �����迭 ����غ���  �� ������ �ڵ�
	int x, y;
	bool flag = true;
	int a = 0;

	while (flag) {
		cout << "x�� �Է��ϼ��� : ";
		cin >> x;
		cout << "y�� �Է��ϼ��� : ";
		cin >> y;
		if (x > 0 && y > 0) flag = false;
		else cout << "x�� y ��� ����� �Է����ּ���." << endl;
	}

	int** arr2 = new int* [x];
	for (int i = 0; i < x; i++) arr2[i] = new int[y];
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			a++;
			arr2[i][j] = a;
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	for (int j = 0; j < y; j++) {
		delete[] arr2[j];
	}
	delete[] arr2;
	*/

	// ����Ʈ ���� -------------------------------------------------------------------------------------
	// ���� ������/����� ���� ������/����� ����ų�� �����Ϳ� �����迭�� ���� �̿���
	// �Ƶ��̳뿡�� CPU�� �����Ҷ� �޸𸮸� ���ؾ� �ϰ� �׶� ��� �����ͷ� �����ϵ��� ������
	int num = 100;
	int* p = NULL;
	p = &num;
	cout << "������ p�� ����Ű�� �� : " << p << endl;			// 000000B5F32FF604   <-- �����Ҷ����� ��� �ּҰ��� ���� (���ට���� �ּҰ��� �����ϰ� ���ؼ� �Ҵ���)
	cout << "num�� �� : " << num << endl;						// 100

	*p += 50;
	cout << "������ p�� ����Ű�� �� : " << *p << endl;			// 150
	cout << "num�� �� : " << num << endl;						// 150

	(*p)++;
	cout << "������ (*p)++ : " << *p << endl;			// 151
	cout << "num�� �� : " << num << endl;						// 151

	*p++;		// ++���� �� �� �������� �����Ͱ��� ����
	cout << "������ *p++ : " << *p << endl;			// -858993460
	cout << "num�� �� : " << num << endl;						// 151


	int n1 = 10;
	int n2 = 20;
	int sum = n1 + n2;
	int* p1 = &n1;
	int* p2 = &n2;

	//cout << "�ּҰ� ���� : " << p1 + p2 << endl;			// ���� �߻�
	cout << "�ּҰ� ���� : " << *p1 + *p2 << endl;			// 30



	return 0;
}
#endif