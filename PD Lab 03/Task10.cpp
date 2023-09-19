#include <iostream>
using namespace std;
main()
{

  double win;
  double draw;
  double loss;
  string name;
  double wins;
  double draws;
  double losses;
  double score;

  cout << "Enter the name of the cricket team: ";
  cin >> name;
  cout << "Enter the number of wins: ";
  cin >> win;
  cout << "Enter the number of draws: ";
  cin >> draw;
  cout << "Enter the number of losses: ";
  cin >> loss;

  wins = win * 3;
  draws = draw * 1;
  losses = loss * 0;

  score = wins + losses + draws;
	
  cout << name <<" has obtained " << score << " points in the Asia Cup tournament.";

}
