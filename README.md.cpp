# Plus-minus-series.-2
It is the series of the plus and minus numbers. 
#include <iostream>
using namespace std;
int main() {
int n,i,sum1=0,sum2=0,sum;
cout<<"Series of how many numbers? : ";
cin>>n;

for(i=1;i<=n-1;i++){
if(i%2==0){
    cout<<i<<"+";
}
else{
    cout<<i<<"-";
}
}
for(i=1;i<=n;i++){
    if(i%2==0){
        sum1=(sum1+i);
    }
    else{
        sum2=(sum2+i);
    }
}
cout<<n<<endl;
cout<<"Sum of negative integers = "<<-sum1<<endl<<" Sum of positive integers = "<<sum2<<endl;
if(sum1>sum2){
    sum=-(sum1-sum2);
}
else{
    sum=(sum2-sum1);
}
cout<<"Total sum : "<<sum;
    return 0;
}
