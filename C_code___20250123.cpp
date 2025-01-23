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
// 실습30. 원본 데이터 변경해보기 (main 밖)
void inputNums(int* n1, int* n2, int* iter) {
	cout << "첫 번째 숫자를 입력하세요 : ";
	cin >> *n1;
	cout << "두 번째 숫자를 입력하세요 : ";
	cin >> *n2;
	cout << "값을 증가시킬 획수를 입력하세요 : ";
	cin >> *iter;
	cout << "입력된 값 : 첫 번째 숫자 : " << *n1 << ", 두 번째 숫자 : " << *n2 << ", 증가 횟수 : " << *iter << "\n" << endl;
}
void IncSumNums(int* n1, int* n2, int* sum) {
	(*n1)++;
	(*n2)++;
	*sum = *n1 + *n2;
}


// 실습30. 원본 데이터 변경해보기 (main 밖)  ㅡ 리더님 코드
void input(int &x, int& y, int& z) {
	cout << "첫 번째 숫자를 입력하세요 : ";
	cin >> x;
	cout << "두 번째 숫자를 입력하세요 : ";
	cin >> y;
	cout << "값을 증가시킬 횟수를 입력하세요 : ";
	cin >> z;
	//cout << "입력된 값 : 첫 번째 숫자 : ";

}
void increase(int& x, int& y, int& z) {
	for (int i = 0; i < z; i++) {
		x++;
		y++;
		int sum = x + y;
		cout << "증가 " << i + 1 << "회차 :" << endl;
		cout << "현재 값 : 첫 번째 숫자 : " << x << ", 두 번째 숫자 : " << y << endl;
		cout << "두 숫자의 합 : " << sum << endl;
	}
}





// 종합실습9. 동적으로 배열 할당후 입력하기
class ControlArr {
private:
	//int* arr;
	int* arr = nullptr;			// <- 1차 초기화
	// nulptr : C++11에서 도입된 키워드, 포인터가 어떤 유효한 주소나 객체를 가리키지 않음을 명시하기 위해 사용.
	// nulptr : 포인터 번수에 대한 null값
	int input, n;
	bool flag = true;

public:
	ControlArr() {
	//초기 배열 생성
	n = 3;
	//int* arr = new int[n];
	arr = new int[n];			// <- private에서 nullptr로 선언 후 생성자에서 추가 초기화 작업
	for (int i = 0; i < n; i++) arr[i] = 0;		// <- 배열 사용 (초기화가 아님)
	cout << *arr << endl;
	cout << "배열의 크기를 3로 초기화 했습니다.\n" << endl;
	cout << "1: 현재 배열 출력" << endl;
	cout << "2: 배열에 요소 추가" << endl;
	cout << "3: 배열의 마지막 요소 삭제" << endl;
	cout << "0: 종료\n" << endl;
	
	while (flag) {
		cout << "명령을 입력 하세요: ";
		cin >> input;
		switch (input) {
		case 0:		//0: 관리 종료
			cout << "프로그램을 종료합니다." << endl;
			flag = false;
			break;
		case 1:		//1: 현재 배열 요소 출력
			print_element(arr, n);
			break;
		case 2:		//2: 배열 하나 추가하고 값 입력
			add_elem(arr);
			break;
		case 3:		//3: 배열 하나 삭제하고 삭제된 현재 상태 배열 출력
			del_elem(arr);
			break;
		}
	}
	}
	~ControlArr() {
		delete[] arr;
		cout << "배열 메모리가 해제되었습니다." << endl;
	}
	//1: 현재 배열 요소 출력
	void print_element(int* arr, int n) {
		cout << "현재 배열 : ";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	//2: 배열 하나 추가하고 값 입력
	void add_elem(int* arr) {
		int add_num;
		cout << "추가할 값을 입력하세요 : ";
		cin >> add_num;
		n++;
		arr[n - 1] = add_num;
		cout << "값 " << add_num << "를 배열에 추가했습니다." << endl;
		print_element(arr, n);
	}
	//3: 배열 하나 삭제하고 삭제된 현재 상태 배열 출력
	void del_elem(int* arr) {
		n--;
		cout << "마지막 요소를 제거했습니다."<<endl;
		cout << "새로운 배열: " ;
		print_element(arr, n);
	}
};

// 종합실습9. 동적으로 배열 할당후 입력하기 (main함수 밖) ㅡ 리더님 코드
class ArrClass {
private:
	int n = 3;
	int* arr;
public:
	ArrClass() {
		arr = new int[n];
		cout << "배열의 크기를 "<<n<<"으로 초기화했습니다.\n" << endl;
		for (int i = 0; i < n; i++) arr[i] = 0;
	}
	void Add() {
		int input_val;
		n++;
		int* arr2 = new int[n];
		for (int i = 0; i < n; i++) arr2[i] = arr[i];
		cout << "추가할 값을 입력하세요 : ";
		cin >> input_val;
		arr2[n - 1] = input_val;

		delete[] arr;	// <- 추가 전 배열 삭제
		arr = arr2;		// <- 배열 첫 값의 주소값을 변경
		// delete[] arr2;	// <- arr2를 삭제하면 arr이 따라가야할 주소값이 없어져서 trash value가 출력됨
		// 결국엔 배열 포인터 2개를 사용하게 되고 arr2 포인터가 중간다리 역할이고
		// arr이 데이터값에 직접 접근하는게 아님

		cout << n << "번째 배열에 값을 추가 했습니다." << endl;
		Print();
	}	
	void Remove() {
		n--;
		int* arr2 = new int[n];
		for (int i = 0; i < n; i++) arr2[i] = arr[i];
		delete[] arr;
		arr = arr2;
		cout << "마지막 요소를 제거했습니다." << endl;
		Print();
	}
	void Print() {
		cout << "현재 배열 : ";
		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
	}
	~ArrClass() {
		delete[] arr;		// <- arr만 delete해도 arr 가리키는 data가 삭제되면서 arr2도 자동적으로 소멸되는 효과가 생김
		cout << "배열 메모리가 해제되었습니다." << endl;
	}
};

/* 동적 배열 올바른 복사 방법
void Add() {
	int input_val;
	n++;
	int* arr2 = new int[n];
	for (int i = 0; i < n - 1; i++) arr2[i] = arr[i];  // 올바른 복사

	cout << "추가할 값을 입력하세요 : ";
	cin >> input_val;
	arr2[n - 1] = input_val;

	delete[] arr;    // 이전 배열 삭제
	arr = arr2;      // 새로운 배열 주소 할당

	cout << n << "번째 배열에 값을 추가 했습니다." << endl;
	Print();
}

*/

// 실습31. 문자열 합치기   ㅡ 리더님 코드
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
	// call by value (값 복사본 전달) -------------------------------------------------------------------------------------
	int x = 5;
	int y = 3;
	int* p_x = &x;
	int* p_y = &y;
	int res = callByValue_2(x, y);
	callByValue_1(x, y);					// 10 20
	cout <<"call by value_1 후 변수값 : " << x << " " << y << endl;		// 5 3		<-- x, y값의 복사본이 함수의 매개변수로 전달됐음을 의미
	cout << "call by value_2 후 변수값 : " <<res << endl;// 10


