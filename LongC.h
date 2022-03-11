//LongC.h///////////////////////////////////////
#pragma once
#include<iostream>
#include <string>

using namespace std;

class LongC
{
public:
	class Pair
	{
	private:
		int  a, b;
	public:
		int getA() const { return a; }
		int getB() const { return b; }


		void setA(int a) { this->a = a; }
		void setB(int b) { this->b = b; }



		void Read();
		void Display() const;
		string toString()const;
		void Init(int a, int b);
		friend Pair Add( Pair l, Pair r);
	};
private:
	Pair pair;
public:
	LongC::Pair getPair()const { return pair; }
	void setPair(LongC::Pair pair) { this->pair = pair; }

	void Init(LongC::Pair pair);
	void Read();
	void Display()const;
	string toString()const;

	friend LongC add(LongC l, LongC r);
	friend LongC mult(LongC l, LongC r);
	friend LongC sub(LongC l, LongC r);
};

