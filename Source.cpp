//Source.cpp////////////////////////////////////
#include<iostream>
#include <Windows.h>
#include "LongC.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	LongC::Pair p, g, s;

	p.setA(1);
	p.setB(2);
	g.setA(3);
	g.setB(4);

	s = Add(p, g);
	cout << "��������� ����� ����: " << s.getA() << endl;
	cout << "��������� ����� ����: " << s.getB() << endl;

	// ������� �������� add, mult, sub
	LongC q, w, v;
	w.Read();
	w.Display();

	cout << "���������: " << endl;
	v.Init(p);
	q = add(v, w);
	q.Display();
	cout << "³�������: " << endl;
	q = sub(v, w);
	q.Display();
	cout << "��������: " << endl;
	q = mult(v, w);
	q.Display();

	return 0;
}