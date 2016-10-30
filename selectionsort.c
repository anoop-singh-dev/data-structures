#include<stdio.h>
int main(){

  int s,i,j,temp,a[20];

  printf("Enter total elements: ");
  scanf("%d",&s);

  printf("Enter %d elements: ",s);
  for(i=0;i<s;i++)
      scanf("%d",&a[i]);

  for(i=0;i<s;i++){
      for(j=i+1;j<s;j++){
           if(a[i]>a[j]){
               temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
      }
  }

  printf("After sorting is: ");
  for(i=0;i<s;i++)
      printf(" %d",a[i]);

  return 0;
}
