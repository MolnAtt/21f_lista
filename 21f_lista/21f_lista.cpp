#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Lista
{
public:
	Lista()
	{
	}

	~Lista()
	{
	}

	void kiir() 
	{
		for (auto& i : t)
		{
			cout << i << endl;
		}
	}

	void told_a_vegere(int a)
	{
		t.push_back(a);
	}

	int kerem(int i)
	{
		return t[i - 1];
	}

	int operator [](const int& i)
	{
		return t[i - 1];
	}


	void torol(int i)
	{
		t.erase(t.begin() + i - 1);
	}




private:
	vector<int> t;
};


int main()
{
    cout << "Hello World!\n";

	Lista l;
	l.kiir();
	
	// kis mese a begin-end dolgokról

	l.told_a_vegere(3);
	l.told_a_vegere(1);
	l.told_a_vegere(5);
	l.told_a_vegere(7);
	l.told_a_vegere(7);
	l.told_a_vegere(9);

	l.kiir();

	l.torol(2);
	cout << "--" << endl;
	l.kiir();

	cout << l.kerem(5) << endl;
	cout << l[5] << endl;

}
