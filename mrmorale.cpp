#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 103; i++)
  {
    if (i < 10)
    {
      cout << "00" << i << "\n";
    }
    else if (i > 10 && i < 100)
    {
      cout << "0" << i << "\n";
    }
    if (i >= 100)
    {
      cout << i << "\n";
    }
  }

  // Output Needed
  // 001
  // 002
  // 003
  // 004
  // 005
  // 006
  // 007
  // 008
  // 009
  // 010
  // 011
  // 012
  // 013
  // 014
  // 015
  // 016
  // 017
  // 018
  // 019
  // 020
  // 100
  // 101
  // 102
  return 0;
}