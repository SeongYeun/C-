#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

#define MAIN0113		// 실행하고 싶은 코드가 포함된 정의명을 입력
#ifdef MAIN0113			// 한 프로젝트내 여러 개의 main()함수 충돌을 막기 위해 #ifdef ~ #endif 사이에 코드 입력 

int main() {


	return 0;
}




	//std::cout << "hello, 신재생에너지 1기!!" << std::endl;

	/*
	// 자료형 ----------------------------------------------------------------------------------
	bool b = true;
	char c = 'A';	// -127(-2^8) ~ 127(+2^8)  or 0 ~ 255  (1byte=8bit)
	int i = 1;      // -2,147,483,648 ~ 2,147,483,647  (4byte)
	long l = 1;     // -2,147,483,648 ~ 2,147,483,647  (8byte) 
	float f = 2.2;	//   (4byte)
	double d = 1.0; //   (8byte)

	// 문자는 따옴표
	// 문자열은 쌍따옴표

	bool b = 4;
	char c = 'A';
	int i = 100;
	float f = 1.111;
	int z = 2 / 4;
	float y = 1000;

	std::cout << b << std::endl;	// 1
	std::cout << c << std::endl;	// A
	std::cout << i << std::endl;	// 100
	std::cout << f << std::endl;	// 1.111
	std::cout << z << std::endl;	// 0     // int형이라서 소수점 이하는 무시되고 정수만 저장됨
	std::cout << y << std::endl;	// 1000  // 출력형태를 지정하지 않아서 정수형으로 출력됨

	std::cout << "bool 타입 크기 : " << sizeof(b) << std::endl;		// bool 타입 크기 : 1
	std::cout << "char 타입 크기 : " << sizeof(c) << std::endl;		// char 타입 크기 : 1
	std::cout << "int 타입 크기 : " << sizeof(i) << std::endl;		// int 타입 크기 : 4
	std::cout << "float 타입 크기 : " << sizeof(f) << std::endl;	// float 타입 크기 : 4
	std::cout << "int 타입 크기 : " << sizeof(z) << std::endl;		// int 타입 크기 : 4
	std::cout << "float 타입 크기 : " << sizeof(y) << std::endl;	// float 타입 크기 : 4
	*/



	/*
	// 변수명 ----------------------------------------------------------------------------------

	// 변수명 작성 - 좋은 예시
	// 	>> 향후 코드 파악 또는 협업을 위해서
	//  >> 오픈 소스에 commit을 하기 위해서는 
	int number_of_motor = 5;	// 스네이크 표기법 사용
	int NumberOfMotor = 5;		// 파스칼 표기법 사용
	double temperature = 23.4;	// 의미를 알수 있는 변수명 사용

	// 변수명 작성 - 나쁜 예시
	short _1_motor = 1;		// 언더바나 숫자로 시작하는 변수명
	//int 1_sensor = 1;		// 언더바나 숫자로 시작하는 변수명
	int aaa = 100;			// 의미없는 변수명 사용
	char i = 1;				// 의미없는 변수명 사용


	// 실습2. 변수명
	// 1) 학생성적등급 변수명(스네이크)
	char student_grade = 'A';

	// 2) 센서1의 온도 습도 값 변수명 (카멜)
	float temperatureSensor1 = 23.4;
	float humidtySensor1 = 52.3;
	// >>>
	float sensor1Temp = 23.4;
	float sensor1Humi = 52.3;

	// 3) 모터 속도값 변수명 (파스칼)
	float SpeedMotor = 32.4;
	// >>>
	int MotorSpeed = 20;

	*/


	/*
	// 변수와 메모리(주소) ----------------------------------------------------------------------------------
	int a = 100;
	int b = 100;

	int* ptr1 = 0;
	int* ptr2 = 0;

	ptr1 = &a;
	ptr2 = &b;

	std::cout << ptr1 << std::endl;		// 000000134011F884
	std::cout << ptr2 << std::endl;		// 000000134011F8A4
	// C++에서는 각 변수의 값이 같더라도 변수마다 메모리주소는 상이함을 의미
	// 파이썬에서는 각 변수의 값이 같으면 변수들의 메모리주소는 같음 
	// (메모리 주소가 같다는 것이 메모리를 한 번만 확보한다는 의미는 아님)
	// 네트워크 : 상위바이트부터 저장
	// 컴퓨터내 : 하위바이트부터 저장
	*/


	/*
	// 출력: iostream ----------------------------------------------------------------------------------
	int val = 10000;
	float val2 = 10000.2;
	
	std::cout << "출력하려는 내용 : " << std::endl;
	std::cout << val << std::endl;

	val = 20000;		// 기존 변수명에 다른 값을 재할당시에는 자료형 선언 안 함

	std::cout << "변경 후 내용 : " << std::endl;
	std::cout << val << std::endl;

	printf("C언어 기준의 printf함수를 이용한 출력\n");

	printf("%.2f\n", val);		// 0.00				// val은 int형인데 출력을 float형으로 불일치하면서 제대로된 값 출력이 안됨
	printf("%.2f\n", val2);		// 10000.20
	printf("%d\n", val);		// 20000
	printf("%d\n", val2);		// -1610612736		// val2는 float형인데 출력을 int형으로 불일치하게 지정해서 엉뚱한 값이 출력됨

	// % d: 정수형(int)
	// % f : 부동 소수점(float)
	// % lf : 부동 소수점(double)
	// % c : 단일 문자(char)
	// % s : 문자열(char 배열)
	// % x : 16진수(소문자)
	// % X : 16진수(대문자)
	// % o : 8진수
	// % %: % 문자 자체
	
	// ASCII코드
	char ch = 43;		// char에서 숫자를 할당하면 ASCII코드로 인식하여 ASCII코드에 해당하는 문자가 출력됨
	int i = 100;
	float f = 0.01;

	std::cout << ch << std::endl;
	// C++에서는 ASCII코드로 인식해서 바로 대응되는 문자가 출력됨
	// ASCII code table 참고 : https://www.commfront.com/pages/ascii-chart
	*/


	/*
	// 입력: iostream ----------------------------------------------------------------------------------
	// Sensing 값을 받거나 Command 값을 받아서 전달할때 주로 사용됨

	int val = 0;
	
	std::cout << "정수 값을 입력하시오 : " << std::endl;
	std::cin >> val;
	std::cout << "입력된 값 : ";
	std::cout << val << std::endl;


	char ch = 0;
	std::cout << "한 문자를 입력하시오 : " << std::endl;
	std::cin >> ch;
	std::cout << "입력된 값 : ";
	std::cout << ch << std::endl;


	// #include <stdio.h> 이후
	int i = 0;
	scanf_s("%d", &i);
	printf("%d\n", i);


	// #include <string> 적용 후
	std::string input_string = "null";		// 문자열 변수 선언
	// 아두이노에서는 string 자료형 사용 가능함
	// C나 어셈블리 기반의 프로그램에서는 string 자료형 사용 불가능함 (ARM에서 생성한 프로그램 등)


	//실습3. 입출력
	std::cout << "출력할 문자열을 입력하세요.\n이 문자열은 5회 연속 출력됩니다." << std::endl;
	std::cin >> input_string;
	std::cout << "입력 : ";
	std::cout << input_string << std::endl;
	
	for (int i = 0; i < 5; ++i) {
		std::cout << i;
		std::cout << "회 출력! 입력한 문자열 : ";
		std::cout << input_string << std::endl;
	}
	// C언어에서는 원래 문자열 지원을 하지 않아서
	// 문자 한 글자씩 배열에 넣고 배열을 이용해서 문자열을 출력하는 방식을 사용하는데
	// 컴파일 버전이 높아지면서 문자열을 인식하기도 하는 듯 하다

	*/
	

#endif



