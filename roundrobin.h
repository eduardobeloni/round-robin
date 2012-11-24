#ifndef ROUNDROBIN_H
#define ROUNDROBIN_H

#include <list>
#include <string>

void roundr_init(std::list<std::string> *t);
void roundr_rotate_clockwise(std::list<std::string> *t);
void roundr_pair(const std::list<std::string> &t);
void roundr_print_header(int num, int last);

#endif
