#pragma comment(linker, "/STACK:216000000")
#include <iostream>
#include <cstdio>
#include <fstream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <bitset>
#include <sstream>
#include <array>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
const ll MAX = numeric_limits<ll>::max();
const ll MIN = numeric_limits<ll>::min();
const double PI = 3.14159265358979;
const ll MOD = 1000000007LL;

template<class T> 
ostream& operator<<(ostream& out, vector<T>& v) {
	for (int i = 0; i < v.size(); ++i) out << v[i] << " ";
	return out;
}

template<class T> 
istream& operator>>(istream& in, vector<T>& v) {
	for (int i = 0; i < v.size(); ++i) in >> v[i];
	return in;
}

template<class T>
T lexical_cast(string& s) {
	stringstream ss(s);
	T t;
	ss >> t;
	return t;
}

ll gcd(ll a, ll b) {
	return b ? gcd(b, a % b) : a;
}

ll cdiv(ll a, ll b) {
	return (a % b) ? (a / b + 1) : (a / b);
}

template<class Cont> void sort(Cont& c) { sort(begin(c), end(c)); }
template<class Cont> void reverse(Cont& c) { reverse(begin(c), end(c)); }

/* ------------------------------------------------
------------------------------------------------- */

int main() {
	ios_base::sync_with_stdio(false);
#ifdef DEBUG
	ifstream cin{ "input.txt" };
	ofstream cout{ "output.txt" };
#endif
	
}