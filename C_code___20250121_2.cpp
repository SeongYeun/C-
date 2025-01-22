#include <iostream>
#include <string>

using namespace std;

//#define MAIN0121
#ifdef MAIN0121

// ���սǽ�8. ���� ĳ���� �����ϱ� (main ��)
/*
(1) Character��� Ŭ���� ����
(2) �ʵ�(����): name(�̸�), level(����), item_num(������ ��)
 (3) ������: ����ڿ��� �ַܼ� ĳ���� �̸��� �Է� �ް�, ĳ���� �����ϱ�
(�̸��� �Է� ���� ������, ����, ������ ���� 0���� �ʱ�ȭ)
 (4) ����ڿ��� ĳ���͸� ��� �������� �Է��ϰ� �ϱ�. (0�� �Է��� ����
�� �Է��� ��ȣ�� �ش��ϴ� �۾��� ��� �ϱ�)
 (5) �� ����� ��� Character�� �޼ҵ�� ������� �־�� ��

*/

class Charater {
private:
	string name;
	int level=0;
	int item_num=0;
	int input;
public:
	Charater() {
		cout << "�̸��� �Է����ּ��� : ";
		cin >> name;
		cout << name << " ĳ���Ͱ� ���� �Ǿ����ϴ�."<< endl;
		level = 0;
		item_num = 0;
		while (input != 0) {
			cout << endl;
			cout << "� ������ �����Ͻðڽ��ϱ�? (0: ����) : ";
			cin >> input;
			switch (input) {
			case 0:		//0 �� > ���� ����
				cout << "������ �����մϴ�!" << endl;
				break;
			case 1:		//1 �� > �̸� ����
				set_Name();
				break;
			case 2:		//2 �� > level up(level 1�� �ö󰡰�)
				level_up();
				break;
			case 3:		//3 �� > item �ݱ�(������ ���� 1�� ����)
				get_item();
				break;
			case 4:		//4 �� > item ���(������ ���� 1�� ����)
				use_item();
				break;
			case 5:		//5 �� > �̸�, level, item�� �ֿܼ� ����ϱ�
				cout << "�̸� : " << get_Name() << endl;
				cout << "���� : " << get_level() << endl;
				cout << "���� ������ ���� : " << get_item_num() << endl;

				break;
			}
		}
	}
	~Charater() {}
	void set_Name() {
		cout << "�� �̸��� �Է����ּ���: ";
		cin >> name;
		cout << "�̸��� ����Ǿ����ϴ�." << endl;
		cout << "new name : " << name << endl;
	}
	string get_Name() {
		return name;
	}
	void level_up() {
		cout << "level up!!" << endl;
		cout << "���� ���� : " << ++level << endl;
	}
	int get_level() {
		return level;
	}
	void get_item() {
		cout << "�������� ������ϴ�!" << endl;
		cout << "���� ������ ���� : " << ++item_num << endl;
	}
	void use_item() {
		cout << "�������� ����Ͽ����ϴ�!" << endl;
		cout << "���� ������ ���� : " << --item_num << endl;
	}
	int get_item_num() {
		return item_num;
	}
};

// ���սǽ�8. ���� ĳ���� �����ϱ� (main ��)  �� ������ �ڵ�

class Character_leader {
private:
	string name;
	int level = 0;
	int item_num = 0;
	int sel_num=0;
	bool flag=true;

public:
	Character_leader() {
		cout << "�̸��� �Է����ּ���: ";
		cin >> name;
		cout << name << "ĳ���Ͱ� �����Ǿ����ϴ�."<< endl;
	}
	//�̸�����
	void change() {
		cout << "�� �̸��� �Է����ּ��� : ";
		cin >> name;
		cout << "�̸��� ����Ǿ����ϴ�." << endl;
		cout << "new name : " <<  name << endl;
	}
	//������
	void levelUp() {
		level += 1;
		cout << "���� ��!!!" << endl;
		cout << "���� ���� : " << level << endl;
	}
	//������ ȹ��
	void getItem() {
		item_num += 1;
		cout << "������ ȹ��!!" << endl;
		cout << "���� ������ ���� : " << item_num << endl;
	}
	//������ ���
	void useItem() {
		item_num -= 1;
		cout << "������ ���!!" << endl;
		cout << "���� ������ ���� : " << item_num << endl;
	}
	//���
	void print() {
		cout << "ĳ���� �̸� : " << name << endl;
		cout << "���� ���� : " << level << endl;
		cout << "���� ������ ���� : " << item_num<< endl;
	}
	void select() {
		while (flag) {
			cout << "� ������ �����Ͻðڽ��ϱ�? (0: ����) : ";
			cin >> sel_num;
			switch (sel_num) {
			case 0:
				flag = false;
				cout << "������ ����Ǿ����ϴ�." << endl;
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
// ���ӽ����̽�(namespace) ---------------------------------------------------------------------------------------
using namespace test_1;
namespace test_1 {
	void print() {
		cout << "���ӽ����̽� �׽�Ʈ 1 �Դϴ�." << endl;
	}
}
namespace test_2 {
	void print() {
		cout << "���ӽ����̽� �׽�Ʈ 2 �Դϴ�." << endl;
	}
	void print3() {
		cout << "���ӽ����̽� �׽�Ʈ 3 �Դϴ�." << endl;
	}
}
using test_2::print3;

// �ǽ�26. namespace ����غ���
namespace seoul {
	string area_code, landmark;
}
namespace pusan {
	string area_code, landmark;
}
using namespace pusan;
*/


// �ǽ�26. namespace ����غ���  �Ѹ����� �ڵ�
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
	// ���սǽ�8. ���� ĳ���� �����ϱ� (main ��)
	Charater ch1;

	// ���սǽ�8. ���� ĳ���� �����ϱ� (main ��) �� ������ �ڵ�
	Character_leader cha1;
	cha1.select();
	*/
	/*
	// ���ӽ����̽�(namespace) ---------------------------------------------------------------------------------------
	test_2::print();
	print();

	// �ǽ�26. namespace ����غ��� (main �Լ� ��)
	seoul::area_code = "02";
	seoul::landmark = "����Ÿ��";
	cout << "������ ������ȣ : " << seoul::area_code << endl;
	cout << "������ ��� : " << seoul::landmark << endl;
	area_code = "051";
	landmark = "������";
	cout << "�λ��� ������ȣ : " << area_code << endl;
	cout << "�λ��� ��� : " << landmark << endl;
	*/
	
	
	// �ǽ�26. namespace ����غ���  �Ѹ����� �ڵ�
	// ���� �Ҵ�� ������ �տ� 0�� �Է��ϸ� 8������ �νĵ� �� 10������ ������ ��ȯ��

	cout << "���� ���� ����" << endl;
	seoul::local = 2;
	seoul::mark = "�Ѱ�";
	cout << "���� ������ȣ : " << seoul::local << endl;
	cout << "���� ���帶ũ : " << seoul::mark << endl;

	cout << "�뱸 ���� ����" << endl;
	local = 53;
	mark = "���";
	cout << "�뱸 ������ȣ : " << local << endl;
	cout << "�뱸 ���帶ũ : " << mark << endl;


	return 0;
}

#endif