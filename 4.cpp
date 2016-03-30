#include <iostream>  
using namespace std;  
  
long long int inversions = 0;
  
void merge(int a[], const int low, const int mid, const int high)  
{  
    int * b = new int[high+1-low];  
    int h,i,j,k;  
    h=low;  
    i=0;  
    j=mid+1;  
    while((h<=mid)&&(j<=high))  
    {  
        if(a[h]<=a[j])  
        {  
            b[i]=a[h];  
            h++;  
        }  
        else  
        {  
            b[i]=a[j];  
            j++;  
            inversions += mid+1 - h;
        }  
        i++;  
    }  

    if(h>mid)  
    {  
        for(k=j;k<=high;k++)  
        {  
            b[i]=a[k];  
            i++;  
        }  
    }  
    else  
    {  
        for(k=h;k<=mid;k++)  
        {  
            b[i]=a[k];  
            i++;  
        }  
    }

    for(k=0;k<=high-low;k++)   
    {  
        a[k+low]=b[k];  
    }  
    delete[] b;  
}  
  
void merge_sort(int a[], const int low, const int high)
{  
    int mid;  
    if(low<high)  
    {  
        mid=(low+high)/2;  
        merge_sort(a, low,mid);  
        merge_sort(a, mid+1,high);  
        merge(a, low,mid,high);  
    }  
}  
  
int main()  
{  
    int N;
    int numbers[1000001];
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }
    merge_sort(numbers, 0, (N-1));

    cout << inversions;
    return 0;  
}  