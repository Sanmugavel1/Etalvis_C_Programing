#include <stdio.h>
#define MAX 50

void str_to_array(char *str, int *num, int size);
void print_number(int *num, int size);
void add(int *a, int *b, int *res);
void subtract(int *a, int *b, int *res);
void multiply(int *a, int *b, int *res, int res_size);
void divide(int *a, int *b, int *quotient, int *remainder);
int is_valid_number(char *str);
int string_length(char *str);

int main() {
    char input[120];
    while(1) {
        printf("Calc> ");
        int c=0;
        int idx=0;
        while(1) {
            c = getchar();
            if(c=='\n' || c==EOF) break;
            if(idx<119) input[idx++]=c;
        }
        input[idx]=0;
        if(input[0]=='E' && input[1]=='x' && input[2]=='i' && input[3]=='t' && input[4]==0) break;
        char num1_str[MAX+1]={0}, num2_str[MAX+1]={0};
        char op=0;
        int i=0,j=0;
        while(input[i]) {
            if(input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/') {
                op=input[i];
                i++;
                break;
            }
            if(j<MAX) num1_str[j++]=input[i];
            i++;
        }
        int k=0;
        while(input[i] && k<MAX) num2_str[k++]=input[i++];
        if(op==0 || !is_valid_number(num1_str) || !is_valid_number(num2_str)) {
            printf("Invalid input!\n");
            continue;
        }
        int num1[MAX]={0}, num2[MAX]={0};
        str_to_array(num1_str,num1,MAX);
        str_to_array(num2_str,num2,MAX);
        if(op=='+') {
            int res[MAX+1]={0};
            add(num1,num2,res);
            print_number(res,MAX+1);
        } else if(op=='-') {
            int res[MAX]={0};
            subtract(num1,num2,res);
            print_number(res,MAX);
        } else if(op=='*') {
            int res[MAX*2]={0};
            multiply(num1,num2,res,MAX*2);
            print_number(res,MAX*2);
        } else if(op=='/') {
            int quotient[MAX]={0}, remainder[MAX]={0};
            divide(num1,num2,quotient,remainder);
            printf("Quotient: ");
            print_number(quotient,MAX);
            printf("Remainder: ");
            print_number(remainder,MAX);
        } else {
            printf("Invalid input!\n");
        }
    }
    return 0;
}

int string_length(char *str) {
    int len=0;
    while(str[len]) len++;
    return len;
}

int is_valid_number(char *str) {
    int i=0;
    if(str[0]==0) return 0;
    while(str[i]) {
        if(str[i]<'0' || str[i]>'9') return 0;
        i++;
    }
    return 1;
}

void str_to_array(char *str, int *num, int size) {
    int len=string_length(str);
    int start = size - len;
    for(int i=0;i<len;i++) num[start+i]=str[i]-'0';
}

void print_number(int *num, int size) {
    int i=0;
    while(i<size && num[i]==0) i++;
    if(i==size) { printf("0\n"); return; }
    for(;i<size;i++) printf("%d",num[i]);
    printf("\n");
}

void add(int *a, int *b, int *res) {
    int carry=0;
    for(int i=MAX-1;i>=0;i--) {
        int sum = a[i]+b[i]+carry;
        res[i+1]=sum%10;
        carry=sum/10;
    }
    res[0]=carry;
}

void subtract(int *a, int *b, int *res) {
    int borrow=0;
    for(int i=MAX-1;i>=0;i--) {
        int diff=a[i]-b[i]-borrow;
        if(diff<0){ diff+=10; borrow=1; }
        else borrow=0;
        res[i]=diff;
    }
}

void multiply(int *a, int *b, int *res, int res_size) {
    for(int i=MAX-1;i>=0;i--) {
        int carry=0;
        for(int j=MAX-1;j>=0;j--) {
            int sum=res[i+j+1]+a[j]*b[i]+carry;
            res[i+j+1]=sum%10;
            carry=sum/10;
        }
        res[i]+=carry;
    }
}

void divide(int *a, int *b, int *quotient, int *remainder) {
    for(int i=0;i<MAX;i++) remainder[i]=a[i];
    int divisor[MAX]={0};
    for(int i=0;i<MAX;i++) divisor[i]=b[i];
    for(int i=0;i<MAX;i++) {
        int count=0;
        int temp[MAX];
        while(1) {
            int borrow=0;
            for(int j=MAX-1;j>=0;j--) {
                int diff=remainder[j]-divisor[j]-borrow;
                if(diff<0){ diff+=10; borrow=1; }
                else borrow=0;
                temp[j]=diff;
            }
            if(borrow) break;
            count++;
            for(int j=0;j<MAX;j++) remainder[j]=temp[j];
        }
        quotient[i]=count;
    }
}
