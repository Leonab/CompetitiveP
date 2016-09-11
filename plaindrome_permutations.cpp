#include<iostream>
#include<string>

using namespace std;

struct Node{
    string str;
    Node *next;
}*top,*save;

void intolist(string a){
    Node *newptr= new Node;
    newptr->str=a;
    newptr->next=NULL;
    if(top==NULL)top=newptr;
    else{
        save=top;
        top=newptr;
        top->next=save;
    }
}

int strlen(string a){
int i;
for(i=0;a[i]!='\0';++i);
return i;
}

bool pallindrome(string string1){

    int length = strlen(string1);
    int i;
    bool flag=true;
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = false;
            break;
	   }
	}

    return flag;
}


int main(){
    string a;
    cin >> a;
    int i=0,length=strlen(a),j,k,l;

    while(i<(length-1)){
            k=i+1;
            while(k<length){
                char *str = new char[(k-i)+1];
                    j=i;
                    l=0;
                    while(j<=k){
                     str[l]=a[j];
                    ++l;
                    ++j;
                    }
                    str[l]='\0';
                    if(pallindrome(str)){
                        intolist(str);
                    }
                delete str;
                ++k;
            }
        ++i;
    }

    save = top;

    while(save!=NULL){

        cout << save->str << "  ";
        save=save->next;
    }
  return 0;
}
