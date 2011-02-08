#include <windows.h>
#include <tchar.h>     
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <list>
#include <cmath>
using namespace std;
#define _start __stdcall WinMain
#define rep(a, b, c) for ((a) = (b); (a) < (c); ++(a))
#define irep(a, b, c) for ((a) = (c) - 1; (a) >= (b); --(a))
#define repd(a, b, c, d) for ((a) = (b); (a) < (c); (a) += (d))
#define irepd(a, b, c, d) for ((a) = (c) - 1; (a) >= (b); (a) -= (d))
#define mp make_pair
#define pb push_back
#define eps 1e-9
#define inf 1e9
#define iabs(x) (((x) > 0)?(x):(-(x)))
#define imin(a, b) (((a) > (b))?(b):(a))
#define imax(a, b) (((a) > (b))?(a):(b))
#define iswap(a, b) (a)^=(b)^=(a)^=(b)
#define ishellsort(a, n, i, j, incr) 						\
	for ((incr) = (n) / 2; (incr) > 0; (incr) >>= 1)			\
		for ((i) = incr; (i) < (n); ++(i))				\
			for ((j) = (i) - (incr); (j) > -1 ; (j) -= (incr))	\
				if ((a)[(j) + (incr)] > (a)[(j)])		\
					iswap((a)[(j) + (incr)], (a)[(j)]);	\
				else (j) = -1;
#define ipar pair < int, int >
#define itriad pair < int, par >
#define iquad pair < par, par >

