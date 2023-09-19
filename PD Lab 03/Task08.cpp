#include <iostream>
using namespace std;
main()
{

  double power;
  double voltage;
  double current;

  cout << "Enter voltage (in volts): ";
  cin >> voltage;
  cout << "Enter current (in amperes): ";
  cin >> current;
	power = voltage * current;
  cout << "The power is " << power << " watts.";

}
