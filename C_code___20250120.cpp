#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#define MAIN0120
#ifdef MAIN0120

// 센서값 함수  _ sensor_cal
int sensor_cal(int sensor_val, int offset) {
	int result = 0;
	result = sensor_val - offset;
	return result;
}
// 모터속도함수 정의 _ motor_speed
void motor_speed(int motor_num, int speed) {
	cout << motor_num << "번 모터를 " << speed << "속도로 작동!" << endl;
	return;
}

// 동일 함수명에 대한 다른 매개변수에 대한 실행
// 오버로딩 : 매개변수가 다르면 함수명이 같아도 다른 함수로 인식해서 두 함수를 모두 호출 가능함
// 1) 매개변수 1개 정의
void hello(int a) {
	return ;
}


// 실습21. 함수 활용하기
// (1) 짝수/홀수 출력하기
void even(int number) {
	if ((number % 2) == 0) {
		cout << number << "는 짝수입니다." << endl;
	}
	else {
		cout << number << "는 홀수입니다." << endl;
	}
	return;
}
// (1) 짝수/홀수 출력하기  ㅡ 리더님 코드
void is_odd(int num) {
	if ((num % 2) == 0) cout << "짝수" << endl;
	else cout << "홀수" << endl;
	
}

// (2) 3개 수 중 가장 큰 수 반환하기
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
// 종합실습6. 사칙연산 함수 만들기
// (1) 두 정수의 합
int add(int n1, int n2) {
	return n1+n2;
}

// (2) 두 정수의 뺄셈
int sub(int n1, int n2) {
	if (n1 >= n2) {
		return n1 - n2;
	}
	else {
		return n2 - n1;
	}
}

// (3) 두 정수의 곱셈
int mul(int n1, int n2) {
	return n1 * n2;
}

//// (4) 두 정수의 나눗셈  ㅡ 강제 형변환 안된 것
//float divide(int n1, int n2) {
//	return n1 / n2;
//}
// (4) 두 정수의 나눗셈  ㅡ 강제 형변환 된 것
float divide_f(int n1, int n2) {
	return float(n1) / n2;    // 하나라도 형변환 되면 나머지도 자동으로 형변환 됨
}
///////////////////////////////////////////////////
// 종합실습5. 배열과 구조체 활용하기
struct Student {
	string name;
	float scores[3];
};

// 클래스 ----------------------------------------------------------------------------------
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
		cout << "최종 출력 값 : " << val << endl;
	}
};

// 예제22. 클래스로 계산기 만들어보기
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

// 예제22. 클래스로 계산기 만들어보기    ㅡ 리더님 코드
class calClass {
private:
	int num1, num2;
	char op;
	float result;
	int test_val = 5;
public:
	void test(int test_val) {								// <- this : 클래스 내의 값을 가르킴 -----------------
		//cout << "this 적용 테스트 값 : " << this.test_val << endl;
		cout << "this 미적용 테스트 값 : " << test_val << endl;
	}
	void input() {
		cout << "숫자1, 연산자, 숫자2를 입력하세요 : ";
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
				cout << "0으로 나눌 수 없습니다." << endl;
				break;
			}
			result = (float)num1 / num2;		// <- 강제 형변환(int->float)
			break;
		}
	}
	void print() {
		cout << "계산한 결과 : " << num1 << " " << op << " " << num2 << " = " << result << endl;
	}
};

// 클래스 : 생성자, 소멸자 ----------------------------------------------------------------------------------
class testClass {
private:
public:
	testClass() {								// <- 생성자
		for (int i = 0; i<2; i++) cout << "생성자_1가 호출 되었습니다." << endl;
	}
	testClass(int num1, int num2) {				// <- 생성자 (오버로딩)
		for (int i = 0; i < 2; i++) cout << "생성자_2가 호출 되었습니다." <<num1 << ", " << num2 << endl;
	}
	void print() {
		cout << "함수가 호출 되었습니다." << endl;
	}
	~testClass() {								// <- 소멸자 : 데이터 누수를 막기 위해서 사용 (오버로딩 안됨)
		cout << "소멸자가 호출 되었습니다." << endl;
	}
};

// 실습23. 생성자 소멸자 사용해보기
class Exam23 {
private:
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
public:
	Exam23() {
		cout << "생성자!" << endl;
		for (i=0; i<10;i++) cout << arr[i]<<" ";
		cout << endl;
	}
	~Exam23() {
		cout << "소멸자!" << endl;
		for (i = 9; i >= 0; i--) cout << arr[i] << " ";
		cout << endl;
	}
};
// 실습23. 생성자 소멸자 사용해보기  ㅡ 리더님 코드
class testClass_23 {
private:
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
public:
	testClass_23 () {
		cout << "생성자!" << endl;
		for (int i = 0; i < 10; i++) cout << arr[i];
	}
	~testClass_23() {
		cout << "소멸자!" << endl;
		for (int i = 9; i >= 0; i--) cout << arr[i];
	}
};

