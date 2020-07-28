//BLAHHHHH

#include<stdio.h>

int main(int argc, char *argv[]){

char str[1024]="";
int l=0;
int i=0;

printf("Enumerates Youtube Playlist link:\n");
printf("Usage: youtube-url [url] [int for how many videos from playlist]\n");
if(argc>2){

strcpy(str,argv[1]);//link
l=atoi(argv[2]);
for(;i<l+1;i++){
	printf("%s%d\n",argv[1],i);
}


}

else{
	return -1;
}

return 0;

}
