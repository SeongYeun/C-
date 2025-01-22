#include <iostream>
#include <string>

using namespace std;

//#define MAIN0122
#ifdef MAIN0122
// 실습27. 포인터 사용해보기

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
// 실습27. 포인터 사용해보기  ㅡ 리더님 코드

void charInc(char* p)
{
	(*p)++;
	cout << "char 증가 후 : " << *p << endl;
}
void intInc(int* p)
{
	(*p)++;
	cout << "int 증가 후 : " << *p << endl;
}
void floatInc(float* p)
{
	(*p)++;
	cout << "float 증가 후 : " << *p << endl;
}
void charDec(char* p)
{
	(*p)--;
	cout << "char 감소 후 : " << *p << endl;
}
void intDec(int* p)
{
	(*p)--;
	cout << "int 감소 후 : " << *p << endl;
}
void floatDec(float* p)
{
	(*p)--;
	cout << "float 감소 후 : " << *p << endl;
}




//////////////////////////////////////////////////////////////////////////////////////
int main() {
	/*
	// 포인터 -------------------------------------------------------------------------------------
	char val1 = 5;
	char val2 = 5;
	char val3 = 'a';
	float val4 = 120.1;

	char* p_v1 = &val1;
	char* p_v2 = &val2;
	char* p_v3 = &val3;
	float* p_v4 = &val4;
	// cout이 포인터값 출력시 문자열 형식으로 해석하면서 trash value 출력될 수 있음
	// char 형식의 변수를 출력할 때 포인터값이 trash vlaue로 반환되는 문제가 자주 발생
	// char 포인터를 cout으로 출력하면 문자열로 해석되기 때문에 trash value 출력됨
	// 1) 메모리 주소를 정수형으로 캐스팅
	// static_cast<void*>(p_v1)
	// 2) 역참조 사용
	// *p_v1

	cout << "1) 변수 값      : " <<  val1 << endl;
	cout << "1) 포인터 값    : " << static_cast<void*>(p_v1) << endl;
	cout << "1) 포인터 값 *  : " << *p_v1 << endl;
	cout << "2) 변수 값      : " <<  val2 << endl;
	cout << "2) 포인터 값 static_cast<void*>   : " << static_cast<void*>(p_v1) << endl;
	cout << "2) 포인터 값 (void*)   : " << (void*)(p_v1) << endl;
	cout << "2) 포인터 값 *  : " << *p_v2 << endl;
	cout << "3) 변수 값      : " <<  val3 << endl;
	cout << "3) 포인터 값    : " << static_cast<void*>(p_v3) << endl;
	cout << "3) 포인터 값 *  : " << *p_v3 << endl;
	cout << "4) 변수 값      : " <<  val4 << endl;		// 120.1
	cout << "4) 포인터 값    : " <<  p_v4 << endl;		// 000000F446CFF584
	cout << "4) 포인터 값 *  : " << *p_v4 << endl;		// 120.1


	//// 문자열, 배열 및 trash value
	char str_arr_1[] = { 'h','e','l','l','o' };
	char str_arr_2[] = { 'h','e','l','l','o','\0' };
	// 문자열 배열에서 마지막값은 null이여야 해서 \0을 입력해줘야 함
	// \0이나 따옴표 없는 0 없으면 쓰레기 값이 뒤에 같이 출력된다.
	// 전역변수(main함수 밖)는 자동으로 0으로 초기화되기 때문에 trash 값이 안나오지만
	// 지역변수(main함수 안)는 자동으로 0으로 초기화되기 않기 때문에 trash 값이 나옴
	// 문자열 끝에는 보이지 않는 \0 또는 null값이 있어서 그 값을 통해서 문자열의 끝을 인식한다.
	string str5(str_arr_1);
	string str6(str_arr_2);

	cout << "str5 : " << str5 << endl;			// hello儆儆儆儆儆儆儆儆儆儆儆儆儆?ello
	cout << "str6 : " << str6 << endl;			// hello

	int i = 0;
	string str = "hello";
	char c_arr[] = {'h','e','l','l','o', NULL};

	cout << str[5] << endl;
	//cout << str[6] << endl;
	if (str[5] == 0) {
	cout << "str[5] 는 0 입니다." << endl;		// <- 해당 문구가 출력됨
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


	cout << "1) 포인터 값    : " << p_val1 << endl;			// 0000005ED36FF9E8
	cout << "1) 포인터 값 *  : " << *p_val1 << endl;		// 4


	// 실습27. 포인터 사용해보기
	char ch = 'A';
	int in = 10;
	float fl = 5.5;

	char* v1 = &ch;
	int* v2 = &in;
	float* v3 = &fl;

	cout << "char 증가 후 : " << char_sum(v1, 1) << endl;
	cout << "int 증가 후 : " << int_sum(v2, 1) << endl;
	cout << "float 증가 후 : " << float_sum(v3, 1)<< endl;
	cout << "char 감소 후 : " << char_sum(v1, -1) << endl;
	cout << "int 감소 후 : " << int_sum(v2, -1) << endl;
	cout << "float 감소 후 : " << float_sum(v3, -1) << endl;


	// 실습27. 포인터 사용해보기  ㅡ 리더님 코드

	char ch = 'A';
	int i = 10;
	float f = 5.5;
	charInc(&ch);
	intInc(&i);
	floatInc(&f);
	charDec(&ch);
	intDec(&i);
	floatDec(&f);


	// 동적 배열 -------------------------------------------------------------------------------------
	int* arr_0 = new int[10];
	arr_0[0] = 10;
	cout << "동적배열 : " << arr_0[0] << endl;		// 동적배열 : 10
	cout << "동적배열 : " << arr_0 << endl;			// 동적배열 : 0000017652964C00
	cout << "동적배열 : " << *arr_0 << endl;

	int h = 0;
	cout << "숫자를 입력 하시오 : ";
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
	// 실습28. 동적배열 사용해보기
	int n=0;
	cout << "배열의 크기를 입력하세요 : ";
	cin >> n;
	int *arr = new int[n];

	cout << n << "개의 값을 입력하세요:" << endl;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 값 : ";
		cin >> arr[i];
	}
	cout << "입력된 배열의 값 : ";
	for (int j = 0; j <n; j++) {
		cout << arr[j] << " ";
	}
	delete[] arr;


	// 실습28. 동적배열 사용해보기 ㅡ 리더님 코드
	cout << "배열의 크기를 입력하세요 : ";
	int num;
	cin >> num;

	cout << num<<"개의 값을 입력하세요 : "<< endl;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 값 : ";
		cin >> arr[i];
	}
	cout << "입력된 배열의 값 : ";
	for (int j = 0; j < num; j++) {
		cout << arr[j] <<" ";
	}

	*/


	/*
	// 2차원 동적 배열 -------------------------------------------------------------------------------------
	int s_arr[2][3] = {};
	int val;
	cout <<"배열 크기를 설정하세요" << endl;
	cin >> val;

	// 행 선언
	int** arr2 = new int* [val];

	// 열 선언
	for (int i = 0; i < val; i++) {
		arr2[i] = new int[val];
	}
	
	// 배열 사용(값 할당)
	for (int i = 0; i < val; i++) {
		for (int j = 0; j < val; j++) {
			arr2[i][j] += 1;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	// 열 해제
	for (int i = 0; i < val; i++) {
		delete[] arr2[i];
	}

	// 행 해제
	delete[] arr2;



	// 포인터의 포인터
	int val1 = 10;
	int* p = &val1;
	int** pp = &p;
	cout << "val1 값 : "<< val1 << endl;
	cout << "p의 주소 값 : "<< p << endl;
	cout << "p의 데이터 값 : " << *p << endl;
	cout << "pp의 주소 값 : "<< pp << endl;
	cout << "pp의 데이터 값 : " << **pp << endl;

	int s_arr[5][5] = {
		{ 1,2,3,4,5 }, { 6,7,8,9,10 },
	};
	int* p_arr = &s_arr[0][0];
	int** pp_arr = &p_arr;
	// 8값에 접근
	cout << "p의 주소 값 : " << *(p_arr +7) << endl;


	// 정적배열 vs 동적배열
	int s_arr[5] = { 0, };
	int* p_a = new int[5];

	int* p = NULL;
	double* d = NULL;


	cout << "정적 배열의 크기 : " << sizeof(s_arr) << endl;			// 20  : 배열의 크기(바이트 수 = 4(int) * 5)
	cout << "동적 배열의 크기 : " << sizeof(p_a) << endl;			// 8   : 주소값의 크기(바이트 수) 
	cout << "포인터 p_a 크기 : " << sizeof(p_a) << endl;			// 8   : 주소값의 크기
	cout << "포인터 P 크기 : " << sizeof(p) << endl;				// 8   : 주소값의 크기
	cout << "포인터 d 크기 : " << sizeof(d) << endl;				// 8   : 주소값의 크기

	// 포인터 할당의 잘못된 예
	p_a[100] = 10;
	cout << "동적 배열의 포인트 테스트 p_a[100] : " << p_a[100] << endl;			// 10
	// 메모리 주소는 배열의 할당과 상관없이 이미 있는 상태이기 때문에 주소값에 할당된 값이 출력됨
	// 할당은 됐지만 원래 의도의 배열로는 접근할 수 없음

	// 연산이 너무 많이 반복되거나 계산된 값이 너무 커지면 trash value가 반환되는 경우가 있음
	// 이럴때는 이전 프로그램/연산을 종료하고 다음 프로그램/연산을 하면 오류 가능성을 낮출 수 있음

	int size = 5;
	int* arr = new int[size];

	// 동적 배열 초기화
	for (int i = 0; i < size; ++i) {
		arr[i] = i + 1;
	}

	// 범위 초과 접근으로 인한 garbage value
	for (int i = 0; i < size + 5; ++i) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	// 결과 값
	// arr[0] = 1
	// arr[1] = 2
	// arr[2] = 3
	// arr[3] = 4
	// arr[4] = 5
	// arr[5] = -33686019		// <- arr 범위 벗어나면서 부터 garbage value가 return됨
	// arr[6] = 207421294
	// arr[7] = -2147474432
	// arr[8] = -572662307
	// arr[9] = -572662307
	
	// 메모리 해제
	delete[] arr;


	// 실습29. 2차원 동적배열 사용해보기
	int row, col = 0;
	bool flag = true;

	// 배열 크기 입력받기
	while (flag) {
		cout << "x를 입력하세요 : ";
		cin >> row;
		cout << "y를 입력하세요 : ";
		cin >> col;
		if ((row > 0) && (col > 0)) {
			flag = false;
		}
		else {
			cout << "x와 y 모두 양수를 입력해주세요." << endl;
		}
	}
	// 행 선언
	int** arr2 = new int* [row];

	// 열 선언
	for (int i = 0; i < row; i++) {
		arr2[i] = new int[col];
	}

	// 배열 사용(값 할당) 및 출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr2[i][j] = i*col + (j+1);
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	// 열 해제
	for (int i = 0; i < row; i++) {
		delete[] arr2[i];
	}

	// 행 해제
	delete[] arr2;


	// 실습29. 2차원 동적배열 사용해보기  ㅡ 리더님 코드
	int x, y;
	bool flag = true;
	int a = 0;

	while (flag) {
		cout << "x를 입력하세요 : ";
		cin >> x;
		cout << "y를 입력하세요 : ";
		cin >> y;
		if (x > 0 && y > 0) flag = false;
		else cout << "x와 y 모두 양수를 입력해주세요." << endl;
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

	// 포인트 연산 -------------------------------------------------------------------------------------
	// 앞의 데이터/블록이 다음 데이터/블록을 가르킬때 포인터와 동적배열을 많이 이용함
	// 아두이노에서 CPU에 접근할때 메모리를 통해야 하고 그때 모두 포인터로 접근하도록 구현함
	int num = 100;
	int* p = NULL;
	p = &num;
	cout << "포인터 p가 가리키는 값 : " << p << endl;			// 000000B5F32FF604   <-- 실행할때마다 계속 주소값이 변함 (실행때마다 주소값을 랜덤하게 정해서 할당함)
	cout << "num의 값 : " << num << endl;						// 100

	*p += 50;
	cout << "포인터 p가 가리키는 값 : " << *p << endl;			// 150
	cout << "num의 값 : " << num << endl;						// 150

	(*p)++;
	cout << "포인터 (*p)++ : " << *p << endl;			// 151
	cout << "num의 값 : " << num << endl;						// 151

	*p++;		// ++연산 후 그 포인터의 데이터값에 접근
	cout << "포인터 *p++ : " << *p << endl;			// -858993460
	cout << "num의 값 : " << num << endl;						// 151


	int n1 = 10;
	int n2 = 20;
	int sum = n1 + n2;
	int* p1 = &n1;
	int* p2 = &n2;

	//cout << "주소값 연산 : " << p1 + p2 << endl;			// 에러 발생
	cout << "주소값 연산 : " << *p1 + *p2 << endl;			// 30



	return 0;
}
#endif