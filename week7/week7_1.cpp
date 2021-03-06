//클래스와 객체
#include<iostream>
using namespace std;

//구조체와 클래스의 차이
//1. class 키워드 사용 (구조체는 struct)
//2. public과 같은 접근제어와 관련된 키워드 사용
//3. 멤버 함수(method)를 정의할 수 있다 (구조체는 불가)

//메서드=클래스 안에 정의된 함수

//생성자는 객체를 생성할 때 자동적으로 호출되는 함수
//소멸자는 객체가 사라질 때 자동적으로 호출되는 함수

class Point {
public: //누구나 접근 가능 형태
	int x, y;
	Point() { //생성자
		//객체 생성시 꼭 해줘야하는 일들을 넣어줌
		//객체 생성 시점에 딱 한번만 동작함
		
		//일반 멤버함수와의 차이점
		//생성자는 리턴타입이 없다
		//생성자는 class의 이름과 같다

		x = y = 0;
	}
	Point(int _x, int _y) { //생성자 오버로딩
		x = _x;
		y = _y;
	}

	/*
	void Print() {
		cout << x << ", " << y << endl;
		//메서드 안에서는 객체 이름을 명시하지 않고도 멤버변수에 접근할 수 있다
		//멤버변수가 private이라고 하더라도 class 안의 메서드들은 접근 가능
	}
	*/
	void Print(); //함수의 프로토타입처럼 선언해놓고 밖에서 구현가능
	/*
	void Print(int a) {
		cout << a <<" : "<<x<< ", " << y << endl;
	}
	*/
	//메서드와 일반함수의 차이점?
	//기본적으로 객체 이름을 명시하고 써야함
	//p1.Print() 이런식으로
	
	//공통점? 오버로딩 가능(같은 이름 가진 메서드 여러개 가능)
};

//1. 클래스 정의 안에는 메서드의 프로토타입만 남겨둔다
//2. 클래스의 정의 밖에서는 범위 지정 연산자를 사용해서 함수를 정의
void Point::Print() {
	cout << x << ", " << y << endl;
}
int main() {
	Point p1, p2,p4,p5(200,150); //클래스의 객체 생성
	//만약 class 안에서 얘네가 private으로 선언되었었다면
	//밖에서 이렇게 직접적인 access는 불가
	p1.x = 10;
	p1.y = 10;
	p2.x = 20, p2.y = 20;


	p5.Print();
	p4.Print();


	Point p3 = p2;
	//값에 의한 복사로 초기화
	p3.Print(); //p2와 같은 결과가 나옴
	p3 = p1; //p1의 주소를 p3에 넣음
	//값에 의한 복사가 일어남 (대입)
	p3.Print();
	p1.Print();
	p2.Print();

}