//LongC.cpp/////////////////////////////////////
#include "LongC.h"
#include <iostream>
#include <sstream>
using namespace std;

void LongC::Init(LongC::Pair pair)
{
    setPair(pair);
}

void LongC::Read()
{
    LongC::Pair p;
    cout << endl;
    cout << "Pair: " << endl;
    p.Read();
    Init(p);
}

void LongC::Display() const
{
    cout << " pair: " << endl;
    pair.Display();
    cout << endl;
}
string LongC::toString()const
{
    stringstream sout;
    cout << endl;
    cout << " pair: " << endl;
    pair.Display();
    return sout.str();
}

LongC add(LongC l, LongC r)
{
    LongC t;
    t.pair = Add(l.pair, r.pair);
    return t;
}

LongC mult(LongC l, LongC r)
{
    LongC f;
    f.pair.setA(l.pair.getA() * r.pair.getA());
    f.pair.setB(l.pair.getB() * r.pair.getB());
    return f;
}

LongC sub(LongC l, LongC r)
{
    LongC h;
    h.pair.setA(l.pair.getA() - r.pair.getA());
    h.pair.setB(l.pair.getB() - r.pair.getB());
    return h;
}
 //клас Pair//

 LongC::Pair Add( LongC::Pair l, LongC::Pair r) 
{
    LongC::Pair t;
    t.a = l.a + r.a;
    t.b = l.b + r.b;
    return t;
}

void LongC::Pair::Read()
{
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    Init(a, b);
}
string LongC::Pair::toString()const
{
    stringstream sout;
    sout << " a = " << a << ", " << "b = " << b << endl;
    return sout.str();
}
void LongC::Pair::Display() const
{
    cout << toString();
}

void LongC::Pair::Init(int a, int b)
{
    setA(a);
    setB(b);
}
