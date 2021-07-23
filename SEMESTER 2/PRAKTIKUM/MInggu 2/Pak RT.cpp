#include <iostream>
using namespace std;
float rata(float p, float q) {
   float hsl=0;
   hsl = p/q;
   return hsl;
}

int main() {
    float umur[10], N;
    float jmlh=0.0;
    
    cin>>N;
    if(N<=0){
        cout<<"Error";
        exit(0);
    }

    for(int i=0; i<N; i++) {
       cin>>umur[i];
       if (umur[i]<=0) {
          cout<<"Error";
          exit(0);
       }else {
       jmlh=jmlh+umur[i];
       }
    }
    for(int i=1;i<N; ++i) {
       if(umur[0]<umur[i]) {
        umur[0]=umur[i];
       }
    }

    cout<<umur[0] << endl;
    cout<<rata(jmlh, N);

    return 0;
}