	// call by reference (주소값 전달) -------------------------------------------------------------------------------------
	callByRef_1(x, y);					// 10 20
	cout << "call by reference 후 변수값 : " << x << " " << y << endl;		// 10 20	<-- x, y의 주소값을 전달해서 함수 내에서 값을 재할당

	callByRef_2(p_x, p_y);					// 00000034C3D8FAE4 00000034C3D8FB04
	cout << "call by reference 후 변수값 : " << x << " " << y << endl;		// 30 50	<-- x, y의 주소값을 전달해서 함수 내에서 값을 재할당


	// 실습30. 원본 데이터 변경해보기
	int n1, n2, iter, sum = 0;
	int* p_n1 = &n1;
	int* p_n2 = &n2;
	int* p_iter = &iter;
	int* p_sum = &sum;

	inputNums(p_n1, p_n2, p_iter);

	for (int i = 0; i < *p_iter; i++) {
		IncSumNums(p_n1, p_n2, p_sum);
		cout << "증가 " << i + 1 << "회차 : " << endl;
		cout << "현재 값 : 첫 번째 숫자 : " << *p_n1 << ", 두 번째 숫자 : " << *p_n2 << endl;
		cout << "두 숫자의 합 : " << *p_sum << endl;
	}

	// 실습30. 원본 데이터 변경해보기  ㅡ 리더님 코드
	int x, y, z;
	input(x, y, z);
	increase(x, y, z);



	// 종합실습9. 동적으로 배열 할당후 입력하기 (main함수 내)
	ControlArr arr1;

	
	// 종합실습9. 동적으로 배열 할당후 입력하기 (main함수 내)  ㅡ 리더님 코드
	ArrClass AC;
	bool flag = true;
	int cmd;
	cout << "1: 현재 배열 출력" << endl;
	cout << "2: 배열에 요소 추가" << endl;
	cout << "3: 배열의 마지막 요소 삭제" << endl;
	cout << "0: 종료" << endl;
	while (flag) {
		cout << "명령을 입력하세요 : " ;
		cin >> cmd;
		switch (cmd) {
		case 0:
			flag = false;
			cout << "프로그램을 종료합니다." << endl;
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


	// 문자열과 포인터 -------------------------------------------------------------------------------------
	char str[] = "helloworld";
	const char str2[] = "helloworld";				// <-- const를 붙이면 수정 불가상태가 됨
	char* p = str;									// p -> str
	//char* p2 = str2;								// 오류발생 : "const char *" 형식의 값을 사용하여 "char"형식의 엔터티를 초기화할 수 없습니다.
	cout << "첫 번째 문자 : " << *p << endl;		// h
	cout << "두 번째 문자 : " << *p+2 << endl;		// 106  (h의 ASCII값인 104에 2를 더한 값인 106이 출력됨
	cout << "두 번째 문자 : " << *(p + 2) << endl;	// l (영어 소문자 l이 출력됨)
	p[0] = 'H';
	//str2[0] = 'H';									// 오류발생 : 식이 수정할 수 있는 value여야 합니다.
	cout << "변경 후 문자열 : " << str << endl;		// Helloworld



	// 실습31. 문자열 합치기
	char str1[] = "hello";
	char str2[] = "world";
	char* p_st1 = str1;
	char* p_st2 = str2;
	cout << "합쳐진 문자열 : ";
	for (int i = 0; i < 10; i++) {
		if (i < 5) cout << *(p_st1 + i);
		else cout << *(p_st2 + (i-5));
	}
	*/

	// 실습31. 문자열 합치기   ㅡ 리더님 코드
	const char* str1 = "hello";
	const char* str2 = "world";
	//cout<< "str1의 크기 : "<< calsize(str1);
	char* str_print = glue(str1, str2);
	cout << "합쳐진 문자열 : " << str_print << endl;


	// 실습32. 커스텀 문자열 함수 만들기


	// 종합실습10. 커스텀 입력함수 만들기




	return 9;
}

#endif