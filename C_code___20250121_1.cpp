#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//#define MAIN0121
#ifdef MAIN0121
/*
*/
// 종합실습7. 붕어빵 만들기  ㅡ 리더님 코드
class FishBread {
private:
	string mat;
	int price;
	int pcs;

public:
	FishBread() {
		cout << "붕어빵 만들기 시작!" << endl;
	}
	~FishBread() {
		cout << "붕어빵 만들기 끝!" << endl;
	}
	void inputMat() {

		cout << "어떤 속을 넣을까요? : ";
		cin >> mat;
	}
	void inputPrice() {
		cout << "개당 가격은 얼마로 할까요? : ";
		cin >> price;
	}
	void inputPcs() {
		cout << "몇 개를 만들까요? : ";
		cin >> pcs;
	}
	void printInfo() {
		cout << "==== 붕어빵 정보 ====" << endl;
		cout << "속재료 : " << mat<< endl;
		cout << "갯  수 : " << pcs<< endl;
		cout << "갯  수 : " << pcs << endl;
		int res = price * pcs;
		cout << "총가격 : " << res<< endl;

	}
};


/*

// 구조체(public기본) vs 클래스(private기본) ---------------------------------------------------------------------------------------
class Cat {
private:
	string name="";
	int age=0;
public:
	Cat(string _name, int _age) {
		this->name = _name;
		this->age = _age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void setName(string _name) {
		this->name = _name;
		return ;
	}
	void setAge(int _age) {
		this->age = _age;
		return ;
	}
};

*/


// 실습24. getter & setter 사용해보기 (main 합수 밖)
class Rectangle_my {
private:
	int width=0;
	int height=0;

public :
	Rectangle_my() {}
	Rectangle_my(int w, int h) {
		setWidth(w);
		setHeight(h);
	}
	~Rectangle_my() {}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	void setWidth(int w) {
		this->width = w;
		return ;
	}
	void setHeight(int h) {
		this->height = h;
		return ;
	}
	int Area() {
		int res = width * height;
		return res;
	}

};


// 실습24. getter & setter 사용해보기 (main 합수 밖)  ㅡ 리더님 코드
class Rectangle {
private:
	int width, height;

public:
	Rectangle(int _w, int _h) {
		width = _w;
		height = _h;
	}
	void area() {
		int res;
		res = width * height;
		cout << "넓이는 : " << res << endl;
	}
	void setRect() {
		cout << "사각형의 가로와 세로 길이를 입력해주세요 (띄어쓰기로 구분) : ";
		cin >> width >> height;
	}
	void getRect() {
		cout << "가로 세로 길이는 : "<< width << " " << height << endl;
	}

};

// 상속 (main 함수 밖) ---------------------------------------------------------------------------------------
class Car {
private:
	string name;
	int door, wheel, horn;
protected:
	int seat=75;
public:
	void setData(string _n, int _d, int _w ,int _h) {
		name = _n;
		door = _d;
		wheel = _w;
		horn = _h;
	}
	void getName() {
		cout << "이 차의 이름은 : " << name << " 입니다." << endl;
	}
	void getDoor() {
		cout << "차량의 도어는 : " << door << " 개 입니다." << endl;
	}
	void getWheel() {
		cout << "차량의 바퀴는 : " << wheel << " 개 입니다." << endl;
	}
	void getHorn() {
		cout << "차량의 경적은 : " << horn << " 초간 울립니다." << endl;
	}
};

class Genesis : public Car {    // <- private 일 경우 컴파일은 되지만 부모클래스 private내 변수 접근은 안되서 제대로 작동하지 않음
// private 부모클래스 ㅡ 자식 클래스내에서 부모클래스의 변수와 메서드 사용은 가능하지만 main함수 내에서는 부모클래스의 메서드 사용이 불가능함
// public 부모클래스 ㅡ 자식 클래스안과 main함수안에서 모두 부모 클래스의 메서드를 상속받아 사용할 수 있음
public:
	void gen_option() {
		cout << "제네시스는 고급 인테리어를 장착했습니다." << endl;
	}
	//virtual get_Name() {		// <- overide 할수는 있지만 부모클래서에서 선언만 하고 자식 클래스에서 가상 변수인 virtual로 명시하면 가능함
	//}
};

class Sonata : private Car {

public : 
	void sona_seat() {
		seat += 20;
		cout << "소나타 시트 각도는 " << seat << "입니다." << endl;
	}
};



// 클래스 : 초기화 리스트 (main함수 밖) ---------------------------------------------------------------------------------------
class InitialList {
private:
	int i, j;
public:
	class InitialList(int _i, int _j) : i(_i), j(_j) {
		cout << "초기값은 " << i << ", " << j << endl;
	}

};


