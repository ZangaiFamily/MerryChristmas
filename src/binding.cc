# include <node_api.h>
# include <iostream>
using namespace std;

               /*
              ✨✨*/
            napi_value
              Init(
            napi_env env,
         napi_value exports
            ){int a;cin
              >>a;int
            w=a*2+5;for
              (int x=
            0;x<a;++x){
          for(int y=2;y>=
        0;--y){for(int z=0;
            z<a+y-x;++z
         ){cout<<"  ";}for(
      int z=0;z<x*2-y*2+5;++z
         ){cout<<"🎄";}cout
        <<endl;}}for(int x=0;
       x<w/5+1;++x){for(int z=0;
     z<w/3+1;++z){cout<<"  ";}for(
  int z=0; z<w-(w/3+1)*2;z+=1){cout
          <<"🐰";}cout
           <<endl;;;}
        return exports;}
NAPI_MODULE(NODE_GYP_MODULE_NAME, Init);
