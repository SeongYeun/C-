#include <iostream>
#include <string>

using namespace std;

//#define MAIN0121
#ifdef MAIN0121

// 종합실습8. 게임 캐릭터 생성하기 (main 밖)
/*
(1) Character라는 클래스 생성
(2) 필드(변수): name(이름), level(레벨), item_num(아이템 수)
 (3) 생성자: 사용자에게 콘솔로 캐릭터 이름을 입력 받고, 캐릭터 생성하기
(이름은 입력 받은 값으로, 레벨, 아이템 수는 0으로 초기화)
 (4) 사용자에게 캐릭터를 어떻게 조작할지 입력하게 하기. (0을 입력할 때까
지 입력한 번호에 해당하는 작업을 계속 하기)
 (5) 위 기능은 모두 Character의 메소드로 만들어져 있어야 함

*/

class Charater {
private:
	string name;
	int level=0;
	int item_num=0;
	int input;
public:
	Charater() {
		cout << "이름을 입력해주세요 : ";
		cin >> name;
		cout << name << " 캐릭터가 생성 되었습니다."<< endl;
		level = 0;
		item_num = 0;
		while (input != 0) {
			cout << endl;
			cout << "어떤 동작을 실행하시겠습니까? (0: 종료) : ";
			cin >> input;
			switch (input) {
			case 0:		//0 ㅡ > 게임 종료
				cout << "게임을 종료합니다!" << endl;
				break;
			case 1:		//1 ㅡ > 이름 변경
				set_Name();
				break;
			case 2:		//2 ㅡ > level up(level 1씩 올라가게)
				level_up();
				break;
			case 3:		//3 ㅡ > item 줍기(아이템 수가 1씩 증가)
				get_item();
				break;
			case 4:		//4 ㅡ > item 사용(아이템 수가 1씩 감소)
				use_item();
				break;
			case 5:		//5 ㅡ > 이름, level, item을 콘솔에 출력하기
				cout << "이름 : " << get_Name() << endl;
				cout << "레벨 : " << get_level() << endl;
				cout << "현재 아이템 개수 : " << get_item_num() << endl;

				break;
			}
		}
	}
	~Charater() {}
	void set_Name() {
		cout << "새 이름을 입력해주세요: ";
		cin >> name;
		cout << "이름이 변경되었습니다." << endl;
		cout << "new name : " << name << endl;
	}
	string get_Name() {
		return name;
	}
	void level_up() {
		cout << "level up!!" << endl;
		cout << "현재 레벨 : " << ++level << endl;
	}
	int get_level() {
		return level;
	}
	void get_item() {
		cout << "아이템을 얻었습니다!" << endl;
		cout << "현재 아이템 개수 : " << ++item_num << endl;
	}
	void use_item() {
		cout << "아이템을 사용하였습니다!" << endl;
		cout << "현재 아이템 개수 : " << --item_num << endl;
	}
	int get_item_num() {
		return item_num;
	}
};

// 종합실습8. 게임 캐릭터 생성하기 (main 밖)  ㅡ 리더님 코드

class Character_leader {
private:
	string name;
	int level = 0;
	int item_num = 0;
	int sel_num=0;
	bool flag=true;

public:
	Character_leader() {
		cout << "이름을 입력해주세요: ";
		cin >> name;
		cout << name << "캐릭터가 생성되었습니다."<< endl;
	}
	//이름변경
	void change() {
		cout << "새 이름을 입력해주세요 : ";
		cin >> name;
		cout << "이름이 변경되었습니다." << endl;
		cout << "new name : " <<  name << endl;
	}
	//레벨업
	void levelUp() {
		level += 1;
		cout << "레벨 업!!!" << endl;
		cout << "현재 레벨 : " << level << endl;
	}
	//아이템 획득
	void getItem() {
		item_num += 1;
		cout << "아이템 획득!!" << endl;
		cout << "현재 아이템 개수 : " << item_num << endl;
	}
	//아이템 사용
	void useItem() {
		item_num -= 1;
		cout << "아이템 사용!!" << endl;
		cout << "현재 아이템 개수 : " << item_num << endl;
	}
	//출력
	void print() {
		cout << "캐릭터 이름 : " << name << endl;
		cout << "현재 레벨 : " << level << endl;
		cout << "현재 아이템 갯수 : " << item_num<< endl;
	}
	void select() {
		while (flag) {
			cout << "어떤 동작을 실행하시겠습니까? (0: 종료) : ";
			cin >> sel_num;
			switch (sel_num) {
			case 0:
				flag = false;
				cout << "게임이 종료되었습니다." << endl;
				break;
			case 1:
				change();
				break;
			case 2:
				levelUp();
				break;
			case 3:
				getItem();
				break;
			case 4:
				useItem();
				break;
			case 5:
				print();
				break;
			}
		}
	}
};
/*
// 네임스페이스(namespace) ---------------------------------------------------------------------------------------
using namespace test_1;
namespace test_1 {
	void print() {
		cout << "네임스페이스 테스트 1 입니다." << endl;
	}
}
namespace test_2 {
	void print() {
		cout << "네임스페이스 테스트 2 입니다." << endl;
	}
	void print3() {
		cout << "네임스페이스 테스트 3 입니다." << endl;
	}
}
using test_2::print3;

// 실습26. namespace 사용해보기
namespace seoul {
	string area_code, landmark;
}
namespace pusan {
	string area_code, landmark;
}
using namespace pusan;
*/


// 실습26. namespace 사용해보기  ㅡ리더님 코드
namespace seoul {
	int local;
	string mark;
}
namespace daegu {
	int local;
	string mark;
}
using namespace daegu;

int main() {
	/*
	// 종합실습8. 게임 캐릭터 생성하기 (main 안)
	Charater ch1;

	// 종합실습8. 게임 캐릭터 생성하기 (main 안) ㅡ 리더님 코드
	Character_leader cha1;
	cha1.select();
	*/
	/*
	// 네임스페이스(namespace) ---------------------------------------------------------------------------------------
	test_2::print();
	print();

	// 실습26. namespace 사용해보기 (main 함수 내)
	seoul::area_code = "02";
	seoul::landmark = "남산타워";
	cout << "서울의 지역변호 : " << seoul::area_code << endl;
	cout << "서울의 명소 : " << seoul::landmark << endl;
	area_code = "051";
	landmark = "태종대";
	cout << "부산의 지역변호 : " << area_code << endl;
	cout << "부산의 명소 : " << landmark << endl;
	*/
	
	
	// 실습26. namespace 사용해보기  ㅡ리더님 코드
	// 정수 할당시 정수값 앞에 0을 입력하면 8진수로 인식된 후 10진수인 정수로 변환됨

	cout << "서울 관련 내용" << endl;
	seoul::local = 2;
	seoul::mark = "한강";
	cout << "서울 지역변호 : " << seoul::local << endl;
	cout << "서울 랜드마크 : " << seoul::mark << endl;

	cout << "대구 관련 내용" << endl;
	local = 53;
	mark = "우방";
	cout << "대구 지역변호 : " << local << endl;
	cout << "대구 랜드마크 : " << mark << endl;


	return 0;
}

#endif