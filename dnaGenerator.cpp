#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

#include <iostream>

using namespace std;

// random generator function 
int randomfunc(int j)
{
	return rand() % j;
}

int main()
{
	srand(unsigned(time(0)));
	string s;
	int len;
	int A, T, C, G;


	////////////// Human#1 ///////////
	cout << "Human-1 DNA sequence: ";
	cin >> len;
	
	int rand_a = rand() % 2;
	A = len * 0.29;
	T = A + rand_a;

	rand_a = rand() % 2;
	G = len * 0.21+rand_a;
	C = len - A - T - G;

	// Create a string with Calculated number of A, C, T and G's and then shuffle that string
	for (int i = 0; i < A; i++) {
		s = s + 'A';
	}
	for (int i = 0; i < G; i++) {
		s = s + 'G';
	}
	for (int i = 0; i <T ; i++) {
		s = s + 'T';
	}
	for (int i = 0; i < C; i++) {
		s = s + 'C';
	}
	// Calculate percentage
	int perA = float(A) / len * 100;
	int perT = float(T) / len * 100;
	int perG = float(G) / len * 100;
	int perC = float(C) / len * 100;

	std::cin.get();
	// using built-in random generator 
	random_shuffle(s.begin(), s.end());
	// print out content: 
	cout << s << endl;
	cout << perA<<"% A," << perT << "% T," << perC << "% C," << perG << "% G\n" << endl;


	////////////// Human#2 ///////////
	s.clear();
	cout << "Human-2 DNA sequence: ";
	cin >> len;

	rand_a = rand() % 2;
	A = len * 0.29;
	T = A + rand_a;

	rand_a = rand() % 2;
	G = len * 0.21 + rand_a;
	C = len - A - T - G;

	// Create a string with Calculated number of A, C, T and G's and then shuffle that string
	for (int i = 0; i < A; i++) {
		s = s + 'A';
	}
	for (int i = 0; i < G; i++) {
		s = s + 'G';
	}
	for (int i = 0; i < T; i++) {
		s = s + 'T';
	}
	for (int i = 0; i < C; i++) {
		s = s + 'C';
	}
	// Calculate percentage
	perA = float(A) / len * 100;
	perT = float(T) / len * 100;
	perG = float(G) / len * 100;
	perC = float(C) / len * 100;

	cin.get();
	// using built-in random generator 
	random_shuffle(s.begin(), s.end());
	// print out content: 
	cout << s << endl;
	cout << perA << "% A," << perT << "% T," << perC << "% C," << perG << "% G\n" << endl;


	////////////// Octopus ///////////
	s.clear();
	cout << "Octopus DNA sequence: ";
	cin >> len;

	rand_a = rand() % 2;
	A = len * 0.33 + rand_a;
	T = A-rand_a;

	rand_a = rand() % 2;
	G = len * 0.17 + rand_a;
	C = len - A - T - G;

	// Create a string with Calculated number of A, C, T and G's and then shuffle that string
	for (int i = 0; i < A; i++) {
		s = s + 'A';
	}
	for (int i = 0; i < G; i++) {
		s = s + 'G';
	}
	for (int i = 0; i < T; i++) {
		s = s + 'T';
	}
	for (int i = 0; i < C; i++) {
		s = s + 'C';
	}
	// Calculate percentage
	perA = float(A) / len * 100;
	perT = float(T) / len * 100;
	perG = float(G) / len * 100;
	perC = float(C) / len * 100;

	cin.get();
	// using built-in random generator 
	random_shuffle(s.begin(), s.end());
	// print out content: 
	cout << s << endl;
	cout << perA << "% A," << perT << "% T," << perC << "% C," << perG << "% G\n" << endl;


	////////////// Wheat ///////////
	s.clear();
	cout << "Wheat DNA sequence: ";
	cin >> len;

	rand_a = rand() % 2;
	A = len * 0.27 + rand_a;
	T = A - rand_a;

	rand_a = rand() % 2;
	G = len * 0.23 - rand_a;
	C = len - A - T - G;

	// Create a string with Calculated number of A, C, T and G's and then shuffle that string
	for (int i = 0; i < A; i++) {
		s = s + 'A';
	}
	for (int i = 0; i < G; i++) {
		s = s + 'G';
	}
	for (int i = 0; i < T; i++) {
		s = s + 'T';
	}
	for (int i = 0; i < C; i++) {
		s = s + 'C';
	}
	// Calculate percentage
	perA = float(A) / len * 100;
	perT = float(T) / len * 100;
	perG = float(G) / len * 100;
	perC = float(C) / len * 100;

	cin.get();
	// using built-in random generator 
	random_shuffle(s.begin(), s.end());
	// print out content: 
	cout << s << endl;
	cout << perA << "% A," << perT << "% T," << perC << "% C," << perG << "% G\n" << endl;


	cin.get();

	return 0;
}