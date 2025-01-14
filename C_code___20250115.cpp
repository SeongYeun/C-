#include <iostream>
#include <string>
using namespace std;


//#define MAIN0115		// 실행하고 싶은 코드가 포함된 정의명을 입력(define을 주석처리하면 해당 define의 main()함수는 실행이 안됨)
#ifdef MAIN0115			// 한 프로젝트내 여러 개의 main()함수 충돌을 막기 위해 #ifdef ~ #endif 사이에 코드 입력 


// 반복문 종류 : for문, while문, do~while문
// 무한루프 예 : while(true), while(1), for(;;), void roop() {코드}


int main()
{
	std::cout << "메인 _ 20250115" << std::endl;


	return 0;
}

#endif



	/*
	//종합실습1. 입력 받은 두 수의 크기를 비교
	int today = 0;
	int birthday = 0;

	cout << "오늘 날짜를 입력하세요.(예:5월 24일 -> 0524)" << endl;
	cin >> today;

	cout << "생일을 입력하세요.(예:5월 24일 -> 0524)" << endl;
	cin >> birthday;

	if (today < birthday) {
		cout << "생일이 오늘 날짜보다 더 큽니다." << endl;
	}
	else if (today > birthday) {
		cout << "오늘 날짜가 생일보다 더 큽니다." << endl;
	}
	else {
		cout << "오늘 날짜와 생일이 같습니다." << endl;
	}

		//종합실습1. 입력 받은 두 수의 크기를 비교 ㅡ 리더님 코드
	int today = 0;
	int birth = 0;
	if (today == birth) {
		cout << "오늘은 나의 생일입니다." << endl;
	}
	else if (today > birth) {
		cout << "생일이 지났습니다.." << endl;
	}
	else  {
		cout << "생일이 아직 지나지 않았습니다.." << endl;
	}



	//종합실습2. 계산기 프로그램 만들기
	char operator_0 = 0;
	float val_1 = 0;
	float val_2 = 0;
	float result = 0;

	cout << "====  계산기 프로그램  ====" << endl;
	cout << "계산할 연산자를 입력하세요 (+, -, *, /)" << endl;
	cin >> operator_0;
	cout << "연산자 앞에 들어갈 값을 입력하세요" << endl;
	cin >> val_1;
	cout << "연산자 뒤에 들어갈 값을 입력하세요" << endl;
	cin >> val_2;

	switch (operator_0) {
	case '+':
		result = val_1 + val_2;
		break;
	case '-':
		result = val_1 - val_2;
		break;
	case '*':
		result = val_1 * val_2;
		break;
	case '/':
		result = val_1 / val_2;
		break;
	}

	cout << val_1 << operator_0 << val_2 << " = " << result << endl;



	//종합실습2. 계산기 프로그램 만들기 ㅡ 리더님 코드
	int val1 = 0;
	int val2 = 0;
	int ch = 0;
	int result = 0;

	cout << "피연산자 1을 입력하시오." << endl;
	cin >> val1;
	cout << "피연산자 2을 입력하시오." << endl;
	cin >> val1;
	cout << "연산자를 입력하시오." << endl;
	cin >> ch;

	if (ch == '+') result = val1 + val2;
	else if (ch == '-') result = val1 - val2;
	else if (ch == '*') result = val1 * val2;
	else if (ch == '/') result = val1 / val2;
	else cout << "연산자를 잘못 입력하셨습니다." << endl;
	cout << "계산 결과는 "<< result <<" 입니다." << endl;




	/*
	// 반복문 : for문 ----------------------------------------------------------------------------------
	// 무한루프 예 : for(;;)
	int until = 10;
	int val = 0;
	for (int i = 0; i <= until; i=i+2) {
		cout << "증가한 숫자 : " << val++ << endl;
	}
	// 이중 for문
	// 이중 for문에서 같은 증감변수를 써도 각 for문 내부에서 다른 변수로 인식함
	// 내부 for문에서 외부 for문의 증감변수를 변경할 때는 각 for문의 증감변수명을 다르게 적용하면 가능함
	for (int i = 0; i < 3; i++) {
		cout << "외부 for문 i값 : " << i << endl;
		for (int i = 0; i < 2; i++) {
			cout << "    ㄴ내부 for문 i값 : " << i << endl;
		}
	}
		

	// 실습8. 구구단 만들기
	// (1) 5단만 출력해보기
	cout << "5단 출력" << endl;
	for (int i = 1; i < 10; i++) cout << "5 * " << i << " = " << 5 * i << endl;
	cout << "" << endl;

	// (2) 1~9단까지 모두 출력해보기
	cout << "1~9단 출력" << endl;
	for (int i = 1; i < 10; i++)
	{
		cout << "===== " << i << "단 출력 =====" << endl;
		for (int j = 1; j < 10; j++){
			cout << i <<" * " << j << " = " << i * j << endl;
		}
		cout << "" << endl;
	}
	
	// 실습8. 구구단 만들기 ㅡ 리더님 코드
	int dan = 5;
	int result = 0;
	// 5단만 출력
	for (int i = 1; i <= 9; i++) {
		result = dan * i;
		cout << dan << "x" << i << " = " << result << endl;
	}
	// 2~9단 모두 출력
	for (int i = 2; i <= 9; i++) {
		cout << i << "단 출력" << endl;
		for (int j = 1; j <= 9; j++) {
			result = i * j;
			cout << i << "x" << j << " = " << result << endl;
		}
	}
	*/

	/*	
	// 실습9. 1부터 n까지의 합 구하기
	int input = 0;
	int output = 0;

	cout << "1부터 n까지의 합 구하기\n" << endl;
	cout << "숫자(양의 정수)를 입력하세요 : ";
	cin >> input;
	for (int i = 1; i <= input; i++) output += i;
	cout << "1부터 n까지의 합은 :" << output << endl;


	// 실습9. 1부터 n까지의 합 구하기 ㅡ 리더님 코드
	int val = 0;
	int sum = 0;

	cout << "1부터 n까지의 합 구하기\n" << endl;
	cout << "숫자(양의 정수)를 입력하세요 : ";
	cin >> val;
	for (int i = 1; i <= val; i++) sum += i;
	cout << "1부터 n까지의 합은 :" << sum << endl;
	*/


	/*
	// 반복문 : while문 ----------------------------------------------------------------------------------
	// 명령문에서 break나 증감문을 포함해야 무한루프에 빠지지 않는다.
	// 무한루프 예 : while(1), while(true), while(0이 아닌 값이나 문자),
	int val = 0;
	int con = 10;
	while (val < con) {
		cout << "while문  " << val++ << "번째 출력" << endl;
		if (val == 5) break;
	}
	*/

	/*
	// 반복문 : while문 ----------------------------------------------------------------------------------
	int i=0;
	do {
		cout << "do while문" << endl;
		cout << "증가하는 숫자" << i++ << endl;
	} while (i <= 0);

	i = 0;
	while (i < 0) {				// <- 조건문을 만족하지 않아서 while문은 아예 출력이 되지 않음
		cout << "while문" << endl;
		cout << "증가하는 숫자" << i++ << endl;
	}

	*/

	/*
	//실습10. while문 사용해보기
	// 1) 실습8. 구구단 만들기
	// 1-1) 5단만 출력해보기
	int i = 0;
	cout << "5단 출력" << endl;

	while (i <= 9) {
		cout << "5 * " << i << " = " << 5 * (++i) << endl;
	}

	// 1-2) 2~9단까지 모두 출력해보기
	int dan = 2;

	cout << "2~9단 출력" << endl;

	while (dan < 10) {
		cout << "==== " << dan << "단 출력 ====" << endl;
		i = 1;
		while (i < 10) {
			cout << dan << " * " << i << " = " << dan * i << endl;
			i++;
		}
		dan++;
	}

	// 2) 실습9. 1부터 n까지의 합 구하기
	int input = 0;
	int output = 0;
	i = 0;

	cout << "1부터 n까지의 합 구하기\n" << endl;
		cout << "숫자(양의 정수)를 입력하세요 : " ;
	cin >> input;

	while (i <= input) {
		output += i++;
	}
	cout << "1부터 n까지의 합 : " << output << endl;
	//실습10. while문 사용해보기 ㅡ 리더님 코드
	// 1) 실습8. 구구단 만들기
	// 1-1) 5단만 출력해보기 ㅡ 리더님 코드
	int dan = 6;
	int i = 1;
	int result = 0;

	while (i<9) {
		result = dan * i;
		cout << dan << " x " << i << " = " << result << endl;
		i++;
	}

	// 1-2) 2~9단까지 모두 출력해보기 ㅡ 리더님 코드
	dan = 2;
	result = 0;

	while (dan < 10) {
		cout << dan << "단 입니다." << endl;
		i = 1;
		while (i < 10) {
			result = dan * i;
			cout << dan << " x " << i << " = " << result << endl;
			i++;
		}
		dan++;
	}
	// 2) 실습9. 1부터 n까지의 합 구하기 ㅡ 리더님 코드
	int val = 0;
	int count = 1;
	int result = 0;

	cout << "1부터 n까지의 합 구하기\n" << endl;
	cout << "숫자(양의 정수)를 입력하세요 : ";
	cin >> val;

	while (count <= val) {
		result = result + count;
		count++;
	}
	cout << "1부터 "<< val << "까지의 합 : " << result << endl;
	*/

	/*
	//실습11. 사용자가 입력한 숫자 더하기
	int input = 0;
	int output = 0;
	std::cout << "사용자가 입력한 숫자 더하기" << std::endl;
	do {
		std::cout << "숫자를 입력하세요 (0: exit) : ";
		cin >> input;
		output += input;
	} while (input != 0);
	std::cout << "사용자가 입력한 수의 합은 : " << output << std::endl;


	//실습11. 사용자가 입력한 숫자 더하기  ㅡ 리더님 코드
	int val = 0;
	int sum = 0;

	while (true) {
		std::cout << "숫자를 입력하세요 (0: exit) : ";
		std::cin >> val;
		sum += val;
		if (val == 0) break;
	}
	std::cout << "사용자가 입력한 수의 합은 : " << sum << std::endl;
	*/


	/*

	//실습12. 입력한 숫자만큼 별 찍기
	int input = 0;
	int i = 1;
	int j = 1;

	cout << "숫자를 입력하세요 : ";
	cin >> input;
	while (i <= input) {
		j = 1;
		while (j<=i){
			cout << "*";
			j++;
		}
		cout << "" << endl;
		i++;
	}

	//실습12. 입력한 숫자만큼 별 찍기 ㅡ 리더님 코드
	int floor;
	int count_1 = 1;
	int count_2 = 1;

	std::cout << "몇 층까지 출력 할까요?" << std::endl;
	std::cin >> floor;
	while (count_1 <= floor) {
		count_2 = 1;
		while (count_2<= count_1) {
			std::cout << "*" ;
			count_2++;
		}
		count_1++;
		std::cout << std::endl;
	}
	*/

	/*

	// 종합실습3. 피라미드형 별 찍기
	int star = 1;
	int space = 0;
	int layer = 0;
	int i = 1;
	int j = 1;

	std::cout << "피라미드의 높이를 입력하시오 : ";
	std::cin >> layer;
	space = layer-1;
	while (space >= 0) {
		i = 1;
		j = 1;
		while (i<=space) {
			std::cout << " ";
			i++;
		}
		while (j<=star) {
			std::cout << "*";
			j++;
		}
		std::cout << "" << std::endl;
		star= star+2;
		space--;

	}



	// 종합실습3. 피라미드형 별 찍기 ㅡ 리더님 코드
	int f = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;

	std::cout << "피라미드 높이를 입력하시오";
	std::cin >> f;

	for (c1 = 1; c1 <= f; c1++ ) {		// 층별 반복
		for (c2 = 1; c2 <= (f - c1); c2++) {	// 공백 출력
			std::cout << " ";
		}
		for (c3 = 1; c3<= (c1 * 2 - 1); c3++) {	// 별 출력
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	*/