#include <iostream>
using namespace std;

/*class Point
{
	int x;
	int y;
public:
	Point() { x = y = 0; }
	void SetPoint(int iX, int iY)
	{
		x = iX;
		y = iY;
	}
	void Show()
	{
		cout << x << "\t" << y << "\n\n";
	}
};
class Figura
{
	Point* obj;
	int count;
	int color;
public:
	Figura()
	{
		count = color = 0;
		obj = NULL;
	}
	void CreateFigure(int cr, int ct)
	{
		count = ct;
		color = cr;
		obj = new Point[count];
		if (!obj) exit(0);
		int tempX, tempY;
		for (int i = 0; i < count; i++)
		{
			cout << "Set X\n";
			cin >> tempX;
			cout << "Set Y\n";
			cin >> tempY;
			obj[i].SetPoint(tempX, tempY);
		}
	}
	void ShowFigura()
	{
		cout << "-------------------------\n\n";
		cout << "Color " << color << "\n\nPoints - " << count << "\n\n";
		for (int i = 0; i < count; i++)
			obj[i].Show();
	}
	~Figura()
	{
		if (obj != NULL) delete[] obj;
	}
};
class Figury
{
	Figura* obj;
	int count;
public:
	Figury()
	{
		count = 0;
		obj = NULL;
	}
	void CreateClass(int ct)
	{
		count = ct;
		obj = new Figura[count];
		if (!obj) exit(0);
		int color;
		for (int i = 0; i < count; i++)
		{
			cout << "Set color\n";
			cin >> color;
			obj[i].CreateFigure(color, 1);
		}
	}
	void ShowFigury()
	{
		cout << "Figuty - " << count << ":\n";
		for (int i = 0; i < count; i++)
			obj[i].ShowFigura();
	}
	~Figury()
	{
		if (obj != NULL) delete[] obj;
	}
};

int main()
{
	Figury f;
	f.CreateClass(3);
	f.ShowFigury();
	return 0;
}*/

/*struct Date
{
	int day;
	int mounth;
	int year;
};

class Passport
{
protected:
	int series;
	int number;
	Date birthday;
	string FIO;
public:
	Passport()
	{
		series = number = 0;
		birthday.day = birthday.mounth = 1;
		birthday.year = 2000;
		FIO = "Ivanov Ivan Ivanovich";
	}
	int& GetSeries()
	{
		return series;
	}
	int& GetNumber()
	{
		return number;
	}
	Date& GetBirthday()
	{
		return birthday;
	}
	string& GetFIO()
	{
		return FIO;
	}
};
class ForeignPassport : public Passport
{
	string visa;
	int numb;
public:
	ForeignPassport()
	{
		visa = "Nigde";
		numb = 0;
	}
	ForeignPassport(string v, int n)
	{
		visa = v;
		numb = n;
	}
	string& GetVisa()
	{
		return visa;
	}
	int& GetNumb()
	{
		return numb;
	}
	void Show()
	{
		cout << "Series: " << series << " Number: " << number << "\n";
		cout << "Birthday: " << birthday.day << "." << birthday.mounth << "." << birthday.year << "\n";
		cout << "FIO: " << FIO << "\n";
		cout << "Visa: " << visa << "\n";
		cout << "Number of foreign passport: " << numb << "\n";
	}
};

int main()
{
	string visa = "Germany, United States of America, Democratic Republic of the Congo";
	ForeignPassport F(visa,134565);
	F.GetSeries() = 14;
	F.GetNumber() = 856335;
	F.GetBirthday() = { 12,10,2002 };
	F.GetFIO() = "Amer Nira Menirovich";
	F.Show();
	return 0;
}

struct Date
{
	int day;
	int mounth;
	int year;
};

class Student
{
protected:
	string FIO;
	Date postuplenie;
	int cours;
	Date birthday;
	int group;
public:
	Student()
	{
		FIO = "Ivanov Ivan Ivanovich";
		postuplenie.day = postuplenie.mounth = 1;
		postuplenie.year = 2021;
		cours = 1;
		birthday.day = birthday.mounth = 1;
		birthday.year = 2003;
		group = 12;
	}
	string& GetFIO()
	{
		return FIO;
	}
	Date& GetPostuplenie()
	{
		return postuplenie;
	}
	int& GetCours()
	{
		return cours;
	}
	Date& GetBirthday()
	{
		return birthday;
	}
	int& GetGroup()
	{
		return group;
	}
};
class Aspirant : public Student
{
	Date sdacha;
	string name_of_professor;
	string tema;
public:

};*/

void test_pow(const int* v)
{
	int* temp;
	temp = const_cast<int*>(v);
	*temp = *v * *v;
}

class B
{
public:
	virtual void Test()
	{
		cout << "Test B\n\n";
	}
};
class D : public B
{
public :
	virtual void Test()
	{
		cout << "Test D\n\n";
	}
};

int main()
{
	/*int x = 10;
	cout << "Before - " << x << "\n\n";
	test_pow(&x);
	cout << "After - " << x << "\n\n";*/
	B* ptr_b, obj_b;
	D* ptr_d, obj_d;
	ptr_d = dynamic_cast<D*> (&obj_d);
	if (ptr_d)
	{
		cout << "Good work - ";
		ptr_d->Test();
	}
	else
		cout << "Error work!!!\n\n";
	ptr_b = dynamic_cast<B*>(&obj_d);
	if (ptr_b)
	{
		cout << "Good work - ";
		ptr_d->Test();
	}
	else
		cout << "Error work!!!\n\n";
	ptr_b = dynamic_cast<B*>(&obj_b);
	if(ptr_b)
	{
		cout << "Good work - ";
		ptr_d->Test();
	}
	else
	    cout << "Error work!!!\n\n";
	ptr_b = dynamic_cast<B*>(&obj_b);
	if (ptr_b)
	{
		cout << "Good work - ";
		ptr_d->Test();
	}
	else
		cout << "Error work!!!\n\n";
	ptr_d = dynamic_cast<D*>(&obj_b);
	if (ptr_d)
	{
		cout << "Good work - ";
		ptr_d->Test();
	}
	else
		cout << "Error work!!!\n\n";
	


	int i;
	for (int i = 0; i < 10; i++)
	{
		cout << static_cast<double>(i) / 3 << "\t";
	}



	int x;
	const char* str = "Y";
	cout << str << "\n\n";
	x = reinterpret_cast<int>(str);
	cout << x << "\n\n";
	return 0;
}