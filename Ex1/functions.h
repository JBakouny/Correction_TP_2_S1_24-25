#pragma once
#include <array>

const int N = 3;
using List = std::array<double, N>;

List create(int n);

void affiche(const List& v);

List reverse(const List& l);

std::array<double, 2 * N> concat(const List & l1, const List& l2);

typedef std::array<List, N> ListVector; // ou using

ListVector createListVector(int numVectors);

void affiche(const ListVector& v);

ListVector reverse(const ListVector& l);

std::array<double, N* N> flatten(const ListVector& v);