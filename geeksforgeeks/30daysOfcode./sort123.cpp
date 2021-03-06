// problem statement is as following
// Given an array of size N containing 0s, 1s, and 2s; sort the array in ascending order.


// solution function implemented here:

void sort012(int a[], int n)
{
    int i =0, j = 0, k = n-1;
    while(j <= k){
        if(a[j] == 0){
            a[j] = a[i];
            a[i] = 0;
            i++;
            j++;
        }
        else if(a[j] == 2){
            a[j] = a[k];
            a[k] = 2;
            k--;
        }
        else j++;
    }
}
