#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

int main() {
  string mines[100] = {
      "Stone",   "Stone",  "Stone",  "Stone",  "Stone",   "Stone",   "Stone",
      "Stone",   "Stone",  "Stone",  "Stone",  "Stone",   "Stone",   "Stone",
      "Stone",   "Stone",  "Stone",  "Stone",  "Stone",   "Stone",   "Stone",
      "Stone",   "Stone",  "Stone",  "Stone",  "Stone",   "Stone",   "Stone",
      "Stone",   "Stone",  "Stone",  "Stone",  "Stone",   "Stone",   "Stone",
      "Stone",   "Stone",  "Stone",  "Stone",  "Stone",   "Coal",    "Coal",
      "Coal",    "Coal",   "Coal",   "Coal",   "Coal",    "Coal",    "Coal",
      "Coal",    "Coal",   "Coal",   "Coal",   "Coal",    "Coal",    "Copper",
      "Copper",  "Copper", "Copper", "Copper", "Copper",  "Copper",  "Copper",
      "Copper",  "Copper", "Bronze", "Bronze", "Bronze",  "Bronze",  "Bronze",
      "Bronze",  "Bronze", "Bronze", "Bronze", "Bronze",  "Iron",    "Iron",
      "Iron",    "Iron",   "Iron",   "Iron",   "Iron",    "Iron",    "Iron",
      "Iron",    "Gold",   "Gold",   "Gold",   "Gold",    "Gold",    "Emrald",
      "Emrald",  "Emrald", "Emrald", "Emrald", "Diamond", "Diamond", "Diamond",
      "Diamond", "Diamond"};

  string pickaxes[] = {};

  int command, cash, power;
  power = 1;
  cash = 0;

  string find;
  while (true) {
    cout << "**-** Welcome To The Mining Game **-**\n \n";
    cout << "*-*   For Go To The Mine : 1       *-*\n";
    cout << "*-*   For Open The Shop : 2        *-*\n\n";
    cout << "**-** -------------------------- **-** \n";
    cin >> command;
    switch (command) {
    case 1:
      for (int i = 0; i < power; i++) {
        find = mines[rand() % 99];
        cout << "Wow you find " + find + "!\n";
        if (find == "Stone") {
          cout << "You win 10$!\n";
          cash = cash + 10;
        } else if (find == "Coal") {
          cout << "You win 20$!\n";
          cash = cash + 20;
        } else if (find == "Copper") {
          cout << "You win 25$!\n";
          cash = cash + 25;
        } else if (find == "Bronze") {
          cout << "You win 30$!\n";
          cash = cash + 30;
        } else if (find == "Iron") {
          cout << "You win 50$!\n";
          cash = cash + 50;
        } else if (find == "Gold") {
          cout << "You win 150$!\n";
          cash = cash + 150;
        } else if (find == "Emrald") {
          cout << "You win 200$!\n";
          cash = cash + 200;
        } else if (find == "Diamond") {
          cout << "You win 300$!\n";
          cash = cash + 300;
        }
        cout << "now you have ";
        cout << cash;
        cout << "$\n\n";
      }
      break;
    case 2:
      cout << "**-**              Shop              **-**\n\n";
      cout << "*-* For Buy Stone Pickaxe (200$) : 3   *-*\n";
      cout << "*-* For Buy Iron Pickaxe (800$) : 4    *-*\n";
      cout << "*-* For Buy Gold Pickaxe (1400$) : 5   *-*\n";
      cout << "*-* For Buy Diamond Picaxe (2800$) : 6 *-*\n\n";
      cout << "**-** ------------------------------ **-** \n";
      break;
    case 3:
      if(cash >= 200){
        cout << "**-**   Buying Pickaxe  **-**\n";
        cout << "*-* You Buy Stone Pickaxe *-*\n";
        cout << "*-* [-200$]               *-*\n";
        cout << "**-** ------------------- *-*\n";
        cash = cash - 200;
        power = 3;
        } else {
        cout << "insufficient balance";
        }
      break;
    case 4:
      if(cash >= 800){
        cout << "**-**   Buying Pickaxe  **-**\n";
        cout << "*-* You Buy Iron Pickaxe *-*\n";
        cout << "*-* [-800$]               *-*\n";
        cout << "**-** ------------------- *-*\n";
        cash = cash - 800;
        power = 5;
        } else {
        cout << "insufficient balance";
        }
      break;
    case 5:
      if(cash >= 1400){
        cout << "**-**   Buying Pickaxe  **-**\n";
        cout << "*-* You Buy Gold Pickaxe *-*\n";
        cout << "*-* [-1400$]               *-*\n";
        cout << "**-** ------------------- *-*\n";
        cash = cash - 1400;
        power = 8;
        } else {
        cout << "insufficient balance";
        }
      break;
    case 6:
      if(cash >= 2800){
        cout << "**-**   Buying Pickaxe  **-**\n";
        cout << "*-* You Buy Stone Pickaxe *-*\n";
        cout << "*-* [-2800$]               *-*\n";
        cout << "**-** ------------------- *-*\n";
        cash = cash - 2800;
        power = 16;
        } else {
        cout << "insufficient balance";
        }
      break;
    }
  }
}
