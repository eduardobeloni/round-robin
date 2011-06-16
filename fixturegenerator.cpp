#include <iostream>

#include "fixturegenerator.h"

using namespace std;

void fixture_init(list<string> *t)
{
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
			cout << *home << "\t\tvs\t\t" << *away << endl;
		home++; away++;
	}
}

void fixture_print(int num, int last)
{
	if (num > 1)
		cout << '\n';

	if (num != last)
		cout << "------- Fixture " << num << " -------\n";
	else
		cout << "------- Final Fixture -------\n";
}
