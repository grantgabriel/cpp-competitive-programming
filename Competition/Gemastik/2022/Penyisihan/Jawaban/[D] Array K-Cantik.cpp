#include <iostream>
#include <array>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <climits>
#include <string>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <stack>
#include <vector>
#include <set>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(a) a.begin(), a.end()
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
  boost;
  
  int N; cin >> N;
  vector<int> arr(N);
  unordered_map<int, int> maps;

  for(int x : arr) {
    cin >> x;
    maps[x]++;
  }

  for(int i = 1; i <= N; i++) {
    
  }


  
  return 0;
}