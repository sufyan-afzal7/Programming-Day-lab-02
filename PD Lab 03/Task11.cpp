#include <iostream>
using namespace std;
main()
{

  double population;
  double n;
  double total;

  cout << "Enter the current world population: ";
  cin >> population;
  cout << "Enter the monthly birth rate (number of births per month): ";
  cin >> n;
       total = population + (360 * n);
  cout << "The population in three decades will be: " << total;

}
