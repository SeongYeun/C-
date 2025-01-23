#include <iostream>
#include <string>
using namespace std;


/*
// 실습32. 커스텀 문자열 함수 만들기
void InputStr() {
	//const int len_str;
	string temp="";
	int len = 0;
	bool flag = true;
	char* inputstr = new char[100];
	cout << "문자열을 입력하세요 : ";
	getline(cin, *inputstr);
	len_str = sizeof(*inputstr) / sizeof(inputstr[0]);
	cout << "입력한 문자열의 길이는 : " << len_str<< endl;

}

*/


// 실습32. 커스텀 문자열 함수 만들기  ㅡ 리더님 코드
int myLength(string& str) {
	bool flag = true;
	int i = 0;
	while (flag) {
		if (str[i] == 0) flag = false;
		else i++;
	}
	return i;
}

// 실습32. 커스텀 문자열 함수 만들기  ㅡ copilot code
void len(char* str) {
	size_t len = strlen(str);
	// strlen()의 리턴 자료형인 size_t는 부호없는 정수형으로 int를 사용시 아주 큰 문자의 뒷부분이 손실될 수 있기 때문에
	// unsigned long으로 변환해주는 것이 안전한 방법임
	cout << "입력한 문자열의 길이는 : " << len << endl;
}



// 종합실습10. 커스텀 입력함수 만들기
void InputStr() {
	bool flag = true;
	char ch;
	int idx = 0;
	char input_str[100];
	//char input_str[]="";	
	// ㄴ> 이렇게 표현하면 배열의 크기없이 빈문자열로 선언했기 때문에
	//	   입력된 문자열을 저장할 공간이 없어 무한루프에 빠지게 됨
	cout << "문자열을 입력하세요 : ";
	while (flag) {
		ch = cin.get();
		//cout << ch << endl;
		if (ch == '\n') {		// 콘솔 입력에서 사용자가 엔터키를 치기 때문에 비교대상을 NULL이 아닌 줄바꿈('\n')으로 변경
			break;
		}
		else {
			input_str[idx] = ch;
		}
		idx++;
	}
	cout << "입력한 문자열 : ";
	for (int i=0; i<idx; i++)	cout << input_str[i];

}

