#include<iostream>

using namespace std;

int main(){
    int pattern,n;
    cout<<"Enter Number of Rows : ";
    cin>>n;

    cout<<"\nPATTERN : 1\n\n";
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
             cout<<k++<<" ";
        }
        cout<<endl;
    }

   cout<<"\nPATTERN : 2\n\n";
   int a1=0;
   int a2=1;

   for(int i=1;i<=n;i++){
      a1=0;
      a2=1;
      cout<<a2<<" ";
    for(int j=1;j<i;j++){
      int sum = a1+a2;
      cout<<sum<<" ";
      a1=a2;
      a2=sum;
    }
    cout<<endl;
   }

    cout<<"\nPATTERN : 3\n\n";

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<static_cast<char>('A'-1+i);
        }
        cout<<endl;
    }
    return 0;
}
