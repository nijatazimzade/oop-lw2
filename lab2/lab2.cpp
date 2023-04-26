#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

#pragma region TASK6 FUNCTION ISPALINDROME
//bool isPalindrome(vector<int>& vec) {
//	int n = vec.size();
//	for (int i = 0; i < n / 2; i++) {
//		if (vec[i] != vec[n - 1 - i]) {
//			return false;
//		}
//	}
//	return true;
//}
#pragma endregion

int main()
{
#pragma region TASK1
	//int n;
	//cout << "Enter upper bound:\n";
	//cin >> n;
	//vector<int> v;
	//for (int i = 0; i <= n; i++)
	//{
	//    if (i % 7 != 0 && i % 13 != 0)
	//    {
	//        v.push_back(i);
	//    }
	//}


	//int t = 0;

	//for (int i = 0; i < v.size(); i++)
	//{
	//    cout << setw(4) << v.at(i);
	//    ++t;
	//    if (t == 10) {
	//        t = 0;
	//        cout << endl;
	//    }
	//}
#pragma endregion

#pragma region TASK2
	//int number;
	//int quantity;
	//double price;

	//vector<int> n;
	//vector<int> q;
	//vector<double> p;

	//cout << "Please enter number -1 to stop the process" << endl;

	//while (1)
	//{
	//	cout << "Enter number of product" << endl;
	//	cin >> number;
	//	if (number == -1)
	//	{
	//		break;
	//	}

	//	cout << "Enter quantity of product" << endl;
	//	cin >> quantity;
	//	if (quantity == -1)
	//	{
	//		break;
	//	}

	//	cout << "Enter price of product" << endl;
	//	cin >> price;
	//	if (price == -1)
	//	{
	//		break;
	//	}

	//	n.push_back(number);

	//	q.push_back(quantity);

	//	p.push_back(price);

	//	cout << "Your product successfully added!!!" << endl;
	//}

	//double T = 0;

	//cout << "Number" << "   " << "Quantity" << "   " << "Price" << "   " << "Price of product" << endl;

	//for (int i = 0; i < q.size(); i++)
	//{
	//	double cost = p.at(i) * q.at(i);
	//	T += cost;
	//	cout << setw(6) << n.at(i) << " " << setw(10) << q.at(i) << " " << setw(7) << p.at(i) << " " << setw(18) << cost << endl;
	//}
	//cout << "Total price is: " << T << endl;
#pragma endregion

#pragma region TASK3
	//unsigned long long a = 1, b = 1;

	//vector<unsigned long long> fibonacci{ };

	//for (int i = 0; i < 93; i++)
	//{
	//	fibonacci.push_back(a);
	//	unsigned long long t = a;
	//	a = b;
	//	b += t;
	//	cout << fibonacci.at(i) << endl;
	//}

	//93rd Fibonacci number is the largest one that can be stored in a 64-bit signed integer data type.
#pragma endregion

#pragma region TASK4
	//vector<string> words;
	//string s;
	//cout << "Please enter words, divided by space.\nEnter q to stop.\n";
	//while (cin >> s)
	//{
	//	if (s[0] == 'q') {
	//		break;
	//	}
	//	words.push_back(s);
	//}

	//for (auto& str : words)
	//	for (auto& c : str)
	//		c = toupper(c);

	//int t = 0;
	//for (int i = 0; i < words.size(); ++i) {
	//	cout << words.at(i) << " ";
	//	++t;
	//	if (t == 8) {
	//		cout << endl;
	//		t = 0;
	//	}
	//}
#pragma endregion

#pragma region TASK5
	//int n;
	//vector<int> v;


	//while (cin >> n)
	//{
	//	v.push_back(n);
	//}

	//for (decltype(v.size()) A = 0, B = v.size() - 1;
	//	A < B; A++, B--)
	//{
	//	cout << v[A] + v[B] << endl; // write on the new line "-" to get answer
	//}
	//return 0;
#pragma endregion

#pragma region TASK6
	//vector<int> num;
	//int n;
	//cout << "Enter the number:\n";

	//while (cin >> n)
	//{
	//	num.push_back(n);
	//	// write on the new line "-" to get answer
	//}

	//for (int v : num)
	//{
	//	cout << v << endl;
	//}

	//if (isPalindrome(num))
	//{
	//	cout << "it's a palindrome" << endl;
	//}
	//else
	//{
	//	cout << "it's not a palindrome" << endl;
	//}
#pragma endregion


}
