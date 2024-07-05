#include <bits/stdc++.h>
using namespace std;

void findResultantForce() {
    double force1, force2, degree;

    try 
    {
        cout << "Enter the first force (in Newton): ";
        cin >> force1;

        if (cin.fail()) 
            throw invalid_argument("Invalid first force input");

        cout << "Enter the second force (in Newton): ";
        cin >> force2;

        if (cin.fail()) 
            throw invalid_argument("Invalid second force input");

        cout << "Enter the force angle (in degrees): ";
        cin >> degree;

        if (cin.fail()) 
            throw invalid_argument("Invalid input");

        // Convert degrees to radians
        double radians = degree * M_PI / 180.0;

        // Calculate the resultant force using the cosine rule
        double resultantForce = sqrt((force1 * force1) + (force2 * force2) + 2 * force1 * force2 * cos(radians));

        cout << "The resultant force is: " << resultantForce << " Newtons" << endl;
    } 
    catch (const invalid_argument& e) 
    {
        cout << "Enter only numbers" << endl;
    }
}

int main() 
{
    findResultantForce();
    return 0;
}

