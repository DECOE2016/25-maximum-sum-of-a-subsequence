#include<iostream> 
using namespace std; 
int maxsum(int a[], int n) 
{ 
int prevmaxsum=0; 
int currmaxsum=a[0]; 
int last=0,temp=0; 
for(int i=1;i<n;i++) 
{ 
if(last!=(i-1)) 
{ 
prevmaxsum=currmaxsum; 
currmaxsum=a[i]+prevmaxsum; 
last=i; 
cout<<prevmaxsum<<"\t\t 
\t"<<currmaxsum<<"\t\t\t"<<last<<endl; 
continue; 
} 
if((a[i]+prevmaxsum)>currmaxsum) 
{ 
temp=a[i]+prevmaxsum; 
prevmaxsum=currmaxsum; 
currmaxsum=temp; 
last=i; 
cout<<prevmaxsum<<"\t\t 
\t"<<currmaxsum<<"\t\t\t"<<last<<endl; 
} 
} 
return currmaxsum; 
} 
int main() 
{ 
int arr[6]={3, 2 ,5,7 ,10}; 
int num=5; 
int sum=maxsum(arr,6); 
cout<<sum; 
getchar(); 
return 0; 
} 
