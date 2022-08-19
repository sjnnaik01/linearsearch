#include <iostream>
using namespace std ;
int linearsearch(int arr[],int size, int key)

{
int i =0;
int n =size-1;
for (i =0;i<n;i++)
{
    if (arr[i]==key)
    {
        return i;
    }

}
return -1;
}
int main()
{
    int arr[]={2,6,8,9,4,7};
    int index =linearsearch(arr,10,1);
    cout<<"compare ="<<index;
    return 0;



}
