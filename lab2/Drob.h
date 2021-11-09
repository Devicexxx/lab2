#pragma once
typedef unsigned int uint;

using namespace System;

class Drob
{
private:
	int chis;
	int znam;

public:

	Drob() { chis = 1; znam = 1; }
	bool setchis(int a);
	bool setznam(int a);
	bool setall(int a, int b);
	bool setstring(String^ s);
	int getchis();
	int getznam();


	String^ operator/(Drob& a);
	String^ operator*(Drob& a);
	String^ operator+(Drob& a);
	String^ operator-(Drob& a);

	bool operator==(Drob& a);
	bool operator>(Drob& a);
	bool operator<(Drob& a);















};