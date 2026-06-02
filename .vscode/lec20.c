//Finding highest frequence of a string

/*#include <stdio.h>
#include <string.h>

int main() {
    char str[]="abcabcccbbbb";
    int ln = strlen(str);
    int freq[256] = {0}; // Frequency array for all ASCII characters
    char result;
    int max_freq = 0;
    for (int i=0;i<ln;i++){
        freq[(int)str[i]]++;
    }
    for (int i=0;i<ln;i++){
        if (freq[(int)str[i]]>max_freq){
            max_freq=freq[(int)str[i]];
            result=str[i];
        }
    }

    printf("Character with highest frequency: %c\n", result);
    printf("Frequency: %d\n", max_freq);

    return 0;
}*/

//Finding if a part of a string is present in another string or not
/*#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "abcabcccbbbb";
    char str2[] = "abc";
    int ln1 = strlen(str1);
    int ln2 = strlen(str2);
    int found = 0;

    for (int i = 0; i <= ln1 - ln2; i++) {
        int j;
        for (j = 0; j < ln2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == ln2) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("'%s' is present in '%s'\n", str2, str1);
    } else {
        printf("'%s' is not present in '%s'\n", str2, str1);
    }

    return 0;
}
*/
/*#include <stdio.h>
#include <string.h>
int main(){
    char str[]="abcabcccbbbb";
    char (strstr(str,,subStr)=NULL){
        printf("true");
    
    }else{
        printf("false");
        printf("'%s' is not present in '%s'\n", subStr, str);
    }

    return 0;

}*/


//sorting an string in ascending order
/*#include <stdio.h>
#include <string.h>
int main(){
    char str[]="bdca";
    int ln=strlen(str);
    for(int i=0;i<ln-1;i++){
        for(int j=i+1;j<ln;j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
    return 0;
}*/

//
