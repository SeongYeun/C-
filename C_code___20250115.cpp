#include <iostream>
#include <string>
using namespace std;


//#define MAIN0115		// 실행하고 싶은 코드가 포함된 정의명을 입력(define을 주석처리하면 해당 define의 main()함수는 실행이 안됨)
#ifdef MAIN0115			// 한 프로젝트내 여러 개의 main()함수 충돌을 막기 위해 #ifdef ~ #endif 사이에 코드 입력 


int main()
{
	cout << "메인 _ 20250115" << endl;



	return 0;
}

#endif

