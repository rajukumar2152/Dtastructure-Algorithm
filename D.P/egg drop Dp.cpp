#include <bits/stdc++.h>
#include <iostream>        
using namespace std ;

void  eggdroprecursive(int egg ,  int floor ){
    int result;
    int eggflormatriix[egg+1 ][floor+1];
    for(int i=1 ;i<=egg ;  i++){
        eggflormatriix[i][1]=1; // anda chahe jintamarzi utna first floorse ek trail hi hoga 
        eggflormatriix[i][0]=0 ; // agar floor zero hain top trial bhi zero hi lagega 
    }
    for(int j=1 ; j<=floor ; j++){
        eggflormatriix[1][j]=j;  // wrost case jaha anda nahi phutega 

    }
    for(int i=2; i<=egg ; i++){
        for(int j=2 ; j<=floor ; j++){
            eggflormatriix[i][j]=INT_MAX;  
            for(int x=1 ; x<=j; x++ ){
                 result = 1+max((eggflormatriix[i-1][x-1]), eggflormatriix[i][j-x]);
                                 //x floor par anda fut         //x flor par anda nahi futa hain  
                                 // gaya x se niche chek karo      // to x ke uper chek karo kyse 
                 if(result< eggflormatriix[i][j])                // nikalenge total-x ; thik hain 
                      eggflormatriix[i][j]=result;              // is se x ke uper check hoga ; 
            }
            // if(result< eggflormatriix[i][j])
            //     eggflormatriix[i][j]=result;
        }         
    }
    for (int i=1 ; i<=egg ; i++){
        for(int j=1 ; j<=floor; j++){
            cout<<eggflormatriix[i][j]<<" ";
        }
         cout<< endl ; 
    }
}
int main(){
    eggdroprecursive(2,36);
    // sahi run kar raha hain maine yaha matrix print kiya hunn 
    // to  aa raha hain  answer hain iska  8 jki aaa rahabhaiin.

    return 0 ; 
}
