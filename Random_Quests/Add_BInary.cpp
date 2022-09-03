//
// Created by karun on 3/9/22.
//Function to add 2 'n' bit binary numbers

void Add_Binary(int A[],int B[], int C[], int n) {
    int carry = 0;
    int i;
    for(i = n -1; i >= 0; i--) {
        C[i + 1] = (A[i] + B[i] + carry) % 2;
        carry = ((A[i] + B[i] + carry) > 1) ? 1 : 0;
    }
    C[0] = carry;
}
