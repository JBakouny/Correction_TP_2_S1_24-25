#pragma once
#include <vector>


using List = std::vector<double>;

List create(int n);

void affiche(const List& v);

List reverse(const List& l);

List concat(const List& l1, const List& l2);