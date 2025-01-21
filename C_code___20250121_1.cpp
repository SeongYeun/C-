#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//#define MAIN0121
#ifdef MAIN0121
/*
*/
// ���սǽ�7. �ؾ �����  �� ������ �ڵ�
class FishBread {
private:
	string mat;
	int price;
	int pcs;

public:
	FishBread() {
		cout << "�ؾ ����� ����!" << endl;
	}
	~FishBread() {
		cout << "�ؾ ����� ��!" << endl;
	}
	void inputMat() {

		cout << "� ���� �������? : ";
		cin >> mat;
	}
	void inputPrice() {
		cout << "���� ������ �󸶷� �ұ��? : ";
		cin >> price;
	}
	void inputPcs() {
		cout << "�� ���� ������? : ";
		cin >> pcs;
	}
	void printInfo() {
		cout << "==== �ؾ ���� ====" << endl;
		cout << "����� : " << mat<< endl;
		cout << "��  �� : " << pcs<< endl;
		cout << "��  �� : " << pcs << endl;
		int res = price * pcs;
		cout << "�Ѱ��� : " << res<< endl;

	}
};


/*

// ����ü(public�⺻) vs Ŭ����(private�⺻) ---------------------------------------------------------------------------------------
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


// �ǽ�24. getter & setter ����غ��� (main �ռ� ��)
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


// �ǽ�24. getter & setter ����غ��� (main �ռ� ��)  �� ������ �ڵ�
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
		cout << "���̴� : " << res << endl;
	}
	void setRect() {
		cout << "�簢���� ���ο� ���� ���̸� �Է����ּ��� (����� ����) : ";
		cin >> width >> height;
	}
	void getRect() {
		cout << "���� ���� ���̴� : "<< width << " " << height << endl;
	}

};

// ��� (main �Լ� ��) ---------------------------------------------------------------------------------------
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
		cout << "�� ���� �̸��� : " << name << " �Դϴ�." << endl;
	}
	void getDoor() {
		cout << "������ ����� : " << door << " �� �Դϴ�." << endl;
	}
	void getWheel() {
		cout << "������ ������ : " << wheel << " �� �Դϴ�." << endl;
	}
	void getHorn() {
		cout << "������ ������ : " << horn << " �ʰ� �︳�ϴ�." << endl;
	}
};

class Genesis : public Car {    // <- private �� ��� �������� ������ �θ�Ŭ���� private�� ���� ������ �ȵǼ� ����� �۵����� ����
// private �θ�Ŭ���� �� �ڽ� Ŭ���������� �θ�Ŭ������ ������ �޼��� ����� ���������� main�Լ� �������� �θ�Ŭ������ �޼��� ����� �Ұ�����
// public �θ�Ŭ���� �� �ڽ� Ŭ�����Ȱ� main�Լ��ȿ��� ��� �θ� Ŭ������ �޼��带 ��ӹ޾� ����� �� ����
public:
	void gen_option() {
		cout << "���׽ý��� ��� ���׸�� �����߽��ϴ�." << endl;
	}
	//virtual get_Name() {		// <- overide �Ҽ��� ������ �θ�Ŭ�������� ���� �ϰ� �ڽ� Ŭ�������� ���� ������ virtual�� ����ϸ� ������
	//}
};

class Sonata : private Car {

public : 
	void sona_seat() {
		seat += 20;
		cout << "�ҳ�Ÿ ��Ʈ ������ " << seat << "�Դϴ�." << endl;
	}
};



// Ŭ���� : �ʱ�ȭ ����Ʈ (main�Լ� ��) ---------------------------------------------------------------------------------------
class InitialList {
private:
	int i, j;
public:
	class InitialList(int _i, int _j) : i(_i), j(_j) {
		cout << "�ʱⰪ�� " << i << ", " << j << endl;
	}

};


/*
// �ǽ�25. Ŭ���� ��� �ǽ��غ��� (main�Լ� ��)
class Animal {
	string name, way_of_move;
	int age;
public:
	Animal() {}
	class Animal(string _n, int _a) : name(_n), age(_a) {}
	~Animal() {}

	//set�̸�,����
	void setNameAge(string _n, int _a) {
		name = _n;
		age = _a;
	}
	//get�̸�,����
	void getNameAge() {
		cout << "�̸� : " << name << ", ���� : " << age << endl;
	}
	//�������
	void print_Food() {
		cout << name << "��(��) ���̸� �Խ��ϴ�." << endl;
	}
	//������
	void Moving() {
		cout << name << "��(��) " << way_of_move << "�� �̵��մϴ�." << endl;
	}

};

class Cat : public Animal {
private:
	string kindof = "�����";
	string way_of_move = "�� ��";

public:
	class Cat(string _n, int _a) {
		setNameAge(_n, _a);
	}
	~Cat() {}
	void print_Info() {
		cout << kindof << " ���� : " << endl;
		getNameAge();
	}

};
class Bird : public Animal {
private:
	string kindof = "��";
	string way_of_move = "�� ����";
	string name;
	int age;

public:
	class Bird(string _n, int _a) {
		setNameAge(_n, _a);
	}
	~Bird() {}
	void print_Info() {
		cout << kindof << " ���� : " << endl;
		getNameAge();
	}

};
*/


