#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[8], int left, int right, int x) {

while (right >= left) {

int mid = left + ((right - left) >> 1);

if (a[mid] == x)

return mid;

else if (a[mid] > x)

right = mid - 1;

else

left = mid + 1;

}

return left;

}

void binaryInsertionSort(int a[8], int n) {

for (int i = 1; i < n; ++i) {

int j = i - 1;

int temp = a[i];

int index = binarySearch(a, 0, j, temp);

cout << "index: " << index << "\n";

for (int k = 0; k < n; ++k) {

cout << a[k] << ' ';

}

cout << '\n';

while (j >= index) {

a[j+1] = a[j];

--j;

}

a[j + 1] = temp;

for (int k = 0; k < n; ++k) {

cout << a[k] << ' ';

}

cout << "\n\n\n";

}

}

int main()

{

int n = 8;

int a[] = {7, 4, 3, 8, 1, 5, 4, 2};

binaryInsertionSort(a, 8);

for (int i = 0; i < n; ++i) {

cout << a[i] << " ";

}

}