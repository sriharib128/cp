// CPP Program to determine if
// number N of given form is
// divisible by 3 or not
#include <bits/stdc++.h>
using namespace std;

// function returns true if number N is
// divisible by 3 otherwise false,
// dig0 - most significant digit
// dig1 - 2nd most significant digit
// K - number of digits
bool multipleOfThree(int K, int dig0, int dig1)
{
	// sum of digits
	long long int sum = 0;

	// store the sum of first two digits
	// modulo 10 in a temporary variable
	int temp = (dig0 + dig1) % 10;

	sum = dig0 + dig1;

	// if the number N is a two digit number
	if (K == 2) {
		if (sum % 3 == 0)
			return true;
		else
			return false;
	}

	// add temp to sum to get the sum
	// of first three digits which are
	// not a part of cycle
	sum += temp;

	// get the number of groups in cycle
	long long int numberofGroups = (K - 3) / 4;

	// get the remaining number of digits
	int remNumberofDigits = (K - 3) % 4;

	// if temp = 5 or temp = 0 then sum of each group will
	// be 0
	if (temp == 5 || temp == 0)
		sum += (numberofGroups * 0);

	else
		// add sum of 20 for each group (2, 4, 8, 6)
		sum += (numberofGroups * 20);

	// find the remaining sum of remaining digits
	for (int i = 0; i < remNumberofDigits; i++) {
		temp = (2 * temp) % 10;
		sum += temp;
	}
	// cout<<sum<<" - ";
	// check if it is divisible by 3 or not
	if (sum % 3 == 0)
		return true;
	else
		return false;
}

// Driver Code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int K,dig1,dig0;
		cin>>K;
		cin>>dig0>>dig1;
		if (multipleOfThree(K, dig0, dig1))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
