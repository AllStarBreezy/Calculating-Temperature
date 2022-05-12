#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
string ToTemp = "";
string curTemp = "";
int infoSelect = -1;
float answer = 0;
int ToTempNum = 0;
/*
char F,C,K,R;
bool Fselect = false;
bool Cselect = false;
bool Kselect = false;
bool Rselect = false;
int Fnum,Cnum,Knum,Rnum;
*/
cout << "Choose What Temperature you want to convert to\n";
cout << "0 --> Fahrenheit\n";
cout << "1 --> Celsius\n";
cout << "2 --> Kelvin\n";
cout << "3 --> Rankine\n";
cout << "Selection: ";

  cin >> infoSelect;
    switch(infoSelect)
    {
      case 0:
      ToTemp = "Fahrenheit";
      curTemp = "Celsius"; break;
      case 1:
      ToTemp = "Celsius";
      curTemp = "Fahrenheit"; break;
      case 2:
      ToTemp = "Kelvin";
      curTemp = "Celsius"; break;
      case 3:
      ToTemp = "Rankine";
      curTemp = "Fahrenheit"; break;
    }
  cout << "Selected: " << ToTemp << "\n";

  cout << "Insert " << curTemp << " to translate to " << ToTemp << ": ";
  cin >> ToTempNum;

  switch(infoSelect)
    {
      case 0:
      answer = (ToTempNum * 9/5) + 32; break;
      case 1:
      answer = (ToTempNum - 32) / 1.8; break;
      case 2:
      answer = ToTempNum + 273.2; break;
      if (answer < 0)
      {
        answer = 0;
      }
      case 3:
      answer = ToTempNum + 459.7; break;
    }

    cout << ToTemp << ": " << answer;

    /*
    Fahrenheit °F = (°C × 9/5) + 32 
    Centigrade °C = (°F - 32) / 1.8
    Rankine °R = °F + 459.7
    Kelvin °K = °C + 273.2
    */
}