// 종합실습7. 붕어빵 만들기
class Fish {
private:
	string inside;
	int price;
	int qty;

public:
	Fish() {
		cout << "붕어빵 만들기 시작!" << endl;
		cout << "===================" << endl;
	}
	~Fish() {
		cout << "붕어빵 만들기 끝!" << endl;
	}
	void order() {
		cout << "어떤 속을 넣을까요? : " << endl;
		cin >> inside;
		cout << "한 개의 가격은 얼마로 할까요" << endl;
		cin >> price;
		cout << "몇 개를 만들까요 : " << endl;
		cin >> qty;
		cout << endl;
	}
	void info() {
		cout << "붕어빵 정보 : " << endl;
		cout << "속재료 : "<< inside << endl;
		cout << "갯수 : "<< qty << endl;
		cout << "총 가격 : "<< price*qty<< endl;
	}
};



int main(){	 // main ---------------------------------------------------------------------------------------
	/*
	///////////////////////////////////////////////////
	// 실습21. 함수 활용하기
	// (1) 짝수/홀수 출력하기
	even(50);
	even(27);

	// (2) 3개 수 중 가장 큰 수 반환하기
	cout << "5, 30, 12 중 가장 큰 값 : " << max_num(5, 30, 12) << endl;


	///////////////////////////////////////////////////
	// 종합실습5. 배열과 구조체 활용하기
	const int n = 3;
	Student students[n];
	string sc1, sc2, sc3 = "";
	float avg[n] = {0,};
	float max = 0.0;
	string max_name = "";
	for (int i = 0; i < n; i++) {
		cout << i+1 << "번 학생의 이름을 입력하세요 : ";
		cin >> students[i].name;
		cout << students[i].name << "의 3과목 점수를 입력하세요 : ";
		cin >> sc1 >> sc2 >> sc3;
		students[i].scores[0] = stoi(sc1);
		students[i].scores[1] = stoi(sc2);
		students[i].scores[2] = stoi(sc3);
		avg[i] = (students[i].scores[0] + students[i].scores[1] + students[i].scores[2]) / n;
	}
	max = avg[0];
	max_name = students[0].name;
	for (int i = 0; i < n; i++) {
		cout << students[i].name << "의 평균 점수 : " << avg[i] << endl;
		if (avg[i] > max) {
			max = avg[i];
			max_name = students[i].name;
		}		
	}
	cout << "1등 : " << max_name << " (평균 점수 : " << max << ")" << endl;
	



	///////////////////////////////////////////////////
	// 종합실습6. 사칙연산 함수 만들기
	// (5) main함수에서 함수 리턴값 각각 출력
	cout << "1) add(15, 5)의 리턴값 : " << add(15, 5) << endl;
	cout << "2) sub(15, 5)의 리턴값 : " << sub(15, 5) << endl;
	cout << "3) mul(15, 5)의 리턴값 : " << mul(15, 5) << endl;
	cout << "4) divide(15, 5)의 리턴값 : " << divide(15, 5) << endl;
	cout << "4) divide(15, 4)의 리턴값 : " << divide(15, 4) << endl;
	cout << "4) divide_f(15, 4)의 리턴값 : " << divide_f(15, 4) << endl;


	*/


	/*
	// 클래스 ----------------------------------------------------------------------------------
	CalClass cc1, cc2;
	cc1.set_val(3);
	cc1.inc_val(3);
	cc1.print_val();

	cc1.dec_val(3);
	cc1.print_val();


	// 예제22. 클래스로 계산기 만들어보기
	Calculator c[3] = { };
	int n1, n2 = 0;
	char oper = ' ';
	for (int i = 0; i < 3; i++) {
		cout << "숫자1, 연산자(+ - * /), 숫자2를 입력하세요 : ";
		cin >> n1 >> oper >> n2;
		c[i].calculator(n1, oper, n2);
		c[i].print_calculrator();
	}
	// 예제22. 클래스로 계산기 만들어보기  ㅡ 리더님 코드
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
	
	// 클래스 : 생성자 ----------------------------------------------------------------------------------
	testClass tC1;
	testClass tC2(5, 3);		// 매개변수에 따라서 다른 생성자를 선택할 수 있음



	// 실습23. 생성자 소멸자 사용해보기 (main함수 내)
	Exam23 a;

	*/

	// 종합실습7. 붕어빵 만들기 (main함수 내)
	Fish f1;
	f1.order();
	f1.info();

	return 0;
}

#endif



	/*
	// 구조체 종합실습5. 배열과 구조체 활용하기   ㅡ 리더님 코드 
	// 구조체 정의 (main함수 밖)
	struct Student {
		string name;
		float scores[3];
	
	// 구조체 실행문 (main함수 내)
	Student students[3];
	float avgs[3] = {0, };
	float max_val = 0;
	for (int i=0; i<3; i++) {
		cout << i+1 << "번 학생의 이름을 입력하세요 : ";
		cin >> students[i].name;
		cout << students[i].name<<"의 3과목 점수를 입력하세요 : ";
		cin >> students[i].score[0] >> students[i].score[1] >> students[i].score[2];   // <- string의 슬라이스를 바로 float 변수에 넣어도 됨
	}
	for (int j=0; j<3; j++){
		float avg = 0;
		avgs[i] = (students[j].score[0]+students[j].score[1]+students[j].score[2])/3;
		cout << students[j].name << "의 평균 점수 : " << avg << endl;
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
	cout << "1등 : " << students[index].name <<"(평균 : << max_val <<")" << endl;
	
	
	*/


	/*
	// 함수 ----------------------------------------------------------------------------------
	cout<< "센서값 : "<< sensor_cal(50, 5) << endl;
	motor_speed(5,200);
	*/