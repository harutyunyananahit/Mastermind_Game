#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
string Generate_random_color(vector<string> A)
{
  int k = rand() % A.size();
  string result = *(A.begin() + k);
  return result;
}

int main()
{
  srand((unsigned)time(NULL));

  vector<string> Colors;
  Colors.push_back("red");
  Colors.push_back("green");
  Colors.push_back("blue");
  Colors.push_back("yellow");
  Colors.push_back("brown");
  Colors.push_back("orange");
  Colors.push_back("black");
  Colors.push_back("gray");

  vector<string> Pin;
  for(int i = 0; i < 4; ++i)
  {
    string k = Generate_random_color(Colors);
    Pin.push_back(k);
  }
  for(int i = 0; i <  4; ++i)
  {
    cout << Pin[i] << ' ';
  }
  vector<string> Pin_Try;
  int color_match = 0;
  int double_match = 0;
  for(int i = 0; i < 10; ++i)
  {
  for(int i = 0; i < 4; ++i)
  {
    string k; cin >> k;
    Pin_Try.push_back(k);
  }
  cout << endl;
  if(Pin_Try[0] == Pin[0] && Pin_Try[1] == Pin[1] && Pin_Try[2] == Pin[2] && Pin_Try[3] == Pin[3])
  {
    cout << "You Win";
    break;
  }
  if(Pin_Try[0] == Pin[0])
  {
    ++double_match;
  }
  if(Pin_Try[1] == Pin[1])
  {
    ++double_match;
  }
  if(Pin_Try[2] == Pin[2])
  {
    ++double_match;
  }
  if(Pin_Try[3] == Pin[3])
  {
    ++double_match;
  }
  if(Pin_Try[0] == Pin[1] || Pin_Try[0] == Pin[2] || Pin_Try[0] == Pin[3])
  {
    ++color_match;
  }
  if(Pin_Try[1] == Pin[0] || Pin_Try[1] == Pin[2] || Pin_Try[1] == Pin[3])
  {
    ++color_match;
  }
  if(Pin_Try[2] == Pin[0] || Pin_Try[2] == Pin[1] || Pin_Try[2] == Pin[3])
  {
    ++color_match;
  }
  if(Pin_Try[3] == Pin[0] || Pin_Try[3] == Pin[1] || Pin_Try[3] == Pin[2])
  {
    ++color_match;
  }
  cout << double_match << ' ' << color_match;
  Pin_Try.clear();
  double_match = 0;
  color_match = 0;
}
  return 0;
}
