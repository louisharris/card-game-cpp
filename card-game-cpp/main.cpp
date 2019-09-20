#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

#include "card.cpp";

using namespace std;


int main() 
{
    cout << "Hello, World!" << endl;
    Card card = Card(5,6);

    cout << to_string(card.GetAttack()) << endl;
    return 0;
}