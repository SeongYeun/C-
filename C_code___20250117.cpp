#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;		// std : 표준 라이브러리

//#define MAIN0116
#ifdef MAIN0116

struct Car {
	string name;
	char safety_grade = 'A';
	int door;
	int age;
	float engine_temp;
	float fuel_gauge[10];				// 배열도 가능
};

struct Rectangle {
	float width;
	float height;
};


int main()
{


	std::cout << "메인 _ 20250116" << std::endl;
	std::cout << "=============================\n\n" << std::endl;
	// const를 앞에 붙여주면 val은 변수지만 이후 코드에서 상수로 인식하게하는 명령어임
	// float 형을 지정했지 떄문에 초기값 0에 소수점(.0)을 입력하지 않아도 됨
	// 구조체는 파이썬의 클래스와 유사한 개념
	

	/*
	// 실습19. 2차원 배열 사용해보기
	// 1) exam의 2차원 배열 변수 생성
	// (5명 학생의 '수학', '영어', '과학' 점수 임의 입력)
	int exam[5][3] = { {34,54,86},{64,75,81},{81,76,96},{77,69,81},{43,65,71} };
	// 2) exma안 모든 원소 출력
	int row = sizeof(exam) / sizeof(exam[0]);
	int col = sizeof(exam[0]) / sizeof(exam[0][0]);

	for (int i = 0; i < row; i++) {
		cout << i << "번 학생의 영어, 수학, 과학 성적은  : ";
		for (int j=0; j<col; j++){
			cout << " " << exam[i][j] ;
		}
		cout << endl;
	}

	// 종합실습4. 배열 사용해보기 (string 함수 최대한 활용)
	const int row = 5;
	const int col = 3;
	int idx[2] = { 0, };
	int exam[row][col] = { {0,}, };
	string score= "";
	string subject[3] = { "영어", "수학", "과학" };

	// 점수 입력받기
	for (int i = 0; i < row; i++) {
		cout << i + 1 << "번 학생의 영어, 수학, 과학 성적을 입력하세요 : ";
		getline(cin, score);
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				idx[i] = score.find(" ");
			}
			else {
				idx[i] = score.find(" ", idx[i-1]+1);
			}
		}
		for (int j = 0; j < col; j++) {
			if (j == 0) {
				exam[i][j] = stoi(score.substr(0, idx[j]));
			}
			else if (j==1){
				exam[i][j] = stoi(score.substr(idx[j-1]+1, idx[j]-idx[j-1]-1));
			}
			else {
				exam[i][j] = stoi(score.substr(idx[j-1]));
			}
		}
	}

	cout << "==================================================" << endl;
	// 모든 원소 출력하기
	for (int i = 0; i < row; i++) {
		cout << i + 1 << "번 학생의 영어, 수학, 과학, 성적은 : ";
		for (int j = 0; j < col; j++) {
			cout << " " << exam[i][j];
		}
		cout << endl;
	}


		// 종합실습4. 배열 사용해보기   ㅡ 리더님 코드
	const int student = 5;
	const int subject = 3;
	int exam[student][subject] = {};
	string str = " ";
	int point = 0;
	int val = 0;
	for (int i = 0; i < student; i++)
	{
		cout << i + 1 << "번째 학생의 영어, 수학, 과학 성적은 (입력): ";
		getline(cin, str);
		//for 문 안쓰고 한거
		//cout << str << endl;
		//int val = str.find(" ");
		//cout << "첫번째 find 값 : " << val << endl;
		//string tmp = str.substr(0, val);
		//cout << "첫번째 숫자 : " << tmp << endl;
		//int val2 = str.find(" ", val + 1);
		//cout << "두번째 find 값 : " << val2 << endl;
		//string tmp2 = str.substr(val+1, val2 - val);
		//cout << "두번째 숫자 : " << tmp2 << endl;
		//string tmp3 = str.substr(val2+1);
		//cout << "세번째 숫자 : " << tmp3 << endl;
		for (int i_i = 0; i_i < subject; i_i++)
		{
			//for문 쓴거
			val = str.find(" ", point);
			string tmp = str.substr(point, val - point);
			point = val + 1;
			exam[i][i_i] = stoi(tmp);
		}
	}
	cout << "----------------------------------------" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << j + 1 << "번째 학생의 영어, 수학, 과학 성적은 (출력): " << exam[j][0] << " " << exam[j][1] << " " << exam[j][2] << endl;
	}
	*/




	// 다차원 배열 ----------------------------------------------------------------------------------
	/*int score[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9} };*/


	/*
	// 구조체 ----------------------------------------------------------------------------------
	// 구조체 선언 방법_1
	Car car1;						// car1이라는 구조체(인스턴스) 생성
	//Car c1, c2, c2, c4;				// 여러 인스턴스 동시 선언 가능

	car1.name = "KIM";
	car1.age = 2000;
	car1.door = 4;
	car1.engine_temp = 99.9;
	car1.fuel_gauge[0] = 20.1;
	car1.fuel_gauge[1] = 30.2;
	// 구조체 선언 방법_2
	//Car car1 = { "KIM",2000,4,99.9 };
	cout << car1.name << endl;
	cout << car1.age << endl;
	cout << car1.door << endl;
	cout << car1.engine_temp << endl;
	cout << car1.fuel_gauge[0] << endl;
	cout << car1.fuel_gauge[1] << endl;
	*/

	/*
	// 실습18. 배열을 활용하기
	// 1) grade라는 배열 변수 선언 및 성적 입력받기
	int grade[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
		cin >> grade[i];
		cout << endl;
	}

	// 2) for문을 활용하여 학생 5인의 성적 평균 산출
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += grade[i];
	}
	float average = sum / 5;
	cout << "성적 평균 : " << average << endl;


	// 실습18. 배열을 활용하기  ㅡ 리더님 코드
	const int val = 5;					// const를 앞에 붙여주면 val은 변수지만 이후 코드에서 상수로 인식하게하는 명령어임
	float grade[val] = { 0.0, };
	float sum = 0;						// float 형을 지정했지 떄문에 초기값 0에 소수점(.0)을 입력하지 않아도 됨
	float avg = 0;

	for (int i = 0; i < val; i++) {
		cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
		cin >> grade[1];
	}
	for (int j = 0; j < val; j++) {
		sum = sum + grade[j];
	}
	avg = sum / val;
	cout << "성적 평균 : " << avg << endl;
	*/



	/*
	// 실습 20. 구조체 사용해보기
	Rectangle item;
	string str = "";
	cout << "가로, 세로 길이를 입력하세요. ";
	getline(cin, str);
	item.width = stof(str.substr(0, str.find(" ")));
	item.height = stof(str.substr(str.find(" ") + 1));
	cout << "넓이는 : " << int(item.width * item.height) << endl;

	// 실습 20. 구조체 사용해보기  ㅡ 리더님 코드
	Rectangle r1;
	cout << "가로, 세로 길이를 입력하세요. ";
	cin >> r1.width;			// <- getline을 안써도 공란을 구분해서 데이터 인식
	cin >> r1.height;
	//cout << r1.width << endl;
	//cout << r1.height << endl;
	float area = r1.width * r1.height;
	cout << "넓이는 : " << area << endl;

	*/






	return 0;
}

#endif
