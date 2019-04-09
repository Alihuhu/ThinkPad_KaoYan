#include <stdio.h>
typedef long long ll;
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        ll a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        printf("Case #%d: %s\n", i , a + b > c ? "true" : "false");
    }
    return 0;
}
