#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;		// std : 표준 라이브러리

#define MAIN0116
#ifdef MAIN0116


int main()
{
	std::cout << "메인 _ 20250116" << std::endl;
	std::cout << "=============================\n\n" << std::endl;

	//실습16. 배열 사용해서 소수 구하기
	int arr_int[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;
	int n = sizeof(arr_int) / sizeof(arr_int[0]);

	cout << "소수 구하기" << endl;
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
	//실습16. 배열 사용해서 소수 구하기   ㅡ 리더님 코드  ????
	int arr_i[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << arr_i[1] << endl;
	cout << arr_i[2] << endl;
	cout << arr_i[4] << endl;
	cout << arr_i[6] << endl;


	//실습17. 배열에 콘솔 입력 후 출력   ㅡ 리더님 코드
	int arr_i[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr_i) / sizeof(arr_i[0]);

	cout << sizeof(arr_i) << endl;
	cout << sizeof(arr_i[0]) << endl;

	for (int i = 0; i < n ; i++) {
		cout << "int형 배열" << i+1 << "번째에 요소 입력할 값: ";
		cin >> arr_i[i];

	}
	cout << "==============" << endl;
	for (int j = n-1; j >= 0; j--) {
		cout << "int형 배열" << j + 1 << "번째에 요소 입력된 값: ";
		cout << arr_i[j] << endl;
	}

	*/


	/*
	// 배열 ----------------------------------------------------------------------------------
	// 배열 선언 및 초기화
	std::string fruit[3];											// 선언만
	std::string fruits[] = { "apple", "banana", "orange" };			// 선언과 초기화 동시

	int arr_init[] = {0,};
	int arr_int[] = { 1,2,3,4,5, };
	char arr_char[] = { 'A','B','C', };
	float arr_float[] = { 0.0, 1.2, 3.4, 5.6 };

	cout << "초기값 없음 : " << arr_init[3] << endl;				// -858993460 (Trash value)
	cout << "int형 배열   : " << arr_int[0] << endl;				// 1
	cout << "char형 배열  : " << arr_char[1] << endl;				// B
	cout << "float형 배열 : " << arr_float[2] << endl;				// 3.4		
	*/

	return 0;
}

#endif



/*
// 문자열 : string ----------------------------------------------------------------------------------

string str = " ";

// hello world! good bye! 동일하게 반복 입력시
cin >> str;
cout << "str_1 : " << str << endl;		// hello

getline(cin, str);
cout << "str_2 : " << str << endl;		// world! good bye!

getline(cin, str, 'b');					// "b"라는 글자 전까지 입력을 받는다
cout << "str_3 : " << str << endl;		// hello world! good


//-------- 문자열 선언 및 할당
string str1 = " ";
string str2 = "codingon";
string str3("codingon");
string str4(str2);

char str_arr_1[] = { 'h','e','l','l','o'};
char str_arr_2[] = { 'h','e','l','l','o','\0' };
// 문자열 배열에서 마지막값은 null이여야 해서 \0을 입력해줘야 함
// \0이나 따옴표 없는 0 없으면 쓰레기 값이 뒤에 같이 출력된다.


string str5(str_arr_1);
string str6(str_arr_2);

cout << "str1 : " << str1 << endl;			// 빈칸 출력
cout << "str2 : " << str2 << endl;			// codingon
cout << "str3 : " << str3 << endl;			// codingon
cout << "str4 : " << str4 << endl;			// codingon
cout << "str5 : " << str5 << endl;			// hello儆儆儆儆儆儆儆儆儆儆儆儆儆?ello
cout << "str6 : " << str6 << endl;			// hello


//-------- string 연산
string str1 = "coding";
string str2 = "on";
string str3 = "aaa";
string str4 = "bbb";
string str5 = "bbbbb";

cout << "결합 : " << str1 + str2 << endl;						// codingon
cout << "비교1 : str1 > str2 : " << (str1 > str2) << endl;		// 0  (c > o -> false(0))
cout << "비교2 : str3 > str4 : " << (str3 > str4) << endl;		// 0  (a > b -> false(0))
cout << "비교3 : str4 > str5 : " << (str4 > str5) << endl;		// 0  (b > b -> 문자열 길이 비교 : 3 > 5 -> false(0))
cout << "비교3 : str4 > str5 : " << (str4 < str5) << endl;		// 1  (b < b -> 문자열 길이 비교 : 3 < 5 -> true(1))



//-------- string 함수
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
cout << ".clear() 이후 .empty(): " << str1.empty() << endl;		// 1

if (str1.empty()) {												// 문자열이 비어 있습니다.
	cout << "문자열이 비어 있습니다.\n\n" << endl;
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
// 아두이노에서 사용 예
string a = "motor1on";				// 수신한 값
string b = "motor2off";
		// 수신한 값에서 슬라이싱하고 특정 값과 비교하는 조건에 맞춰 명령문 실행

cout << "isdigit('a') : " << isdigit('a') << endl;				// 0
cout << "isdigit('1') : " << isdigit('1') << endl;				// 4 (양수이므로 숫자가 맞다는 의미임)

cout << "isalpha('a') : " << isalpha('a') << endl;				// 2
cout << "isalpha('1') : " << isalpha('1') << endl;				// 0

//cout << "toupper('chop') : " << toupper("chop") << endl;			// 문자열은 오류
cout << "toupper('c') : " << toupper('c') << endl;					// 67 (대문자 C의 ASCII값이 출력됨)
char temp = toupper('c');
cout << "char temp = toupper('c') 이후 temp : " << temp << endl;	// C
temp = 67;
cout << "temp = 66 이후 temp : " << temp << endl;					// C

cout << "stoi('12') + stoi('45'): " << stoi("12") + stoi("45") << endl;			// 57

// #include <typeinfo> 입력 후
cout << "typeid(stoi('12')) : " << typeid(stoi("12")) << endl;			// 57
cout << "stoi('12.3') : " << stoi("12") << endl;			// 57
cout << "typeid(stof('12.3')) : " << typeid(stof("12.3")) << endl;			// 57

string str6 = "12.3";
int val = 1000;
cout << typeid(to_string(val)).name() << endl;

*/

/*
// 실습13. string 사용해보기
// 1) 문자열 선언
string s = "Police say two people are suspected of trying to create a shortcut for their construction work. The two have been detained and the case is under further investigation. The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
// 2) s 문자열 길이 출력
std::cout << "문자열 길이 : " << s.length() << std::endl;
// 3) 100번째 문자 출력
std::cout << "100번째 문자 : " << s[99] << std::endl;			// <- 아무것도 출력이 안됨
// 4) "two"라는 문자가 처음 나오는 index 출력
string word = "two";
std::cout << "첫 two가 나오는 index : " << s.find(word) << std::endl;
int first = s.find(word);
// 5) "two"라는 문자가 두번째 나오는 index 출력
std::cout << "두번째 two가 나오는 index : " << s.find(word, first+1) << std::endl;

// 실습13. string 사용해보기  ㅡ 리더님 코드
string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38 - year - old man and 55 - year - old woman were working near the affected area, the 32nd Great Wall.";
cout << s.length() << endl;
cout << s.at(99) << endl;
cout << s.find("two") << endl;
cout << s.find("two", s.find("two")+1) << endl;

*/

/*
// 실습14. string 사용해보기  ㅡ  리더님 코드 (문자열 1개 받는 경우)
// 1) 문자열을 입력 받아서 숫자인지 검사 결과 출력
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
		flag = 0;						// 외부 while문 종료 조건
	}
}
*/
/*
// 실습14. string 사용해보기  ㅡ  리더님 코드 (문자열 2개 받는 경우 & 숫자가 아닌경우에도 문제2 출력이 되도록)
// 1) 문자열을 입력 받아서 숫자인지 검사 결과 출력
string str = " ";
string str2 = " ";
bool flag = true;
bool flag2 = true;
while (flag || flag2)
{
	cout << "문자열 1 입력 : ";
	cin >> str;
	cout << "문자열 2 입력 : ";
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
	// 2) 두 문자열 이어서 출력
	cout << "합친 문자열 : " << str + str2 << endl;

	// 3) 두 숫자 합을 출력
	if (flag == false && flag2 == false) {
		int val = stoi(str);
		int val2 = stoi(str2);
		int sum = val + val2;
		cout << "문제3 : " << sum << endl;
	}

}

*/

/*
// 실습15. string 사용해보기
// 1)
string s = "Codingnon";

// 2) 첫문자 소문자로 변경
char ch = tolower(s.front());
s = ch + s.substr(1);
std::cout << "첫 문자를 소문자로 변경 : " << s << std::endl;

// 3) "ding"이라는 부분문자열 반환
std::cout << "'ding'이라는 부분문자열 반환 : " << s.substr(2,4) << std::endl;

// 4) "coooooon"이 되도록 변경
s.replace(2, 6, "ooooo");
std::cout << "'coooooon'이 되도록 변경 : " << s << std::endl;

// 5) "con"이 되도록 변경
s.erase(1, 5);
std::cout << "'con'이 되도록 변경 : " << s << std::endl;


// 실습15. string 사용해보기  ㅡ 리더님 코드
string str = "Codingon";

str[0] = tolower(str[0]);
cout << "소문자 변경 : " << str << endl;
int val = str.length()-1;
str[val] = toupper(str[val]);
cout << "대문자 변경 : " << str << endl;
string temp = str.substr(2, 4);
cout << "부분 문자열 : " << temp << endl;
temp = str.replace(2, 4, "oooo");
cout << "치환 문자열 : " << temp << endl;
temp = str.erase(1, 5);
cout << "지운 문자열 : " << temp << endl;

*/