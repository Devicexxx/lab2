#include"Drob.h"
#include"iostream"

using namespace System;

bool Drob::setchis(int i)
{
	//if (i == 0) return 0;
	chis = i;
	return true;
}

bool Drob::setznam(int i)
{
	if (i == 0) return false;
	znam = i;
	return true;
}

bool Drob::setall(int a, int b)
{
	if (b == 0) return false;
	chis = a;
	znam = b;
	return true;
}

bool Drob::setstring(String^ s)
{
	int a = Convert::ToInt32(s->Split('/')[0]);
	int b = Convert::ToInt32(s->Split('/')[1]);
	if (b == 0) return false;
	this->setall(a, b);
}

int Drob::getchis()
{
	return chis;
}

int Drob::getznam()
{
	return znam;
}


String^ Drob::operator/(Drob& a)
{
	Drob k;
	if ((this->getznam() == 0) || (a.getchis() == 0) || (a.getznam() == 0))
		return (Convert::ToString("Îøèáêà"));
	k.setall(this->getchis() * a.getznam(), this->getznam() * a.getchis());
	return (Convert::ToString(k.chis + "/" + k.znam));
}
String^ Drob::operator*(Drob& a)
{
	Drob k;
	if ((this->getznam() == 0) || (a.getchis() == 0) || (a.getznam() == 0))
		return (Convert::ToString("Îøèáêà"));
	k.setall(this->getchis() * a.getchis(), this->getznam() * a.getznam());
	return (Convert::ToString(k.chis + "/" + k.znam));
}
String^ Drob::operator+(Drob& a)
{
	Drob k;
	if ((this->getznam() == 0) || (a.getchis() == 0) || (a.getznam() == 0))
		return (Convert::ToString("Îøèáêà"));
	if (this->getznam() == a.getznam())
		k.setall(this->getchis() + a.getchis(), this->getznam());
	else
		k.setall((this->getchis() * a.getznam()) + (a.getchis() * this->getznam()), this->getznam() * a.getznam());
	return (Convert::ToString(k.chis + "/" + k.znam));
}
String^ Drob::operator-(Drob& a)
{
	Drob k;
	if ((this->getznam() == 0) || (a.getchis() == 0) || (a.getznam() == 0))
		return (Convert::ToString("Îøèáêà"));
	if (this->getznam() == a.getznam())
		k.setall(this->getchis() - a.getchis(), this->getznam());
	else
		k.setall((this->getchis() * a.getznam()) - (a.getchis() * this->getznam()), this->getznam() * a.getznam());
	return (Convert::ToString(k.chis + "/" + k.znam));
}


bool Drob::operator==(Drob& a)
{
	if (this->getznam() == a.getznam())
	{
		if (this->getchis() == a.getchis())
			return true;
	}
	if ((this->getchis() * a.getznam()) == (a.getchis() * this->getznam()))
		return true;
	return false;
}
bool Drob::operator>(Drob& a)
{
	if (this->getznam() == a.getznam())
	{
		if (this->getchis() > a.getchis())
			return true;
	}
	else
		if ((this->getchis() * a.getznam()) > (a.getchis() * this->getznam()))
			return true;
	return false;
}
bool Drob::operator<(Drob& a)
{
	if (this->getznam() == a.getznam())
	{
		if (this->getchis() < a.getchis())
			return true;
	}
	else
		if ((this->getchis() * a.getznam()) < (a.getchis() * this->getznam()))
			return true;
	return false;
}









