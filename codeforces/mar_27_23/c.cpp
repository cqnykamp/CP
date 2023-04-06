
long long gcd(long long a, long long b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

long long lcm(long long  a, long long b) {
    return a*b/gcd(a,b);
}


void run() {

    int n;
    cin >> n;
    vector<long> a (n, 0);
    vector<int> b (n, 0);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    int tags = 1;
    long long g = 1LL * a[0] *  b[0];
    long long l = 1LL * b[0];

    for(int i=1; i < n; i++) {
        g = gcd(g, 1LL * a[i] * b[i]);
        l = lcm(l, 1LL * b[i]);

        if(g % l != 0) {
            tags++;
            g = 1LL * a[i] * b[i];
            l = 1LL * b[i];
        }
    }
    cout << tags << "\n";
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}