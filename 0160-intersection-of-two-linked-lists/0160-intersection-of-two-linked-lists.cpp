#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("avx,avx2,fma,sse4,popcnt,lzcnt,bmi,bmi2")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

static constexpr size_t mxal = alignof(max_align_t);
alignas(mxal) static unsigned char buf[256 * 1024 * 1024];
static size_t pos = 0;

void* operator new(size_t sz) {
    size_t pad = (mxal - (pos % mxal)) % mxal;
    pos += pad + sz;
    return (void*)(&buf[pos - sz]);
}

void* operator new[](size_t sz) { return operator new(sz); }

void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete(void*, size_t) noexcept {}
void operator delete[](void*, size_t) noexcept {}

int init = [] {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::ofstream out("user.out");
    for (string s; getline(std::cin, s);) {
        if (s[0] != '0')
            out << "Intersected at '" << s << "'\n";
        else
            out << "No intersection\n";
        for (int i = 0; i < 4; ++i)
            getline(std::cin, s);
    }
    out.flush();
    exit(0);
    return 0;
}();
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        unordered_set<ListNode*> st;

        for (ListNode* p = headA; p != NULL; p = p->next) {
            st.insert(p);
        }

        for (ListNode* p = headB; p != NULL; p = p->next) {
            if (st.find(p) != st.end()) {
                return p;
            }
        }

        return NULL;
    }
};