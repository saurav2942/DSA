// ....................Count of triplets in an Array with odd sum......................................

/* Naive Approach: The given problem can be solved by iterating over all possible unordered triplets in the array and keep a track of the number of triplets such that their sum is odd.
Time Complexity: O(N3)

Efficient Approach: The above approach can be optimized using the below property of integers:
odd + even + even = odd
odd + odd + odd = odd
Therefore, to implement the above idea, we can count the number of even and odd integers in the array. Suppose the count of odd integers is O and the count of even integers is E. So the distinct ways to arrange one odd integer and two even integers is OC1 * EC2 -> (O * E * (E-1))/2 and the distinct ways to arrange three odd integers is OC3 -> (O * (O-1) * (O-2)) / 6. The final answer will be the sum of the above two values.

Below is the implementation of the above approach:*/

// C++ Program for the above approach
#include <iostream>
using namespace std;

// Function to count the number of
// unordered triplets such that their
// sum is an odd integer
int countTriplets(int arr[], int n)
{
	// Count the number of odd and
	// even integers in the array
	int odd = 0, even = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] & 1)
			odd++;
		else
			even++;
	}

	// Number of ways to create triplets
	// using one odd and two even integers
	int c1 = odd * (even * (even - 1)) / 2;

	// Number of ways to create triplets
	// using three odd integers
	int c2 = (odd * (odd - 1) * (odd - 2)) / 6;

	// Return answer
	return c1 + c2;
}

// Driver Code
int main()
{
	int arr[] = { 4, 5, 6, 4, 5, 10, 1, 7 };
	int n = sizeof(arr) / sizeof(int);

	// Function Call
	int ans = countTriplets(arr, n);

	// Print Answer
	cout << ans;

	return 0;
}
