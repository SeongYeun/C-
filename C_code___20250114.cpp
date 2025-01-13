#include <iostream>
#include <string>
using namespace std;


#define MAIN0114		// 실행하고 싶은 코드가 포함된 정의명을 입력(define을 주석처리하면 해당 define의 main()함수는 실행이 안됨)
#ifdef MAIN0114			// 한 프로젝트내 여러 개의 main()함수 충돌을 막기 위해 #ifdef ~ #endif 사이에 코드 입력 


int main()
{
	cout << "메인 _20250114" << endl;
	cout << "==============\n" << endl;


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