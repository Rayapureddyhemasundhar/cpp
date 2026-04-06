#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) return findMedianSortedArrays(B, A);

    int n = A.size(), m = B.size();
    int low = 0, high = n;

    while (low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = (n + m + 1) / 2 - cut1;

        int l1 = (cut1 == 0) ? INT_MIN : A[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : B[cut2 - 1];
        int r1 = (cut1 == n) ? INT_MAX : A[cut1];
        int r2 = (cut2 == m) ? INT_MAX : B[cut2];

        if (l1 <= r2 && l2 <= r1) {
            if ((n + m) % 2 == 0)
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            else
                return max(l1, l2);
        }
        else if (l1 > r2)
            high = cut1 - 1;
        else
            low = cut1 + 1;
    }

    return 0.0;
}