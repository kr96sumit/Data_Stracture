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



//another apporoach-->


#include <vector>

#include <string>

#include <cstring>

using namespace std;

int vc[3001];

int main () {

	int n, a, b;

	while(cin >> n){

		cin >> a;

		for(int i = 1; i < n ; ++i){

			cin >> b;

			vc[abs(b-a)] = 1;

			a = b;

		} 

		bool flag = true;

		for(int i = 1; i < n ; ++i){

			if(!vc[i]){

				flag = false;

				break;

			}

		}

		if(flag) cout << "Jolly" << endl;

		else cout << "Not jolly" << endl;

		memset(vc, 0, sizeof(vc));

	}

}
