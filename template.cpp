#include <bits/stdc++.h>

using namespace std;

#define il inline
#define all(v) (v).begin(), (v).end()
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define up(v, l, r) for (i32 v = (l); v <= (r); v++)
#define dn(v, l, r) for (i32 v = (r); v >= (l); v--)
#define run(v, f) for_each(all(v), f)

namespace ALLIN2624 {
	using i32 = int32_t;
	using i64 = int64_t;
	using u32 = uint32_t;
	using u64 = uint64_t;
#if defined(LOCAL) || defined(linux)
	using i128 = __int128_t;
	using u128 = __uint128_t;
#else
	using i128 = int64_t;
	using u128 = uint64_t;
#endif
	template <typename Tp> using art = vector<Tp>;
	
	struct IO_t {
		istream &inner;
		ostream &outter;
		IO_t(istream &_inner = cin, ostream &_outter = cout, i32 pos = 10): inner(_inner), outter(_outter)
			{ ios::sync_with_stdio(0); inner.tie(0), outter.tie(0), outter << setprecision(pos); }
		void sp() { outter << " "; }
		void ln() { outter << "\n"; }
		template <typename Tp> void in(Tp &x) { inner >> x; }
		template <typename Tp> void sp(Tp x) { outter << x << " "; }
		template <typename Tp> void ln(Tp x) { outter << x << "\n"; }
		template <typename Tp> void in(art<Tp> &a) { for (auto &u : a) inner >> u; }
		template <typename Tp> void sp(art<Tp> &a) { for (auto &u : a) outter << u << " "; }
		template <typename Tp> void ln(art<Tp> &a) { for (auto &u : a) outter << u << "\n"; }
		template <typename Tp, typename... Args> void in(Tp &x, Args& ...args) { in(x), in(args...); }
		template <typename Tp, typename... Args> void sp(Tp x, Args... args) { sp(x), sp(args...); }
		template <typename Tp, typename... Args> void ln(Tp x, Args... args) { ln(x), ln(args...); }
	} IO, dbg(cin, cerr);
	
	void solve() {
		
	}
}

using namespace ALLIN2624;

signed main() {
	signed T = 1;
//	cin >> T;
	while (T--) solve();
	return 0;
}
