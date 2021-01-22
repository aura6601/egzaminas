
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Kvepalai
{
public:
	Kvepalai()
	{

	}
	Kvepalai(double turis, string medziaga1, string medziaga2)
	{
		this->turis = turis;
		this->medziaga1 = medziaga1;
		this->medziaga2 = medziaga2;
	}
	int GautiTuri()
	{
		return turis;
	}
	string GautiMedziaga1()
	{
		return medziaga1;
	}
	string GautiMedziaga2()
	{
		return medziaga2;
	}
	void PakeistiTuri(double turis)
	{
		this->turis = turis;
	}
	void PakeistiMedziaga(string medziaga)
	{
		medziaga1 = medziaga;
	}
	void PakeistiMedziaga1(string medziaga)
	{
		medziaga2 = medziaga;
	}
private:
	double turis;
	string medziaga1, medziaga2;
};
class Dior : public Kvepalai {
public:
	Dior(double turis, string medziag1, string medziaga2) : Kvepalai(turis, medziag1, medziaga2)
	{

	}
	~Dior()
	{
	  //objektai neturi rodykles i adresu vieta, tai patys pasinaikins
	}
	Dior(const Dior& kvep);
	Dior& operator =(Dior& kvep)
	{
		PakeistiTuri(kvep.GautiTuri());
		PakeistiMedziaga(kvep.GautiMedziaga1());
		PakeistiMedziaga1(kvep.GautiMedziaga2());
		return *this;
	}
	Dior(Dior& kvep)
	{
		cout << kvep.GautiTuri();
	}
	Dior& operator =(Dior&& kvep)
	{
		PakeistiTuri(kvep.GautiTuri());
		kvep.PakeistiTuri(NULL);
		PakeistiMedziaga(kvep.GautiMedziaga1());
		kvep.PakeistiMedziaga(NULL);
		PakeistiMedziaga1(kvep.GautiMedziaga2());
		kvep.PakeistiMedziaga1(NULL);
	}
	Dior(Dior&& kvep)
	{
	    //pasikeitimas atributu
	}


};
int main()
{
	Dior p1(200.0, "apelsinai", "vanile");
	Dior p2(300.0, "braskes", "vysnios");
	Dior p3(50.0, "vanile", "sokoladas");
	Dior p4(150.0, "apelsinai", "greipfrutai");
	Dior p5(30.0, "meta", "mangai");

	cout << "Dior produkcija: " << endl;


    cout << left << setw(15) << p1.GautiTuri() << setw(15) << p1.GautiMedziaga1() << setw(15) << p1.GautiMedziaga2() << endl;
	cout << left << setw(15) << p2.GautiTuri() << setw(15) << p2.GautiMedziaga1() << setw(15) << p2.GautiMedziaga2() << endl;
	cout << left << setw(15) << p3.GautiTuri() << setw(15) << p3.GautiMedziaga1() << setw(15) << p3.GautiMedziaga2() << endl;
	cout << left << setw(15) << p4.GautiTuri() << setw(15) << p4.GautiMedziaga1() << setw(15) << p4.GautiMedziaga2() << endl;
	cout << left << setw(15) << p5.GautiTuri() << setw(15) << p5.GautiMedziaga1() << setw(15) << p5.GautiMedziaga2() << endl;

	return 0;
}

