#include <iostream>

template<class T>
void selSort(T A[], int n) {
    for (int i = 0; i < n - 2; ++i) {

        int iMin = i;
        for (int j = i + 1; j < n - 1; ++j) {
            if (A[j] < A[iMin]) {
                iMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}


//class SelectionSort {
//public:
//    void selSort(int A[], int n) {
//        for (int i = 0; i < n - 2; ++i) { // Time complexity for this i loop = C1* (n-1)  then O(n-1) times
//
//            int iMin = i;
//            //----- time complexity for this block: C2*[(n-1)+(n-2)+ .....+1] = C2 * n(n-1)/2 then O(n^2) time
//            for (int j = i + 1; j < n - 1; ++j) {
//                if (A[j] < A[iMin]) {
//                    iMin = j;
//                }
//            }
//            //-------------------------------------------------------------------------------------------
//            int temp = A[i];
//            A[i] = A[iMin];
//            A[iMin] = temp;
//        }
//    }
//};

int main() {
     int A[] = {2, 7, 4, 1, 5, 3};
     int n = 5;
//    SelectionSort selectionSort;
//    selectionSort.selSort(A, 5);
    selSort(A,n);
    for (int i = 0; i < 6; ++i) {
        std::cout << A[i] << " \n";
    }

    double B[] = {2.4, 7.1, 4.3, 1.5, 5, 3};
    selSort(B, n);
    for (int i = 0; i < 6; ++i) {
        std::cout << B[i] << " \n";
    }
    return 0;
}

// Time complexity of Selection sort algorithm is BigO of n^2  = O(n^2): is not the good runtime algorithm
