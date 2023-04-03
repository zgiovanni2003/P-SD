void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int contaspazi(char *line){
    int count;
    for (; *line!='\0'; line++)
        if(*line==' ') count++;

    return count+1;    
}