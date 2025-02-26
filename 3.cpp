#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<char>s;
        for (int i = 0; i < path.length(); i++) {
            if (!s.empty() && s.top() == '/' && path[i] == '/')
                continue;
            else if (path[i] == '.' && path[i + 1] == '.') {
                s.pop();
                s.pop();
                i++;
            }
            else
                s.push(path[i]);
        }
        string st = "";
        while (!s.empty()) {
            st += s.top();
            s.pop();
        }
        return st;
    }
};

int main()
{
    Solution s1;

    string path = "home";



    string a=s1.simplifyPath(path);
    for (auto& a1 : a) {
        cout << a1;

    }

    //for (int i = 0; i < v1.length(); i++)
    //    cout << v1[i] <<"."<<endl;666699999

    return 0;
}
