// // // // #include <iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int package;
// // // //     cout<<"Enter the required package to be given: ";
// // // //     cin>>package;

// // // //     if(package>10)
// // // //         cout<<"Accepted";
// // // //     else
// // // //         cout<<"Not Accepted";
    
// // // // }
// // // #include <iostream>
// // // using namespace std;
// // // int main(){
// // //     int num;
// // //     cout<<"Enter the value of num: ";
// // //     cin>>num;
// // //     if (num==1){
// // //         cout<<"Monday!!";
// // //     }
// // //     else if(num==2){
// // //         cout<<"Tuesday!!";
// // //     }
// // //     else if(num==3){
// // //         cout<<"Wednesday!!";
// // //     }
// // //     else if(num==4){
// // //         cout<<"Thrusday!!";
// // //     }
// // //     else if(num==5){
// // //         cout<<"Friday!!";

// // //     }
// // //     else if (num==6){
// // //         cout<<"Saturday!!";

// // //     }
// // //     else
// // //         cout<<"Sunday!!";
    
// // // }

// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the number: ";
// //     cin>>n;
// //     for(int i=2;i<=n;i=i+2){
// //         cout<<i<<endl;
// //     }
// // }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=n-(i-1);j--){
//             cout<<j<<" ";
//         }
        
//         cout<<endl;
//     }

    

    




//     }
    
    
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no: ";     
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
            cout<<"*"<<" ";
        
        for(int j=1;j<=2*n-2*i;j++)
            cout<<"  ";
        
        for(int j=1;j<=i;j++)
            cout<<"*"<<" ";
        
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"*"<<" ";
        
        for(int j=1;j<=2*n-2*i;j++)
            cout<<"  ";
        
        for(int j=1;j<=i;j++)
            cout<<"*"<<" ";
        
        cout<<endl;
    }

}
