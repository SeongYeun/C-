#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;		// std : ǥ�� ���̺귯��

#define MAIN0116
#ifdef MAIN0116


int main()
{
	std::cout << "���� _ 20250116" << std::endl;
	std::cout << "=============================\n\n" << std::endl;

	//�ǽ�16. �迭 ����ؼ� �Ҽ� ���ϱ�
	int arr_int[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;
	int n = sizeof(arr_int) / sizeof(arr_int[0]);

	cout << "�Ҽ� ���ϱ�" << endl;
	for (int i = 0; i < n; i++) {
		for (int a = 1; arr_int[i]; a++) {
			sum = 0;
			if ((arr_int[i] % a) == 0) {
				sum++;
			}
		}
		if (sum == 2) {
			cout << arr_int[i]<< endl;
		}
	}

	/*
	//�ǽ�16. �迭 ����ؼ� �Ҽ� ���ϱ�   �� ������ �ڵ�  ????
	int arr_i[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << arr_i[1] << endl;
	cout << arr_i[2] << endl;
	cout << arr_i[4] << endl;
	cout << arr_i[6] << endl;


	//�ǽ�17. �迭�� �ܼ� �Է� �� ���   �� ������ �ڵ�
	int arr_i[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr_i) / sizeof(arr_i[0]);

	cout << sizeof(arr_i) << endl;
	cout << sizeof(arr_i[0]) << endl;

	for (int i = 0; i < n ; i++) {
		cout << "int�� �迭" << i+1 << "��°�� ��� �Է��� ��: ";
		cin >> arr_i[i];

	}
	cout << "==============" << endl;
	for (int j = n-1; j >= 0; j--) {
		cout << "int�� �迭" << j + 1 << "��°�� ��� �Էµ� ��: ";
		cout << arr_i[j] << endl;
	}

	*/


	/*
	// �迭 ----------------------------------------------------------------------------------
	// �迭 ���� �� �ʱ�ȭ
	std::string fruit[3];											// ����
	std::string fruits[] = { "apple", "banana", "orange" };			// ����� �ʱ�ȭ ����

	int arr_init[] = {0,};
	int arr_int[] = { 1,2,3,4,5, };
	char arr_char[] = { 'A','B','C', };
	float arr_float[] = { 0.0, 1.2, 3.4, 5.6 };

	cout << "�ʱⰪ ���� : " << arr_init[3] << endl;				// -858993460 (Trash value)
	cout << "int�� �迭   : " << arr_int[0] << endl;				// 1
	cout << "char�� �迭  : " << arr_char[1] << endl;				// B
	cout << "float�� �迭 : " << arr_float[2] << endl;				// 3.4		
	*/

	return 0;
}

#endif



/*
// ���ڿ� : string ----------------------------------------------------------------------------------

string str = " ";

// hello world! good bye! �����ϰ� �ݺ� �Է½�
cin >> str;
cout << "str_1 : " << str << endl;		// hello

getline(cin, str);
cout << "str_2 : " << str << endl;		// world! good bye!

getline(cin, str, 'b');					// "b"��� ���� ������ �Է��� �޴´�
cout << "str_3 : " << str << endl;		// hello world! good


//-------- ���ڿ� ���� �� �Ҵ�
string str1 = " ";
string str2 = "codingon";
string str3("codingon");
string str4(str2);

char str_arr_1[] = { 'h','e','l','l','o'};
char str_arr_2[] = { 'h','e','l','l','o','\0' };
// ���ڿ� �迭���� ���������� null�̿��� �ؼ� \0�� �Է������ ��
// \0�̳� ����ǥ ���� 0 ������ ������ ���� �ڿ� ���� ��µȴ�.


string str5(str_arr_1);
string str6(str_arr_2);

cout << "str1 : " << str1 << endl;			// ��ĭ ���
cout << "str2 : " << str2 << endl;			// codingon
cout << "str3 : " << str3 << endl;			// codingon
cout << "str4 : " << str4 << endl;			// codingon
cout << "str5 : " << str5 << endl;			// hello��������������������������?ello
cout << "str6 : " << str6 << endl;			// hello


//-------- string ����
string str1 = "coding";
string str2 = "on";
string str3 = "aaa";
string str4 = "bbb";
string str5 = "bbbbb";

cout << "���� : " << str1 + str2 << endl;						// codingon
cout << "��1 : str1 > str2 : " << (str1 > str2) << endl;		// 0  (c > o -> false(0))
cout << "��2 : str3 > str4 : " << (str3 > str4) << endl;		// 0  (a > b -> false(0))
cout << "��3 : str4 > str5 : " << (str4 > str5) << endl;		// 0  (b > b -> ���ڿ� ���� �� : 3 > 5 -> false(0))
cout << "��3 : str4 > str5 : " << (str4 < str5) << endl;		// 1  (b < b -> ���ڿ� ���� �� : 3 < 5 -> true(1))



//-------- string �Լ�
string str1 = "helloworldcodingon";
string str2 = "on";
string str3 = "aaa";
string str4 = "bbb";
string str5 = "bbbbb";

cout << ".at(idx) : " << str1.at(5) << endl;					// w
cout << "[index] : " << str1[5] << endl;						// w
cout << ".front() : " << str1.front() << endl;					// h
cout << ".back() : " << str1.back() << endl;					// n
cout << ".length() : " << str1.length() << endl;				// 18
cout << ".size() : " << str1.size() << endl;					// 18
str1.resize(5);
cout << ".resize(n) : " << str1 << endl;						// hello


str1 = "coding";
str1.append(str2);
cout << "str1.append(str2) : " << str1 << endl;					// codingon
str1.insert(4, str3);
cout << "str1.insert(4, str3) : " << str1 << endl;				// codiaaangon
str1.replace(9, 2, "_hello");
cout << "str1.replace(9,2, '_hello') : " << str1 << endl;		// codiaaang_hello
str1.erase(4, 3);
cout << "str1.erase(4, 3) : " << str1 << endl;					// coding_hello


cout << ".empty() : " << str1.empty() << endl;					// 0
str1.clear();
cout << ".clear() ���� .empty(): " << str1.empty() << endl;		// 1

if (str1.empty()) {												// ���ڿ��� ��� �ֽ��ϴ�.
	cout << "���ڿ��� ��� �ֽ��ϴ�.\n\n" << endl;
}
else {
	cout << str1 << endl;
}

str1 = "codingon";
str2 = "helloworld";
str3 = "on";

cout << "str1.find(str2) : " << str1.find(str2) << endl;		// 18446744073709551615
cout << "str1.find(str3) : " << str1.find(str3) << endl;		// 6
cout << "str1.substr(3,2) : " << str1.substr(3, 2) << endl;		// in
cout << "str1.compare(str2) : " << str1.compare(str2) << endl;	// -1  (0 :str1==str2,  1 :str1>str2, -1 :str1<str2)
// �Ƶ��̳뿡�� ��� ��
string a = "motor1on";				// ������ ��
string b = "motor2off";
		// ������ ������ �����̽��ϰ� Ư�� ���� ���ϴ� ���ǿ� ���� ��ɹ� ����

cout << "isdigit('a') : " << isdigit('a') << endl;				// 0
cout << "isdigit('1') : " << isdigit('1') << endl;				// 4 (����̹Ƿ� ���ڰ� �´ٴ� �ǹ���)

cout << "isalpha('a') : " << isalpha('a') << endl;				// 2
cout << "isalpha('1') : " << isalpha('1') << endl;				// 0

//cout << "toupper('chop') : " << toupper("chop") << endl;			// ���ڿ��� ����
cout << "toupper('c') : " << toupper('c') << endl;					// 67 (�빮�� C�� ASCII���� ��µ�)
char temp = toupper('c');
cout << "char temp = toupper('c') ���� temp : " << temp << endl;	// C
temp = 67;
cout << "temp = 66 ���� temp : " << temp << endl;					// C

cout << "stoi('12') + stoi('45'): " << stoi("12") + stoi("45") << endl;			// 57

// #include <typeinfo> �Է� ��
cout << "typeid(stoi('12')) : " << typeid(stoi("12")) << endl;			// 57
cout << "stoi('12.3') : " << stoi("12") << endl;			// 57
cout << "typeid(stof('12.3')) : " << typeid(stof("12.3")) << endl;			// 57

string str6 = "12.3";
int val = 1000;
cout << typeid(to_string(val)).name() << endl;

*/

/*
// �ǽ�13. string ����غ���
// 1) ���ڿ� ����
string s = "Police say two people are suspected of trying to create a shortcut for their construction work. The two have been detained and the case is under further investigation. The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
// 2) s ���ڿ� ���� ���
std::cout << "���ڿ� ���� : " << s.length() << std::endl;
// 3) 100��° ���� ���
std::cout << "100��° ���� : " << s[99] << std::endl;			// <- �ƹ��͵� ����� �ȵ�
// 4) "two"��� ���ڰ� ó�� ������ index ���
string word = "two";
std::cout << "ù two�� ������ index : " << s.find(word) << std::endl;
int first = s.find(word);
// 5) "two"��� ���ڰ� �ι�° ������ index ���
std::cout << "�ι�° two�� ������ index : " << s.find(word, first+1) << std::endl;

// �ǽ�13. string ����غ���  �� ������ �ڵ�
string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38 - year - old man and 55 - year - old woman were working near the affected area, the 32nd Great Wall.";
cout << s.length() << endl;
cout << s.at(99) << endl;
cout << s.find("two") << endl;
cout << s.find("two", s.find("two")+1) << endl;

*/

/*
// �ǽ�14. string ����غ���  ��  ������ �ڵ� (���ڿ� 1�� �޴� ���)
// 1) ���ڿ��� �Է� �޾Ƽ� �������� �˻� ��� ���
string str = " ";
bool flag = true;

while(flag){

	cin >> str;

	int count = str.length();
	int index = 0;
	int index_2 = 0;
	while (index < count) {
		//cout << index << endl;
		//cout << index_2 << endl;
		int val = isdigit(str[index]);
		if (val == 0) {
			cout << "NO" << endl;
			//cout << index << ", " << index_2 << ", " << val <<", " << endl;
			break;
		}
		else {
			index_2++;
			//cout << index << ", " << index_2 << ", " << val << ", " << endl;
		}
		index++;
	}
	if (index_2 == count) {
		cout << "OK" << endl;
		flag = 0;						// �ܺ� while�� ���� ����
	}
}
*/
/*
// �ǽ�14. string ����غ���  ��  ������ �ڵ� (���ڿ� 2�� �޴� ��� & ���ڰ� �ƴѰ�쿡�� ����2 ����� �ǵ���)
// 1) ���ڿ��� �Է� �޾Ƽ� �������� �˻� ��� ���
string str = " ";
string str2 = " ";
bool flag = true;
bool flag2 = true;
while (flag || flag2)
{
	cout << "���ڿ� 1 �Է� : ";
	cin >> str;
	cout << "���ڿ� 2 �Է� : ";
	cin >> str2;
	int count = str.length();
	int index = 0;
	int index_2 = 0;
	while (index < count)
	{
		int val = isdigit(str[index]);
		if (val == 0)
		{
			cout << "str1 is NO" << endl;
			break;
		}
		else {
			index_2++;
		}
		index++;
	}
	if (index_2 == count)
	{
		cout << "str1 is OK" << endl;
		flag = false;
	}
	int count2 = str2.length();
	int index2 = 0;
	int index_22 = 0;
	while (index2 < count2)
	{
		int val2 = isdigit(str2[index2]);
		if (val2 == 0)
		{
			cout << "str2 is NO" << endl;
			break;
		}
		else {
			index_22++;
		}
		index2++;
	}
	if (index_22 == count2)
	{
		cout << "str2 is OK" << endl;
		flag2 = false;
	}
	// 2) �� ���ڿ� �̾ ���
	cout << "��ģ ���ڿ� : " << str + str2 << endl;

	// 3) �� ���� ���� ���
	if (flag == false && flag2 == false) {
		int val = stoi(str);
		int val2 = stoi(str2);
		int sum = val + val2;
		cout << "����3 : " << sum << endl;
	}

}

*/

/*
// �ǽ�15. string ����غ���
// 1)
string s = "Codingnon";

// 2) ù���� �ҹ��ڷ� ����
char ch = tolower(s.front());
s = ch + s.substr(1);
std::cout << "ù ���ڸ� �ҹ��ڷ� ���� : " << s << std::endl;

// 3) "ding"�̶�� �κй��ڿ� ��ȯ
std::cout << "'ding'�̶�� �κй��ڿ� ��ȯ : " << s.substr(2,4) << std::endl;

// 4) "coooooon"�� �ǵ��� ����
s.replace(2, 6, "ooooo");
std::cout << "'coooooon'�� �ǵ��� ���� : " << s << std::endl;

// 5) "con"�� �ǵ��� ����
s.erase(1, 5);
std::cout << "'con'�� �ǵ��� ���� : " << s << std::endl;


// �ǽ�15. string ����غ���  �� ������ �ڵ�
string str = "Codingon";

str[0] = tolower(str[0]);
cout << "�ҹ��� ���� : " << str << endl;
int val = str.length()-1;
str[val] = toupper(str[val]);
cout << "�빮�� ���� : " << str << endl;
string temp = str.substr(2, 4);
cout << "�κ� ���ڿ� : " << temp << endl;
temp = str.replace(2, 4, "oooo");
cout << "ġȯ ���ڿ� : " << temp << endl;
temp = str.erase(1, 5);
cout << "���� ���ڿ� : " << temp << endl;

*/