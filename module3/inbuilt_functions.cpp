#include<iostream>
#include<cstring>

using namespace  std;

bool mystrcmp(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2)){
        return false;
    }
    
//    for(int i=0;i<strlen(str1);i++){
//        if(str1[i]!=str2[i]){
//            return false;
//        }
//    }

    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }

    return true;
}

int main(){
    // char str1[100];
    // cin>>str1;
    // int len=strlen(str1);
    // cout<< "length of string = "<<len;
    
    


//    char str1[100];
//    char str2[100];
//    cin>>str1>>str2;
    // if(strcmp(str1,str2)==0){
    //     cout<<"equal"<<endl;
    // }else{
    //     cout<<"not equal"<<endl;
    // }
    
//    if(mystrcmp(str1,str2)){
//    	cout<<"equal"<<endl;
//	}else{
//		cout<<"not equal"<<endl;
//	}


	char str1[100]="abcdcc";
	char str2[100]="defccc";
	
	cout<<"before copying"<<endl;
	cout<<"str1 "<<str1<<endl;
	cout<<"str2 "<<str2<<endl;
	
//	strcpy(str1,str2);
//	strncpy(str1,str2,3);
strcat(str1,str2);
	
	cout<<"after copying"<<endl;
	cout<<"str1 "<<str1<<endl;
	cout<<"str2 "<<str2<<endl;



    
    return 0;
}
