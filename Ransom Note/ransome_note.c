#include <stdio.h>
#include <string.h>
int main(){
	char magazine[200],ransom[200];
	printf("Enter the text in magazine: ");
	gets(magazine);
	printf("Enter the text in ransom: ");
	gets(ransom);
	int letters[26]={0};
	int finalmagazine[26] = {0};
	int finalransom[26] = {0};

	int length1=strlen(magazine);
	for(int i=0; i<length1 ;i++){
		if(magazine[i] >= 'a' && magazine[i]<='z'){
			letters[magazine[i]-'a']++;
		}
	else if(magazine[i] >= 'A' && magazine[i]<='Z'){
			letters[magazine[i]-'A']++;
		}
	}
	
    for(int i = 0;i<26;i++){
		finalmagazine[i]=letters[i];
		letters[i]=0;
	}
	
	int length2=strlen(ransom);
	for(int i=0;i<length2;i++){
		if(ransom[i] >= 'a' && ransom[i]<='z'){
			letters[ransom[i]-'a']++;
		}
	else if(ransom[i] >= 'A' && ransom[i]<='Z'){
			letters[ransom[i]-'A']++;
		}
	}

 for(int i = 0;i<26;i++){
		finalransom[i]=letters[i];
		letters[i]=0;
	}

int found=0;
for(int i=0;i<26;i++){
	if(finalmagazine[i] < finalransom[i]){
		found = 1;
	}
}
if(found == 0){
	printf("True");
}
else{
	printf("False");
}
