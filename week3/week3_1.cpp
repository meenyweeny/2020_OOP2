#include<iostream>
using namespace std;

int main() {
	//������ ���� ���� ����
	//�����ʹ� ���� ������ ��ġ�� �̵����ְ� ��
	//�����Ͱ� ����Ű�� ����� size ������ ���� (int�� 4�� ����)

	/*
	int arr[5];
	//int* parr = &arr[0]; == //int * parr = arr;
	int * parr = &arr[2];

	cout << parr << endl;
	cout << parr+1 << endl; //intŸ���̴ϱ� ���ϱ� 1�� 1�������ƴ϶� �ּҰ� 4����
	cout << parr+2 << endl;
	*/

	//==============================================================

	/*
	short arrr[5];
	//int* parr = &arr[0]; == //int * parr = arr;
	short * parrr = &arrr[2];
	//��Ȯ�� ���� �����ϴ� ����� �󸶸�ŭ�� size�� �������ְ�, � Ÿ������ �˾Ƽ� ���� ��� ����

	//�ٵ� void Ÿ���� ����̵� ���� �� �־�����
	//��½����� ��Ȯ�ϰ� ���� ����Ű�� ����� size�� �˷���� �󸶸�ŭ ������
	//�������� �Ǽ����� ��� ������ �˷�����Ѵ�. ���Ǹ� ��￩�� �Ѵ�.

	cout << parrr << endl;
	cout << parrr + 1 << endl; //shortŸ���̴ϱ� ���ϱ� 1�� 1�������ƴ϶� �ּҰ� 2����
	cout << parrr + 2 << endl;
	cout << parrr - 2 << endl;
	//������·� ���� ���ϱ⸦ ��



	//�� �迭 �� ������ Ÿ�Կ� ���� �ּ��� ������ �޶��� �� �ִ�.
	*/

	//==============================================================

	/*
	//������ ���� ���������� ����
	short arr[5];
	short * p1 = &arr[1];
	short * p2 = &arr[4];

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p2 - p1 << endl;
	//�E���� ������ ���� ����ϴ°�
	//(�޸� ���� �ּҴ� 6�� ���̳��µ� �� ����� ����ϴ°� �ƴ϶�)
	//(�� ������ ������ 3�̶�� ���� ����ؼ� ����� 3���� ����)
	*/

	//==============================================================

	/*
	int arr[5];
	int * p1 = &arr[1];
	int * p2 = &arr[4];

	cout << p1 << endl;
	cout << p2 << endl;
	//��������� �� �� �ּҰ��� 12byte�� ���̰� �߻���

	cout << p2 - p1 << endl;
	//short type�϶��� �Ȱ��� ������ gap�� 3���� ��Ÿ��.
	//�����Ϳ� ��� ���� ������ �ϰ� ������ ���� ���� ������ �ϰ�
	//�� gap������ �������� �� �� �ִ�(������ ũ�� ������)
	//(�ܼ��� ��� ������ �ƴ϶�)
	*/

	//==============================================================

	//�迭������
	/*
	long arry[10];
	long(*p)[10] = &arry; //���ۼ��� �� �ٿ������
	//����� ���� ����ų ����� size�� �������

	(*p)[5] = 100;
	cout << arry[5] << endl; //100�� ��µ�
	cout << (*p)[5] << endl; //�迭 �����͸� ����� ���
	cout << arry[4] << endl; //�ʱ�ȭ ���ؼ� ���̰� ��µ�

	*p[2] = 100; //��ȣ�� �Ⱦ��� �ȵȴ�
	cout << arry[2] << endl; //��ȣ�� �ȽἭ ����ġ ���� �����Ⱚ�� ����

	//���� ���� �޸� ������ �����ϴ°� ������
	//�����͸� �� ����� ��ƴ�
	*/

	//==============================================================

	//������ �迭
	
	short a, b, c=5,d=2;
	short * arr[4];
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	arr[3] = &d;

	cout << arr[0] << endl; //a�� �ּ�
	cout << arr[1] << endl; //b�� �ּ�
	cout << arr[2] << endl; //c�� �ּ�
	cout << arr[3] << endl; //d�� �ּ�
	//�ּҰ��� ���޾� �����°� �ƴ϶� ���� �ٸ�
	//��?
	//������ �迭 �ȿ� �ִ� ������ �ּ��̱� ������
	//a,b,c,d�� �迭 �ƴϰ� ���ӵ� ���� �ȿ� �ִ� ���� �ƴϴϱ�
	//�׳� ����� �ּ� ������ ���°���

	cout << endl;

	//�������� �迭���� ���ӵ� ������ ����
	//���ۼ��� �ٿ��� ���ӵ� ������ ������ Ȯ������
	cout << &arr[0] << endl; //arr[0]�� �ּ� (a�� �ƴ϶� �� ĭ�� �ּ�)
	cout << &arr[1] << endl; 
	cout << &arr[2] << endl;
	cout << &arr[3] << endl;
	//�̷��� ����ϸ� ��״� 4����Ʈ�� ���̳��� ������ �� �� �ִ�.
	//���޾Ƽ�

	cout << endl;

	//������ ����Ű�� �� ����Ϸ���
	cout << *arr[0] << endl; //���������༭ �����Ⱚ
	cout << *arr[1] << endl; //���� �����༭ �����Ⱚ
	cout << *arr[2] << endl;
	cout << *arr[3] << endl;
	
	//�����ʹ� �ٸ� ���� ���� �� �� ���� ���
	
}