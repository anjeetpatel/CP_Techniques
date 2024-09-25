// given a positive integer n, the task is to determine weather it is a happy number.
// if the number eventually reaches 1, the function should return true, indicating that the number is happy. if the number enters a cycle and does not reach 1, the function should return false, indicating that the number is not happy.
#include <iostream>
#include <unordered_set>

using namespace std;

// Helper function to calculate the sum of squares of digits
int sumOfSquares(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Recursive function to determine if a number is a happy number
bool isHappyHelper(int n, unordered_set<int> &seen)
{
    if (n == 1)
    {
        return true; // Base case: reached 1
    }

    if (seen.find(n) != seen.end())
    {
        return false; // Cycle detected
    }

    seen.insert(n);                              // Record the number
    return isHappyHelper(sumOfSquares(n), seen); // Recur with the new number
}

// Function to initiate the recursive check
bool isHappy(int n)
{
    unordered_set<int> seen;
    return isHappyHelper(n, seen);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isHappy(n))
    {
        cout << n << " is a happy number." << endl;
    }
    else
    {
        cout << n << " is not a happy number." << endl;
    }

    return 0;
}