// 종합실습10. 커스텀 입력함수 만들기 ㅡ 리더님 코드
char* custom_cin() {
	char ch;
	int n=5;
	int index = 0;
	bool flag=true;
	char* arr = new char[n];
	while (flag) {
		cin.get(ch);
		arr[index] = ch;

		if (arr[index] == '\n') {		// 입력이 완료됐을때 반복 종료
			arr[index] = 0;				// 문자열의 종료 명시
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

// 함수 포인터: 함수를 가리키는 포인터 -------------------------------------------------------------------------------------
void print(int num) {
	cout << "함수 포인터 테스트" << endl;
	cout << "포인터 값 : " << num << endl;
}

// 콜백함수 -------------------------------------------------------------------------------------
void myCallback_1(int result) {
	cout << "콜백 함수_1로 출력된 결과 : " << result << endl;
}
void myCallback_2(int result) {
	cout << "콜백 함수_2로 출력된 결과 : " << result << endl;
}
void perform(int a, int b, void(*callback)(int)) {
	int sum = a + b;
	callback(sum);
}

// 실습33. 콜백함수 사용해보기  (main함수 밖)
void Callback33(string result) {
	cout << "변환된 문자열: " << result << endl;
}
void Perform33(string str, void(*callback_33)(string)) {
	int i = 0;
	while (str[i]) {
		str[i] = tolower(str[i]);
		i++;
	}
	callback_33(str);
}

// 실습33. 콜백함수 사용해보기  (main함수 밖) ㅡ 리더님 코드
string Change(string &str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i]+32;
	}
	return str;
}
void Perform(string &str, string(*callback)(string&)) {
	string input = callback(str);
	cout << "변환된 문자열 : " << input << endl;

}
// 문자별 ASCII Code값
// A~Z : 65~90
// a~z : 97~122


// 종합실습11. 계산기 구현하기 (main함수 밖)
void Add_sy(int n1, int n2) {
	int result = n1 + n2;
	cout << "덧셈 계산" << endl;
	cout << "결과 : " << result << endl;
}
void Substraction_sy(int n1, int n2) {
	int result = n1 - n2;
	cout << "뺄셈 계산" << endl;
	cout << "결과 : " << result << endl;
}void Multiple_sy(int n1, int n2) {
	int result = n1 * n2;
	cout << "곱셈 계산" << endl;
	cout << "결과 : " << result << endl;
}void Divide_sy(int n1, int n2) {
	float result;
	if (n2 == 0) cout << "0으로 나눌 수 없습니다.";
	else {
		result= (float)n1 / n2;
		cout << "나눗셈 계산" << endl;
		cout << "결과 : " << result << endl;
	}
}
void performOperation_sy(int a, int b, void(*callback)(int, int)) {
	callback(a, b);
}

// 종합실습11. 계산기 구현하기 (main함수 밖) ㅡ 리더님 코드
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
	// 실습32. 커스텀 문자열 함수 만들기
	//InputStr();

	// 실습32. 커스텀 문자열 함수 만들기  ㅡ 리더님 코드
	string str;
	cout << "문자열을 입력하세요 : ";
	getline(cin, str);
	int length = myLength(str);
	cout << "입력한 문자열의 길이는 : " << length << endl;

	// 실습32. 커스텀 문자열 함수 만들기  ㅡ copilot code
	char* str_co = new char[100];
	cout << "문자열을 입력하세요 : ";
	cin.getline(str_co, 100);
	len(str_co);
	delete str_co;

	// 종합실습10. 커스텀 입력함수 만들기
	InputStr();



	// 포인터 혼자 연습
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
	C++에서 string str = "hello";라는 코드를 예로 들때 
	str에 할당한 문자열 안에서 각 문자에 대해 인덱싱으로 접근은 가능한데 
	string 변수의 주소값을 이용해서 포인터 연산을 이용해서 문자 접근이 안되는지 여부와 그 이유

	>> copliot 답변
	C++에서 std::string 클래스는 문자열을 보다 편리하게 다루기 위해 설계된 클래스입니다. 
	std::string 객체 내부에서는 문자열 데이터를 동적 배열로 관리하며, 
	이를 통해 문자열의 크기를 유연하게 조정할 수 있습니다.

	기본적으로 std::string 객체는 인덱스를 이용해 개별 문자에 접근할 수 있습니다. 
	예를 들어, str[0]을 사용하면 str에 저장된 첫 번째 문자 'h'에 접근할 수 있습니다.
	
	하지만, std::string 객체의 주소값을 포인터 연산을 통해 직접 접근하려고 하면 문제가 발생할 수 있습니다. 
	그 이유는 std::string이 내부적으로 문자 데이터를 저장하는 방식이 단순한 C 스타일 문자열과 다르기 때문입니다.
	
	std::string 객체는 연속적인 메모리 블록에 문자열 데이터를 저장하지만, 
	객체의 주소값은 문자열 데이터의 주소값과 다릅니다. 
	std::string 객체의 주소값은 객체 자체의 주소를 가리키며, 
	객체 내부의 첫 번째 문자에 접근하려면 객체의 데이터 멤버에 접근해야 합니다. 
	이를 위해 c_str() 또는 data() 멤버 함수를 사용할 수 있습니다.
	c_str() 함수 기능 : C언어 스타일의 문자열을 반환하는 함수
						이 함수는 const char*를 반환하기 때문에 데이터 수정은 불가능함

	==== 예제 코드 : string 문자열의 포인터를 이용한 접근====
	string str = "hello";
	const char* cstr = str.c_str();
	while (*cstr) {
		cout << *cstr << " ";
		++cstr;
	}
	cout << endl;



	// 종합실습10. 커스텀 입력함수 만들기 ㅡ 리더님 코드
	//char ch;
	//cin.get(ch);
	//cout << "문자 출력 : " << ch << endl;		// 입력한 문자열의 첫 문자만 출력됨
	cout << "문자열을 입력합세요 : ";
	char* input = custom_cin();
	cout << "입력한 문자열 : " << input << endl;
	delete[] input;
	*/



	// 함수 포인터: 함수를 가리키는 포인터 -------------------------------------------------------------------------------------
	/*
	// 함수포인터 선언
	void (*fun_ptr)(int) :

	// 함수포인터 주소값 할당
	fun_ptr = &fun;

	// 함수포인터 사용
	(*fun_ptr)(3);
	
	//void print(int num) 함수 정의된 상태에서
	void(*point_f)(int);	// 함수 포인터 선언 : 리턴타입(포인터변수명)(매개변수타입)

	point_f = print;		// <- &없어도 정상 작동함
	//point_f = &print;
	//point_f = *print;		// <- *있어도 정상 작동함
	//point_f = **print;		// <- **있어도 정상 작동함   (포인터와 함수 연결)
	// ㄴ> 위의 3가지가 모두 정상작동하는 이유는 컴파일러가 유연하게 암시적으로 변환하기 때문에 
	//     여러번 역참조(*) 하더라도 모두 사용이 가능함
	
	//(*point_f)(3);			// 3
	point_f(3);					// 3		<- point_f가 print 함수의 주소를 가리키므로 print함수를 호출함
	//&point_f(3);				// 오류 발생
	cout << endl;


	// 콜백함수 -------------------------------------------------------------------------------------
	//void myCallback_1(int result) 
	//void myCallback_2(int result)
	//void perform(int a, int b, void(*callback)(int))
	perform(1, 2, myCallback_1);		// 3
	perform(4, 5, myCallback_2);		// 9
	cout << endl;

	// 실습33. 콜백함수 사용해보기 (main함수 내)
	string input_str_33;
	cout << "문자열을 입력하세요 : ";
	getline(cin, input_str_33);
	Perform33(input_str_33, Callback33);

	// 실습33. 콜백함수 사용해보기 (main함수 내)  ㅡ 리더님 코드
	string input_str;
	cout << "문자열을 입력하세요. : ";
	getline(cin, input_str);
	Perform(input_str, Change);
	cout << endl;




	// 종합실습11. 계산기 구현하기 (main함수 내)
	int n1, n2;
	cout << "두 수를 입력하세요 : ";
	cin >> n1 >> n2;
	performOperation_sy(n1, n2, Add_sy);
	performOperation_sy(n1, n2, Substraction_sy);
	performOperation_sy(n1, n2, Multiple_sy);
	performOperation_sy(n1, n2, Divide_sy);
	*/

	// 종합실습11. 계산기 구현하기 (main함수 내)  ㅡ 리더님 코드
	int sum = performOperation(5,3, add);
	cout << "덧셈 계산" << endl;
	cout << "결과 : "<< sum<<endl;
	int min = performOperation(5, 3, sub);
	cout << "뺄셈 계산" << endl;
	cout << "결과 : " << min << endl;



	return 0;
}
#endif