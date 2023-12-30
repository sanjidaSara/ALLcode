#include <iostream>

using namespace std;

pair<long long, long long> find_caller_callee(long long N, long long P, long long K) {
    // Base cases
    if (N < P) {
        if (K == 1)
            return make_pair(N, -1); // Invalid
        return make_pair(-1, -1);    // Invalid
    }

    // Initialize caller and callee
    long long caller = N, callee = N - 1;

    // Initialize the current call number
    long long call_number = 1;

    while (call_number < K) {
        if (callee < P) {
            // If callee becomes less than P, this is an invalid call
            return make_pair(-1, -1); // Invalid
        }

        long long new_callee = 0;
        for (long long i = 1; i <= P; ++i) {
            new_callee += (callee - i + 1);
        }

        caller = callee;
        callee = new_callee;
        call_number++;
    }

    return make_pair(caller, callee);
}

int main() {
    int T;
    cin >> T;

    for (int case_number = 1; case_number <= T; case_number++) {
        long long N, P, K;
        cin >> N >> P >> K;

        pair<long long, long long> result = find_caller_callee(N, P, K);

        if (result.first == -1) {
            cout << "Case " << case_number << ": Invalid" << endl;
        } else {
            cout << "Case " << case_number << ": " << result.first << " " << result.second << endl;
        }
    }

    return 0;
}
