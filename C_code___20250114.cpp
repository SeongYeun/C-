#include <iostream>
#include <string>
using namespace std;


//#define MAIN0114												// 실행하고 싶은 코드가 포함된 정의명을 입력(define을 주석처리하면 해당 define의 main()함수는 실행이 안됨)
#ifdef MAIN0114													// 한 프로젝트내 여러 개의 main()함수 충돌을 막기 위해 #ifdef ~ #endif 사이에 코드 입력 


int main()
{
	cout << "메인 _20250114" << endl;
	cout << "==============\n" << endl;

	// 오늘 수업 요약
	// 조건문 : if문 / switch문 / 삼항연산자
	// if는 비교문이나 문자열의 조건을 적용할 수 있지만
	// switch문은 숫자나 문자 한 글자에 대해서만 case 비교할 수 있음
	// if (flag)를 이용해서 특정 코드를 디버깅하거나 실행여부를 손쉽게 전환할 수 있음
	// 삼항연산자는 if~else의 축약 표현과 같다

	// 논리연산자 : &&, ||, !
	// 산술연산자 : 기본사칙연산자, %, ++(전위/후위), --(전위/후위)
	// %, ++ : 아두이노에서 토글기능(2의배수) 처리시 사용함


	return 0;
}

#endif


	/*
	// 조건문 : if문 ----------------------------------------------------------------------------------
	
	int val=4;
	std::cout << "정수를 입력하세요." << "\n";
	std::cin >> val ;
	std::cout << "안녕하세요?" << "\n";
	std::cout << "저는 K-Digital-Training" << std::endl;
	std::cout << "신재생에너지 1기" << std::endl;
	
	if (val == 1) {
		std::cout << "아두이노 ";
	}
	else if (val == 2) {
		std::cout << "파이썬 ";
	}
	else if (val == 3) {
		std::cout << "AWS ";
	}
	else {
		std::cout << "C++ ";
	}
	
	std::cout << "입니다." << std::endl;
	*/
	

	/*
	//실습5. if문(2) ㅡ 리더님 코드
	string str;
	
	cout << "이름을 입력하세요." << endl;
	cin >> str;
	
	if (str == "홍길동") {
		cout << "남자" << endl;
	}
	else if (str == "성춘향") {
		cout << "여자" << endl;
	}
	else {
		cout << "모르겠어요." << endl;
	}
	*/
	
	
	
	/*
	//실습5. if문(2)
	std::string input_name = "";
	
	std::cout << "이름을 입력하세요." << std::endl;
	std::cin >> input_name;
	if (input_name == "홍길동") {
		std::cout << "남자" << std::endl;
	}
	else if (input_name == "성춘향") {
		std::cout << "여자" << std::endl;
	}
	else {
		std::cout << "모르겠어요." << std::endl;
	}
	*/
	
	
	/*
	//실습4. if문(1)
	int age = 0;
	std::cout << "나이를 입력하세요." << std::endl;
	std::cin >> age;
	
	if (age >= 200) {
		std::cout << "나이가 너무 많습니다." << std::endl;
	}
	else if (age >= 20) {
		std::cout << "성인" << std::endl;
	}
	else if (age >= 17) {
		std::cout << "고등학생" << std::endl;
	}
	else if (age >= 14) {
		std::cout << "중학생" << std::endl;
	}
	else if (age >= 8) {
		std::cout << "초등학생" << std::endl;
	}
	else if (age >= 0) {
		std::cout << "유아" << std::endl;
	}
	else {
		std::cout << "나이를 잘 못 입력하셨습니다." << std::endl;
	}
	*/
	
	/*
	//실습4. if문(1) ㅡ 리더님 코드
	int age = 0;
	cout << "나이를 입력하세요." << endl;
	cin >> age;

	if (age >= 1 && age <= 7) {
		cout << "유아" << endl;
	}
	else if (age >= 8 && age <= 13) {
		cout << "초등학생" << endl;
	}
	else if (age >= 14 && age <= 16) {
		cout << "중학생" << endl;
	}
	else if (age >= 17 && age <= 19) {
		cout << "고등학생" << endl;
	}
	else if (age >= 20) {
		cout << "성인" << endl;
	}
	*/
	
	/*
	// 비교연산자 ----------------------------------------------------------------------------------
	int score = 85;
	cout << "제 등급은 ";
	if (score == 100) {
		cout << "A+";
	}
	else if (score >= 80) {
		cout << "B+";
	}
	else if (score >= 60) {
		cout << "C+";
	}
	else {
		cout << "F";
	}

	cout << " 입니다." << endl;
	*/

	/*
	// 조건 : switch case문 ----------------------------------------------------------------------------------
	int val = 0;
	cout << "숫자를 입력하세요 : ";
	cin >> val;

	switch (val) {
	case 0:
		cout << "case 0 입니다." << endl;
		break;
	case 1:
		cout << "case 1 입니다." << endl;
		break;
	case 2:
		cout << "case 2 입니다." << endl;
		break;		// 여기 break;를 누락한 후 2를 입력하면 case2와 case3까지 모두 출력함.
	case 3:
		cout << "case 3 입니다." << endl;
		break;
	case 4:
		cout << "case 4 입니다." << endl;
		break;
	default:
		break;
	}
	*/
	/*
	// 논리연산자 ----------------------------------------------------------------------------------
	int val = 0;
	bool flag = true;

	cout << "제가 입력한 숫자는 ";

	cin >> val;
	if (val >= 40 && val <= 60) {
		cout << "40에서 60사이 입니다." << endl;
	}
	else if (val >= 70 && val <= 80) {
		cout << "70에서 80사이 입니다." << endl;
	}
	else if (val >= 90 || val < 0) {
		cout << "90보다 크거나 0보다 작습니다." << endl;
	}
	else {
		cout << "해당되는 범위가 없습니다." << endl;
	}

	if (!!flag) {
		cout << "flag는 false입니다." << endl;
	}

	int val1 = 0;
	int val2 = 0;
	bool flag = true;

	val1 = 25;
	val2 = 200;

	// 조건식 틀린 예 
	// val1=175일때 : 조건식의 앞부분 50<=val1 판별한 true와 뒤의 조건이 비교(true=1<=100) 판별해서 최종 true가 됨
	// val1=25일때  : 조건식의 앞부분 50<=val1 판별한 false와 뒤의 조건이 비교(false=0<=100) 판별해서 최종 true가 됨
	if (50 <= val1<=100) {
		cout << "50에서 100 사이 입니다." << endl;
	
	}
	if (val1 >= 50 && val1 <= 100) {		// 제대로된 조건식임
		cout << "50에서 100 사이 입니다." << endl;
	}
	else {
		cout << "범위를 벗어났습니다." << endl;
	}
	*/

	/*
	// 산술연산자 ----------------------------------------------------------------------------------
	int val_1 = 9;
	int val_2 = 21;
	int result = 0;

	result = val_1 + val_2;
	cout << "덧셈 결과 : " << val_1 << " + " << val_2 << " = " << result << endl;
	result = val_1 - val_2;
	cout << "뺄셈 결과 : " << val_1 << " - " << val_2 << " = " << result << endl;
	result = val_1 * val_2;
	cout << "곱셈 결과 : " << val_1 << " * " << val_2 << " = " << result << endl;
	result = val_2 / val_1;
	cout << "나눗셈 결과 : " << val_2 << " / " << val_1 << " = " << result << endl;
	result = val_2 % val_1;
	cout << "나머지 결과 : " << val_2 << " % " << val_1 << " = " << result << endl;

	cout << "현재 result 값 :  " << result << endl;
	// result = 3
	cout << "후위 증가 연산자(result++) 값 :  " <<  result++ << endl; // 3 출력
	// result = 3+1 = 4
	cout << "후위 감소 연산자(result--) 값 :  " << result-- << endl;  // 4 출력
	// result = 4-1 = 3

	++result;		// result = 3+1 = 4
	cout << "전위 증가 연산자(++result) 값 :  " << result << endl;		// 4 출력
	--result;		// result = 4-1 = 3
	cout << "전위 감소 연산자(--result) 값 :  " << result << endl;		// 3 출력

	cout << "전위 증가/감소 연산자  :  해당 코드 라인이 끝나기 전에 변수에 증감이 반영된 후 해당라인 코드 실행" << endl;
	cout << "후위 증가/감소 연산자  :  해당 코드 라인이 끝난 후에 변수에 증감이 반영되서 해당라인 코드 실행시 증감 반영이 안된상태로 실행" << endl;
	*/

	/*
	//실습6. switch문 ㅡ 리더님 코드
	int input = 0;
	char grade = 0;
	bool flag = !true;		// if (flag)를 이용해서 특정 코드들을 on/off처럼 실행여부를 선택할 수 있음

	cout << "점수를 입력하시오." << endl;
	cin >> input;

	// 아두이노에서 통신부분은 if 조건문으로 정리하고
	// 제어부분은 if조건문의 결과를 switch문으로 정리하는 경우가 있음

	if (input >= 91 && input <= 100) {
		grade = 'A';
	}
	else if (input >= 76 && input <= 90) {
		grade = 'B';
	}
	else if (input >= 51 && input <= 75) {
		grade = 'C';
	}
	else if (input >= 35 && input <= 50) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	switch (grade) {
	case 'A' :
		if (flag) cout << "학점은 " << grade << " 입니다." << endl;
		break;
	case 'B':
		if (flag) cout << "학점은 " << grade << " 입니다." << endl;
		break;
	case 'C':
		if (flag) cout << "학점은 " << grade << " 입니다." << endl;
		break;
	case 'D':
		if (flag) cout << "학점은 " << grade << " 입니다." << endl;
		break;
	case 'F':
		if (flag) cout << "학점은 " << grade << " 입니다." << endl;
		break;

	}



	//실습6. switch문
	int score = 0;
	int grade = 0;
	cout << "정수의 점수를 입력하세요.(0~100)" << endl;
	cin >> score;

	if (score >= 91 && score <= 100) {
		grade = 0;
	} else if (score >= 76 && score <= 90) {
		grade = 1;
	} else if(score >= 51 && score <= 75) {
		grade = 2;
	} else if (score >= 35 && score <= 50) {
		grade = 3;
	} else {
		grade = 4;
	}

	switch (grade) {
	case 0 :
		cout << "학점은 A 입니다." << endl;
		break;
	case 1:
		cout << "학점은 B 입니다." << endl;
		break;
	case 2:
		cout << "학점은 C 입니다." << endl;
		break;
	case 3:
		cout << "학점은 D 입니다." << endl;
		break;
	case 4:
		cout << "학점은 F 입니다." << endl;
		break;
	}
	*/

	/*
	// 조건문 : 삼항연산자 ----------------------------------------------------------------------------------
	char score = 0;
	
	cout << "학점을 입력하세요." << endl;
	cin >> score;
	
	score == 'F' ?   cout << "재수강" :   cout << "수고했습니다.";
	
	
	
	// 실습7. 삼항연산자
	int input = 0;
	
	cout << "숫자를 입력하세요" << endl;
	cin >> input;
	
	input % 5 == 0 ?
		cout << input << "는 5의 배수입니다." << endl
		: cout << input << "는 5의 배수가 아닙니다." << endl;
	
	// 실습7. 삼항연산자 ㅡ 리더님 코드
	int val = 0;
	cout << "숫자를 입력하시오." << endl;
	cin >> val;
	val % 5 == 0 ? cout << val << "는 5의배수 입니다." << endl : cout << val << "는 5의배수가 아닙니다." << endl;
	*/