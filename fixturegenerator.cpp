#include <iostream>
#include <iomanip>

#include "fixturegenerator.h"

using namespace std;

static int largest = 0;

void fixture_init(list<string> *t)
{
	for (list<string>::const_iterator it = t->begin(); it != t->end(); it++)
	{
		if ((*it).size() > ::largest)
			::largest = (*it).size();
	}

	if (t->size() % 2)
		t->push_back("?");
}

void fixture_rotate_clockwise(list<string> *t)
{
	string team;
	list<string>::iterator second;

	team = t->back();
	t->pop_back();
	second = t->begin();
	second++;
	t->insert(second, team);
}

void fixture_pair(const list<string> &t)
{
	int half = t.size() / 2;
	list<string>::const_iterator home = t.begin();
	list<string>::const_reverse_iterator away = t.rbegin();

	for (int i = 0; i < half; i++)
	{
		if (*home != "?" && *away != "?")
			cout << setw(::largest) << *home << "  vs  " << *away << endl;
		home++; away++;
	}
}

void fixture_print(int num, int last)
{
	if (num > 1)
		cout << '\n';

	if (num != (last - 1))
		cout << "------- Fixture " << num << " -------\n";
	else
		cout << "------- Final Fixture -------\n";
}
