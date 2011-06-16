#ifndef FIXTURE_GENERATOR_H
#define FIXTURE_GENERATOR_H

#include <list>
#include <string>

void fixture_init(std::list<std::string> *t);
void fixture_rotate_clockwise(std::list<std::string> *t);
void fixture_pair(const std::list<std::string> &t);
void fixture_print(int num, int last);

#endif
