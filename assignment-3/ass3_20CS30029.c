#include<stdio.h>

#define KEYWORD 258
#define IDENTIFIER 259
#define INTEGER_CONSTANT 260
#define FLOATING_CONSTANT 261
#define ENUMERATION_CONSTANT 262
#define CHARACTER_CONSTANT 263
#define STRING_LITERAL 264
#define PUNCTUATOR 265
#define MULTI_LINE_COMMENT_START 266
#define MULTI_LINE_COMMENT_END 267
#define SINGLE_LINE_COMMENT_START 268
#define SINGLE_LINE_COMMENT_END 269

extern int yylex();
extern char* yytext;

int main(int argv, char * argc){
    FILE *fp;
    if(argv){
        char *filename = argc[0];
        fp = fopen(filename, "w");
        if(fp == NULL){
            printf("Error opening the file %s\n", filename);
            return -1;
        }
    }

    int token;
    while(token){
        switch (token)
        {
        case KEYWORD:
            printf("<KEYWORD, %s>\n", yytext);
            fprintf(fp,"<KEYWORD, %s>\n", yytext);
            break;
        
        case IDENTIFIER:
            printf("<ID, %s>\n", yytext);
            fprintf(fp, "<ID, %s>\n", yytext);
            break;
        
        case INTEGER_CONSTANT:
            printf("<INTEGER CONSTANT, %s>\n", yytext);
            fprintf(fp, "<INTEGER CONSTANT, %s>\n", yytext);
            break;
        
        case FLOATING_CONSTANT:
            printf("<FLOATING CONSTANT, %s>\n", yytext);
            fprintf(fp, "<FLOATING CONSTANT, %s>\n", yytext);
            break;
        
        case ENUMERATION_CONSTANT:
            printf("<ENUMERATION CONSTANT, %s>\n", yytext);
            fprintf(fp, "<ENUMERATION CONSTANT, %s>\n", yytext);
            break;
        
        case CHARACTER_CONSTANT:
            printf("<CHARACTER CONSTANT, %s>\n", yytext);
            fprintf(fp, "<CHARACTER CONSTANT, %s>\n", yytext);
            break;
        
        case STRING_LITERAL:
            printf("<STRING LITERAL, %s>\n", yytext);
            fprintf(fp, "<STRING LITERAL, %s>\n", yytext);
            break;
        
        case PUNCTUATOR:
            printf("<PUNCTUATION, %s>\n", yytext);
            fprintf(fp, "<PUNCTUATION, %s>\n", yytext);
            break;
        
        case MULTI_LINE_COMMENT_START:
            printf("<MULTI LINE COMMENT START, %s>\n", yytext);
            fprintf(fp, "<MULTI LINE COMMENT START, %s>\n", yytext);
            break;
        
        case MULTI_LINE_COMMENT_END:
            printf("<MULTI LINE COMMENT END, %s>\n", yytext);
            fprintf(fp, "<MULTI LINE COMMENT END, %s>\n", yytext);
            break;
        
        case SINGLE_LINE_COMMENT_START:
            printf("<SIGNLE LINE COMMENT START, %s>\n", yytext);
            fprintf(fp, "<SIGNLE LINE COMMENT START, %s>\n", yytext);
            break;
        
        case SINGLE_LINE_COMMENT_END:
            printf("<SINGLE LINE COMMENT END, %s>\n", yytext);
            fprintf(fp, "<SINGLE LINE COMMENT END, %s>\n", yytext);
            break;

        default:
            printf("<SYNTAX ERROR, %s>\n", yytext);
            fprintf(fp, "<SYNTAX ERROR, %s>\n", yytext);
        }
    }
    return 0;
}