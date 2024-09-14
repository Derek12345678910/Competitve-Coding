/*
Problem Description
There is a new conveyor belt sushi restaurant in town. Plates of sushi travel around the
restaurant on a raised conveyor belt and customers choose what to eat by removing plates.
Each red plate of sushi costs $3, each green plate of sushi costs $4, and each blue plate of
sushi costs $5.
Your job is to determine the cost of a meal, given the number of plates of each colour chosen
by a customer.
Input Specification
The first line of input contains a non-negative integer, R, representing the number of red
plates chosen. The second line contains a non-negative integer, G, representing the number
of green plates chosen. The third line contains a non-negative integer, B, representing the
number of blue plates chosen.
Output Specification
Output the non-negative integer, C, which is the cost of the meal in dollars.
Sample Input
0
2
4
Output for Sample Input
28
Explanation of Output for Sample Input
This customer chose 0 red plates, 2 green plates, and 4 blue plates. Therefore, the cost of
the meal in dollars is 0 × 3 + 2 × 4 + 4 × 5 = 28
*/
#include "../../comp.h"

using namespace std;

int J12024(){

    int R, G, B;
    
    // Read the number of plates of each color
    cin >> R;
    cin >> G;
    cin >> B;
    
    // Prices for each plate color
    const int red_price = 3;
    const int green_price = 4;
    const int blue_price = 5;
    
    // Calculate the total cost
    int total_cost = (R * red_price) + (G * green_price) + (B * blue_price);
    
    // Output the total cost
    cout << '\n' << total_cost;
    
    return 0;
}