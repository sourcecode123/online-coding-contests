#include <stdio.h>

typedef long long ll;

ll powers[] = {1LL , 4LL , 9LL , 49LL , 100LL , 144LL , 400LL , 441LL , 900LL , 1444LL , 4900LL , 9409LL , 10000LL , 10404LL , 11449LL , 14400LL , 19044LL , 40000LL , 40401LL , 44100LL , 44944LL , 90000LL , 144400LL , 419904LL , 490000LL , 491401LL , 904401LL , 940900LL , 994009LL , 1000000LL , 1004004LL , 1014049LL , 1040400LL , 1100401LL , 1144900LL , 1440000LL , 1904400LL , 1940449LL , 4000000LL , 4004001LL , 4040100LL , 4410000LL , 4494400LL , 9000000LL , 9909904LL , 9941409LL , 11909401LL , 14010049LL , 14040009LL , 14440000LL , 19909444LL , 40411449LL , 41990400LL , 49000000LL , 49014001LL , 49140100LL , 49999041LL , 90440100LL , 94090000LL , 94109401LL , 99400900LL , 99940009LL , 100000000LL , 100040004LL , 100140049LL , 100400400LL , 101404900LL , 101949409LL , 104040000LL , 104919049LL , 110040100LL , 111049444LL , 114041041LL , 114490000LL , 144000000LL , 190440000LL , 194044900LL , 400000000LL , 400040001LL , 400400100LL , 404010000LL , 404090404LL , 409941009LL , 414000409LL , 414041104LL , 441000000LL , 449440000LL , 490091044LL , 900000000LL , 990990400LL , 991494144LL , 994140900LL , 1190940100LL , 1401004900LL , 1404000900LL , 1409101444LL , 1444000000LL , 1449401041LL , 1490114404LL , 1990944400LL , 4014109449LL , 4019940409LL , 4041144900LL , 4199040000LL , 4900000000LL , 4900140001LL , 4901400100LL , 4914010000LL , 4914991449LL , 4941949401LL , 4999904100LL , 9044010000LL , 9409000000LL , 9409194001LL , 9410940100LL , 9900449001LL , 9940090000LL , 9994000900LL , 9999400009LL , 10000000000LL};

#define gx getchar//_unlocked
void scan( int *pn ) {
    int sign = 1; int n = 0;
    char c = gx();
    while( c < '0' || c > '9' ) {
        if( c == '-' ) sign = -1;
        c = gx();
    }
    while( c >= '0' && c <= '9' ) n = (n<<3) + (n<<1) + c - '0', c = gx();
    n = n * sign;
    *pn=n;
}

#define px putchar//_unlocked
void print(int n) {
    if(n<0) {
        n=-n;
        px('-');
    }
    int i=10;
    char o[10];
    do {
        o[--i] = (n%10) + '0'; n/=10;
    }while(n);
    do {
        px(o[i]);
    }while(++i<10);
}

#define ps putchar/*_unlocked*/(' ');
#define pn putchar/*_unlocked*/('\n');

int solution(ll a, ll b) {

    int i, answer = 0;
    int start, end;

    for (i = 0; i < 120; i++) {
        if (powers[i] >= a && powers[i] <= b)
            answer++;
        if (powers[i] > b)
            break;
    }

    return answer;
}

int main() {

    int i, T;
    ll a, b;

    scan(&T);
    for (i = 0; i < T; i++) {
        scanf("%lld %lld", &a, &b);
        print(solution(a, b));
        pn;
    }

    return 0;
}
