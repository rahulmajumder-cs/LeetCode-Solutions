/*
Language: c
Topic: Sqrt(x)
*/


int mySqrt(int x) {
    if (x < 2) {
        return x;
    }

    int left = 1;
    int right = x / 2;
    long mid;
    long square;

    while (left <= right) {
        mid = left + (right - left) / 2;
        square = mid * mid;

        if (square == x) {
            return (int)mid;
        } 
        else if (square < x) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    return right;
}
