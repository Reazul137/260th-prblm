#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
int num, guess;
bool isGuessed;

srand(time(0));
num = rand() % 100;

isGuessed = false;

while (!isGuessed)
{
  cout << "Enter an integer between 0 and 100 : " << endl;
cin >> guess;
cout << endl;

if (guess == num)
{
 cout << "You guessed the correct number!" << endl;
isGuessed = true;
}
else if (guess < num)
{
 cout << "Your guess is lower than the number, guess again!" << endl;
}
else
cout << "Your guess is higher than the number, guess again!"<< endl;
}
return 0;
}
