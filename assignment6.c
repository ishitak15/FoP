\\without recursion
long long factorialIterative(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}
\\with recursion
long long factorialRecursive(int n) {
    // Base case
    if (n <= 1) {
        return 1;
    }
    // Recursive call
    return n * factorialRecursive(n - 1);
}
