#pragma once
#include <vector>


using List = std::vector<double>;

List create(int n);

void affiche(const List& v);

List reverse(const List& l);

List concat(List l1, const List& l2);

typedef std::vector<List> ListVector; // ou using

ListVector createListVector(int numVectors);

void affiche(const ListVector& v);