/*

// �ǽ�25. Ŭ���� ��� �ǽ��غ��� (main�Լ� ��)   �� ������ �ڵ�
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
		cout << name << "��(��) ���̸� �Խ��ϴ�." << endl;
	}
	void move(string _m) {
		cout << name << "��(��) " << _m << "�� �̵��մϴ�." << endl;

	}
	void getData() {
		cout << "�̸� : " << name << ", ���� : " << age << endl;
	}
};

class Cat : public Animal {
private:
	string movement;
public:
	Cat() {
		cout << "����� ���� : " << endl;
	}
	~Cat() {}
		void c_move() {
		movement = "�� ��";
		Animal::move(movement);
	}
};
class Bird : public Animal {
private:
	string movement;
public:
	Bird() {
		cout << "�� ���� : " << endl;
	}
	~Bird() {}
	void b_move() {
		movement = "�� ����";
		move(movement);
	}
};
*/




int main() {	 // main ---------------------------------------------------------------------------------------





	/*
	// ���սǽ�7. �ؾ �����(main�Լ� ��)  �� ������ �ڵ�
	FishBread fb;
	fb.inputMat();
	fb.inputPrice();
	fb.inputPcs();
	fb.printInfo();


	// ����ü(public�⺻) vs Ŭ����(private�⺻) ---------------------------------------------------------------------------------------
	Cat cat1("���", 1);
	string str_n = cat1.getName();
	int str_a = cat1.getAge();
	cout << "����� �̸��� " << str_n << " �Դϴ�." << endl;
	cout << "����� ���̴� " << str_a << "�� �Դϴ�." << endl;

	cat1.setName("����");
	str_n = cat1.getName();
	cat1.setAge(5);
	str_a = cat1.getAge();
	cout << "����� �̸��� " << str_n << " �Դϴ�." << endl;
	cout << "����� ���̴� " << str_a << "�� �Դϴ�." << endl;





	// �ǽ�24. getter & setter ����غ��� (main �Լ� ��)
	Rectangle_my rect(1, 2);
	cout << "���̴� : " << rect.Area() << endl;

	int input_w, input_h = 0;
	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) : ";
	cin >> input_w >> input_h;
	rect.setWidth(input_w);
	rect.setHeight(input_h);
	cout << "���̴� : " << rect.Area() << endl;

	cout << "���� ���� ���̴� : " << rect.getWidth() << ", " << rect.getHeight() << endl;



	// �ǽ�24. getter & setter ����غ��� (main �Լ� ��)    �� ������ �ڵ�
	Rectangle rect(1, 2);
	rect.area();
	rect.getRect();
	rect.setRect();
	rect.area();
	rect.getRect();



	// ��� (main �Լ� ��) ---------------------------------------------------------------------------------------
	Car c1;
	c1.setData("�׷���", 4, 4, 2);
	c1.getName();
	c1.getDoor();
	c1.getWheel();
	c1.getHorn();
	cout << endl;

	Genesis gen1;
	gen1.setData("��", 5, 4, 5);
	gen1.getName();
	gen1.getDoor();
	gen1.getWheel();
	gen1.getHorn();
	gen1.gen_option();

	Sonata so1;
	so1.sona_seat();


	// Ŭ���� : �ʱ�ȭ ����Ʈ (main�Լ� ��) ---------------------------------------------------------------------------------------
	class InitialList(1, 2);


	*/

	/*
	// �ǽ�25. Ŭ���� ��� �ǽ��غ��� (main�Լ� ��)
	Cat cat1("����", 3);
	cat1.print_Info();
	cat1.print_Food();
	cat1.Moving();

	Bird bird1("����", 1);
	bird1.print_Info();
	bird1.print_Food();
	bird1.Moving();
	*/


	/*
	// �ǽ�25. Ŭ���� ��� �ǽ��غ��� (main�Լ� ��)   �� ������ �ڵ�
	Cat c1;
	c1.setData("����", 5);
	c1.getData();
	c1.feed();
	c1.c_move();

	Bird b1;
	b1.setData("�޹�", 1);
	b1.getData();
	b1.feed();
	b1.b_move();
	*/

	return 0;
}

#endif