#include "iostream"
using namespace std;

int main (){
    int q ;
    cout<<"Enter no. of test cases =";
    cin>> q;
    while (q--){
        int n;
        cout<<"Enter no. of creatures =";
        cin>> n;
        int heigth[n];
        int look[n];
        for (int j=0; j<n; j++) {
            cout<<"Enter heigth of creatures no." << j+1<<"=";
            cin>> heigth[j];
        }


        for (int i=0; i<n; i++){
            int count =0;

           for(int j =i+1;j<n;j++){
               if (i==n)break;
               if (heigth[i]<heigth[j]){
                   count++;
                   break;
               }
                   bool flag = true;
                   for (int k =j-1;k>i;k--){
                       if (heigth[j]<heigth[k]) flag = false;
                   }
                   if(flag){count++;}
           }

        look[i]=count;
        }

        for (int i=0; i<n; i++) {   cout << look[i]; }}

return 0;
}
