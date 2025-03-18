#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float radian[n],c[n];
    for(int i=0;i<n;i++){
        radian[i]=arr[i]*(M_PI/180);
        c[i]=cos(radian[i]);
    }
    for(int i=0;i<n;i++){
        printf("Angle %.2f is %.2f\n",(float)arr[i],c[i]);
    }
    

    return 0;
}
