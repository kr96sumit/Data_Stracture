  //Jolly Jumpers
  #include<bits/stdc++.h>
  using namespace std;
  bool flag=false;
  bool isjolly(int *arr,int n){
      int a[n-1];
      for(int i=0;i<n-2;i++){
          a[i]=abs(arr[i+1]-arr[i]);
          for(int j=0;j<n;j++){
              if(a[i]==arr[j]) ::flag=true;
          }
          if(::flag) {
              
          }
          else{
              return false;
          }
      }
  }
  int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      if(isjolly(arr,n)){
          cout<<"Jolly"<<endl;
      }
      else{
          cout<<"Not Jolly"<<endl;
      }
     
      return 0;
  }