/*
// 실습25. 클래스 상속 실습해보기 (main함수 밖)
class Animal {
	string name, way_of_move;
	int age;
public:
	Animal() {}
	class Animal(string _n, int _a) : name(_n), age(_a) {}
	~Animal() {}

	//set이름,나이
	void setNameAge(string _n, int _a) {
		name = _n;
		age = _a;
	}
	//get이름,나이
	void getNameAge() {
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}
	//먹이출력
	void print_Food() {
		cout << name << "이(가) 먹이를 먹습니다." << endl;
	}
	//움직임
	void Moving() {
		cout << name << "은(는) " << way_of_move << "로 이동합니다." << endl;
	}

};

class Cat : public Animal {
private:
	string kindof = "고양이";
	string way_of_move = "네 발";

public:
	class Cat(string _n, int _a) {
		setNameAge(_n, _a);
	}
	~Cat() {}
	void print_Info() {
		cout << kindof << " 정보 : " << endl;
		getNameAge();
	}

};
class Bird : public Animal {
private:
	string kindof = "새";
	string way_of_move = "두 날개";
	string name;
	int age;

public:
	class Bird(string _n, int _a) {
		setNameAge(_n, _a);
	}
	~Bird() {}
	void print_Info() {
		cout << kindof << " 정보 : " << endl;
		getNameAge();
	}

};
*/


/*

// 실습25. 클래스 상속 실습해보기 (main함수 밖)   ㅡ 리더님 코드
class Animal {
private:
	string name;
	int age;
public:
	void setData(string _n, int _a) {
		name = _n;
		age = _a;
	}
	void feed() {
		cout << name << "이(가) 먹이를 먹습니다." << endl;
	}
	void move(string _m) {
		cout << name << "은(는) " << _m << "로 이동합니다." << endl;

	}
	void getData() {
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}
};

class Cat : public Animal {
private:
	string movement;
public:
	Cat() {
		cout << "고양이 정보 : " << endl;
	}
	~Cat() {}
		void c_move() {
		movement = "두 발";
		Animal::move(movement);
	}
};
class Bird : public Animal {
private:
	string movement;
public:
	Bird() {
		cout << "새 정보 : " << endl;
	}
	~Bird() {}
	void b_move() {
		movement = "두 날개";
		move(movement);
	}
};
*/




int main() {	 // main ---------------------------------------------------------------------------------------





	/*
	// 종합실습7. 붕어빵 만들기(main함수 내)  ㅡ 리더님 코드
	FishBread fb;
	fb.inputMat();
	fb.inputPrice();
	fb.inputPcs();
	fb.printInfo();


	// 구조체(public기본) vs 클래스(private기본) ---------------------------------------------------------------------------------------
	Cat cat1("까미", 1);
	string str_n = cat1.getName();
	int str_a = cat1.getAge();
	cout << "고양이 이름은 " << str_n << " 입니다." << endl;
	cout << "고양이 나이는 " << str_a << "살 입니다." << endl;

	cat1.setName("나비");
	str_n = cat1.getName();
	cat1.setAge(5);
	str_a = cat1.getAge();
	cout << "고양이 이름은 " << str_n << " 입니다." << endl;
	cout << "고양이 나이는 " << str_a << "살 입니다." << endl;





	// 실습24. getter & setter 사용해보기 (main 함수 내)
	Rectangle_my rect(1, 2);
	cout << "넓이는 : " << rect.Area() << endl;

	int input_w, input_h = 0;
	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) : ";
	cin >> input_w >> input_h;
	rect.setWidth(input_w);
	rect.setHeight(input_h);
	cout << "넓이는 : " << rect.Area() << endl;

	cout << "가로 세로 길이는 : " << rect.getWidth() << ", " << rect.getHeight() << endl;



	// 실습24. getter & setter 사용해보기 (main 함수 내)    ㅡ 리더님 코드
	Rectangle rect(1, 2);
	rect.area();
	rect.getRect();
	rect.setRect();
	rect.area();
	rect.getRect();



	// 상속 (main 함수 내) ---------------------------------------------------------------------------------------
	Car c1;
	c1.setData("그랜져", 4, 4, 2);
	c1.getName();
	c1.getDoor();
	c1.getWheel();
	c1.getHorn();
	cout << endl;

	Genesis gen1;
	gen1.setData("쿱", 5, 4, 5);
	gen1.getName();
	gen1.getDoor();
	gen1.getWheel();
	gen1.getHorn();
	gen1.gen_option();

	Sonata so1;
	so1.sona_seat();


	// 클래스 : 초기화 리스트 (main함수 내) ---------------------------------------------------------------------------------------
	class InitialList(1, 2);


	*/

	/*
	// 실습25. 클래스 상속 실습해보기 (main함수 안)
	Cat cat1("나비", 3);
	cat1.print_Info();
	cat1.print_Food();
	cat1.Moving();

	Bird bird1("참새", 1);
	bird1.print_Info();
	bird1.print_Food();
	bird1.Moving();
	*/


	/*
	// 실습25. 클래스 상속 실습해보기 (main함수 안)   ㅡ 리더님 코드
	Cat c1;
	c1.setData("나비", 5);
	c1.getData();
	c1.feed();
	c1.c_move();

	Bird b1;
	b1.setData("앵무", 1);
	b1.getData();
	b1.feed();
	b1.b_move();
	*/

	return 0;
}

#endif