/******************************
* Автор:   Мусаев Артём      *
* Задание: Обработка массивов  *
* Вариант: 3                   *
******************************/

#include <iostream>
using namespace std;

int main() {
  const int maxSize = 20;
  int matrix[maxSize][maxSize];
  int size;

  long long sumBelowMainDiagonal = 0;
  int countBelowMainDiagonal = 0;

  int pie = 0;

if (!(cin >> size) || size < 1 || size > maxSize) {
  cout << "INVALID\n";
  return 1;
}

for (int rowIndex = 0; rowIndex < size; ++rowIndex) {
  for (int columnIndex = 0; columnIndex < size; ++columnIndex) {
  if (!(cin >> matrix[rowIndex][columnIndex]) ||
  matrix[rowIndex][columnIndex] < -1000 ||
  matrix[rowIndex][columnIndex] > 1000) {
  cout << "INVALID\n";
  return 1;
}
}
}

for (int rowIndex = 0; rowIndex < size; ++rowIndex) {
  for (int columnIndex = 0; columnIndex < size; ++columnIndex) {
  if (rowIndex > columnIndex) {
  sumBelowMainDiagonal += matrix[rowIndex][columnIndex];
  ++countBelowMainDiagonal;
  }
  }
  }

  pie = 1;

  for (int rowIndex = 0; rowIndex < size; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < size; ++columnIndex) {
    if (columnIndex > 0) {
    cout << " ";
}
    cout << matrix[rowIndex][columnIndex];
}
    cout << "\n";
}

  cout << sumBelowMainDiagonal << " " << countBelowMainDiagonal << "\n";

  return 0;
}