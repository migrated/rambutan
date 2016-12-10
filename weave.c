/*1:*/
#line 47 "weave.web"

/*4:*/
#line 15 ""

#line 10 "weave.ch"
#include<stdio.h>
#include<string.h>
#line 17 ""

/*:4*//*36:*/
#line 507 "weave.web"

#line 508 "weave.web"
#include"ctype.h"

/*:36*/
#line 48 "weave.web"

/*3:*/
#line 9 ""

typedef short boolean;
typedef char unsigned eight_bits;
extern boolean program;
extern int phase;

/*:3*//*5:*/
#line 24 ""

typedef char ASCII;
typedef char outer_char;
extern ASCII xord[];
extern outer_char xchr[];
ASCII mod_text[400+1];
ASCII *mod_text_end= mod_text+400;
ASCII *id_first;
ASCII *id_loc;

/*:5*//*6:*/
#line 37 ""

extern ASCII buffer[];
extern ASCII *buffer_end;
extern ASCII *loc;
extern ASCII *limit;

/*:6*//*7:*/
#line 55 ""

typedef struct name_info{
ASCII *byte_start;
struct name_info *link;
union{
struct name_info *Rlink;

eight_bits Ilk;

}dummy;
ASCII *equiv_or_xref;
}name_info;
typedef name_info *name_pointer;
typedef name_pointer *hash_pointer;
extern ASCII byte_mem[];
extern ASCII *byte_mem_end;
extern name_info name_dir[];
extern name_pointer name_dir_end;
extern name_pointer name_ptr;
extern ASCII *byte_ptr;
extern name_pointer hash[];
extern hash_pointer hash_end;
extern hash_pointer h;
extern name_pointer id_lookup();
extern name_pointer mod_lookup();
extern name_pointer prefix_lookup();

/*:7*//*8:*/
#line 98 ""

extern history;

/*:8*//*9:*/
#line 109 ""

extern include_depth;
extern FILE *file[];
extern FILE *change_file;
extern char C_file_name[];
extern char tex_file_name[];
extern char file_name[][60];

extern char change_file_name[];
extern line[];
extern change_line;
extern boolean input_has_ended;
extern boolean changing;

/*:9*//*10:*/
#line 124 ""

typedef unsigned short sixteen_bits;
extern sixteen_bits module_count;
extern boolean changed_module[];
extern boolean print_where;

/*:10*//*11:*/
#line 131 ""

extern int argc;
extern char * *argv;
extern no_xref;

/*:11*//*12:*/
#line 144 ""

FILE *C_file;
FILE *tex_file;
#line 94 "weave.web"

/*:12*/
#line 49 "weave.web"

/*17:*/
#line 164 "weave.web"

typedef struct xref_info{
sixteen_bits num;
struct xref_info *xlink;
}xref_info;
typedef xref_info *xref_pointer;

/*:17*//*23:*/
#line 269 "weave.web"

typedef sixteen_bits token;
typedef token *token_pointer;
typedef token_pointer *text_pointer;

/*:23*//*111:*/
#line 1431 "weave.web"

typedef struct{
eight_bits cat;
eight_bits mathness;
union{
text_pointer Trans;
 /*214:*/
#line 3038 "weave.web"

#line 3039 "weave.web"
name_pointer Head;

/*:214*/
#line 1437 "weave.web"

}trans_plus;
}scrap;
typedef scrap *scrap_pointer;

/*:111*//*165:*/
#line 2226 "weave.web"
typedef int mode;
typedef struct{
token_pointer end_field;
token_pointer tok_field;
boolean mode_field;
}output_state;
typedef output_state *stack_pointer;

/*:165*/
#line 50 "weave.web"

/*16:*/
#line 139 "weave.web"

boolean change_exists;

/*:16*//*18:*/
#line 171 "weave.web"

xref_info xmem[20000];
xref_pointer xmem_end= xmem+20000-1;
xref_pointer xref_ptr;
sixteen_bits xref_switch,mod_xref_switch;

/*:18*//*24:*/
#line 279 "weave.web"

token tok_mem[20000];
token_pointer tok_mem_end= tok_mem+20000-1;
token_pointer tok_start[2000];
token_pointer tok_ptr;
text_pointer text_ptr;
text_pointer tok_start_end= tok_start+2000-1;
#ifdef STAT
token_pointer max_tok_ptr;
text_pointer max_text_ptr;
#endif STAT

/*:24*//*30:*/
#line 389 "weave.web"

eight_bits ccode[128];

/*:30*//*35:*/
#line 503 "weave.web"

name_pointer cur_module;
int math_flag;

/*:35*//*46:*/
#line 703 "weave.web"
ASCII cur_module_char;

/*:46*//*52:*/
#line 787 "weave.web"

eight_bits next_control;

/*:52*//*58:*/
#line 900 "weave.web"

#line 901 "weave.web"
name_pointer lhs,rhs;

/*:58*//*62:*/
#line 949 "weave.web"

#line 950 "weave.web"
xref_pointer cur_xref;

/*:62*//*65:*/
#line 996 "weave.web"

#line 997 "weave.web"
ASCII out_buf[80+1];
ASCII *out_ptr;
ASCII *out_buf_end= out_buf+80;
int out_line;

/*:65*//*76:*/
#line 1188 "weave.web"
eight_bits next_control;
#line 1189 "weave.web"

/*:76*//*110:*/
#line 1229 ""
char the_at_sign= 64;

#line 1398 "weave.web"

/*:110*//*112:*/
#line 1451 "weave.web"

scrap scrap_info[1000];
scrap_pointer scrap_info_end= scrap_info+1000-1;
scrap_pointer pp;
scrap_pointer scrap_base;
scrap_pointer scrap_ptr;
scrap_pointer lo_ptr;
scrap_pointer hi_ptr;
#ifdef STAT
scrap_pointer max_scr_ptr;
#endif STAT

/*:112*//*116:*/
#line 1588 "weave.web"

int init_mathness,last_mathness;

/*:116*//*129:*/
#line 1864 "weave.web"

#ifdef DEBUG
int tracing;
#endif DEBUG

/*:129*//*159:*/
#line 499 ""
char C_file_extension[]= "java";
/*:159*//*166:*/
#line 2239 "weave.web"

output_state cur_state;
output_state stack[400
#line 1 ""
];
stack_pointer stack_ptr;
stack_pointer stack_end= stack+400
#line 1 ""
-1;
#ifdef STAT
stack_pointer max_stack_ptr;
#endif STAT

/*:166*//*170:*/
#line 2291 "weave.web"

name_pointer cur_name;

/*:170*//*185:*/
#line 2577 "weave.web"

int save_line;
ASCII *save_place;

/*:185*//*197:*/
#line 2789 "weave.web"

name_pointer this_module;

/*:197*//*202:*/
#line 2865 "weave.web"

xref_pointer next_xref,this_xref,first_xref,mid_xref;


/*:202*//*207:*/
#line 2947 "weave.web"

extern int no_xref;

/*:207*//*209:*/
#line 2978 "weave.web"

#line 2979 "weave.web"
sixteen_bits k_module;

/*:209*//*211:*/
#line 3004 "weave.web"

#line 3005 "weave.web"
name_pointer bucket[128];
name_pointer next_name;
hash_pointer h;
name_pointer blink[4000];

/*:211*//*215:*/
#line 3048 "weave.web"

eight_bits cur_depth;
ASCII *cur_byte;
sixteen_bits cur_val;
#ifdef STAT
scrap_pointer max_sort_ptr;
#endif STAT

/*:215*//*217:*/
#line 3065 "weave.web"

ASCII collate[102];

/*:217*//*227:*/
#line 3204 "weave.web"
boolean do_file;
/*:227*/
#line 51 "weave.web"


main(ac,av)
char * *av;
{
argc= ac;argv= av;
program= 1;
common_init();
/*19:*/
#line 181 "weave.web"

name_dir->equiv_or_xref= (ASCII *)xmem;
xref_ptr= xmem;
xref_switch= 0;
mod_xref_switch= 0;
xmem->num= 0;

/*:19*//*25:*/
#line 291 "weave.web"

tok_ptr= tok_mem+1;text_ptr= tok_start+1;tok_start[0]= tok_mem+1;
tok_start[1]= tok_mem+1;

#ifdef STAT
max_tok_ptr= tok_mem+1;max_text_ptr= tok_start+1;
#endif STAT

/*:25*//*31:*/
#line 392 "weave.web"

{int c;for(c= 0;c<=127;c++)ccode[c]= 0;}
ccode[' ']= ccode[011]= ccode['*']= 255;
ccode['-']= 244;
ccode['#']= 245;
ccode['=']= 2;
ccode['d']= ccode['D']= 252;
ccode['f']= ccode['F']= 251;
ccode['c']= ccode['C']= 253;
ccode['u']= ccode['U']= 253;
ccode['t']= ccode['T']= 238;
ccode['&']= 240;
ccode['<']= ccode['(']= 254;
ccode['!']= 126;ccode['^']= (200+1);
ccode['$']= 125;
ccode[':']= (200+2);
ccode['.']= (200+3);
ccode[',']= 241;
ccode['|']= 242;
ccode['/']= 243;
ccode['+']= 246;
ccode[';']= 247;
ccode['`']= 239;
ccode['\'']= 12;
ccode['"']= 13;
/*32:*/
#line 429 "weave.web"

#ifdef DEBUG
ccode['0']= ccode['1']= ccode['2']= 249;
#endif DEBUG

/*:32*/
#line 417 "weave.web"





ccode['@']= ccode[64];
ccode[64]= 64;

/*:31*//*47:*/
#line 711 "weave.web"
mod_text[0]= ' ';

/*:47*//*68:*/
#line 1055 "weave.web"

out_ptr= out_buf+1;out_line= 1;
/*158:*/
#line 497 ""

 *out_ptr= 'x';fprintf(tex_file,"\\input javaweb.te");
/*:158*/
#line 1057 "weave.web"


/*:68*//*70:*/
#line 1087 "weave.web"

out_buf[0]= '\\';

/*:70*//*113:*/
#line 1463 "weave.web"

scrap_base= scrap_info+1;
#ifdef STAT
max_scr_ptr= 
#endif STAT
scrap_ptr= scrap_info;

/*:113*//*167:*/
#line 2248 "weave.web"

#ifdef STAT
max_stack_ptr= stack;
#endif STAT

/*:167*//*216:*/
#line 3056 "weave.web"

#ifdef STAT
max_sort_ptr= scrap_info;
#endif STAT


/*:216*//*218:*/
#line 3071 "weave.web"

collate[0]= 0;strcpy(collate+1," \1\2\3\4\5\6\7\10\11\12\13\14\15\16\17\
\20\21\22\23\24\25\26\27\30\31\32\33\34\35\36\37\
!\42#$%&'()*+,-./:;<=>?@[\\]^`{|}~_\
abcdefghijklmnopqrstuvwxyz0123456789");

/*:218*/
#line 59 "weave.web"
;
#line 4 "weave.ch"

#line 61 "weave.web"
/*157:*/
#line 445 ""

id_lookup("synchronized",NULL,80);
id_lookup("volatile",NULL,84);
id_lookup("char",NULL,69);
id_lookup("instanceof",NULL,79);
id_lookup("switch",NULL,65);
id_lookup("interface",NULL,83);
id_lookup("void",NULL,69);
id_lookup("throw",NULL,74);
id_lookup("native",NULL,84);
id_lookup("new",NULL,71);
id_lookup("do",NULL,82);
id_lookup("else",NULL,72);
id_lookup("throws",NULL,75);
id_lookup("extends",NULL,75);
id_lookup("this",NULL,86);
id_lookup("catch",NULL,64);
id_lookup("abstract",NULL,84);
id_lookup("finally",NULL,85);
id_lookup("super",NULL,86);
id_lookup("continue",NULL,67);
id_lookup("class",NULL,83);
id_lookup("final",NULL,84);
id_lookup("default",NULL,76);
id_lookup("break",NULL,86);
id_lookup("package",NULL,77);
id_lookup("for",NULL,66);
id_lookup("boolean",NULL,69);
id_lookup("short",NULL,69);
id_lookup("long",NULL,69);
id_lookup("var",NULL,67);
id_lookup("import",NULL,77);
id_lookup("case",NULL,81);
id_lookup("transient",NULL,84);
id_lookup("try",NULL,85);
id_lookup("return",NULL,73);
id_lookup("null",NULL,86);
id_lookup("false",NULL,86);
id_lookup("while",NULL,68);
id_lookup("double",NULL,69);
id_lookup("int",NULL,69);
id_lookup("protected",NULL,78);
id_lookup("byte",NULL,69);
id_lookup("if",NULL,70);
id_lookup("implements",NULL,75);
id_lookup("static",NULL,84);
id_lookup("private",NULL,78);
id_lookup("public",NULL,78);
id_lookup("true",NULL,86);
id_lookup("float",NULL,69);
/*:157*/
#line 61 "weave.web"
;
phase_one();
phase_two();
phase_three();
#ifdef STAT
/*229:*/
#line 3213 "weave.web"

printf(
"\nMemory usage statistics: %d of %d names, %d of %d cross-references,\n",
name_ptr-name_dir,name_dir_end-name_dir,
xref_ptr-xmem,xmem_end-xmem);
printf("\t %d of %d bytes;",byte_ptr-byte_mem,byte_mem_end-byte_mem);
printf("\nParsing required %d of %d(%d) scraps, %d of %d(%d) texts,\n",
max_scr_ptr-scrap_info,1000,1000-50,
max_text_ptr-tok_start,2000,2000-50
);
printf("\t %d of %d(%d) tokens, %d of %d levels;\n",
max_tok_ptr-tok_mem,20000,20000-50,
max_stack_ptr-stack,stack_end-stack
);
printf("\nSorting required %d levels\n",max_sort_ptr-scrap_info);

/*:229*/
#line 66 "weave.web"
;
#endif STAT
wrap_up();
}

/*:1*//*20:*/
#line 200 "weave.web"
new_xref(p)
name_pointer p;
{
xref_pointer q;
sixteen_bits m,n;
if(no_xref)return;
if(((p->dummy.Ilk>3)||((p+1)->byte_start-(p)->byte_start)==1)&&xref_switch==0)return;
m= module_count+xref_switch;xref_switch= 0;q= (xref_pointer)p->equiv_or_xref;
if(q!=xmem){
n= q->num;
if(n==m||n==m+10240)return;
else if(m==n+10240){
q->num= m;return;
}
}
if(xref_ptr==xmem_end)stat_overflow("cross-reference");else(++xref_ptr)->num= m;;xref_ptr->xlink= q;p->equiv_or_xref= (ASCII *)xref_ptr;
}

/*:20*//*21:*/
#line 230 "weave.web"
new_mod_xref(p)
name_pointer p;
{
xref_pointer q,r;
q= (xref_pointer)p->equiv_or_xref;r= xmem;
if(q>xmem){
if(mod_xref_switch==0)while(q->num>=10240){
r= q;q= q->xlink;
}
else if(q->num>=10240){
/*22:*/
#line 251 "weave.web"

{
if((mod_xref_switch==10240&&q->num>=2 *10240)||
(mod_xref_switch==2 *10240&&q->num<2 *10240)){
#line 18 "weave.ch"
printf("! You can't use <");fflush(stdout),write(1,(p)->byte_start,(((p)+1)->byte_start-((p))->byte_start));
printf("> both as a file and as a named module\n");{if(history==0)history= 1;};
#line 257 "weave.web"


}
}


/*:22*/
#line 240 "weave.web"

r= q;q= q->xlink;
}
}
if(xref_ptr==xmem_end)stat_overflow("cross-reference");else(++xref_ptr)->num= module_count+mod_xref_switch;;
xref_ptr->xlink= q;mod_xref_switch= 0;
if(r==xmem)p->equiv_or_xref= (ASCII *)xref_ptr;
else r->xlink= xref_ptr;
}

/*:21*//*26:*/
#line 299 "weave.web"

names_match(p,first,l,t)
name_pointer p;
ASCII *first;
int l;
eight_bits t;
{
if(((p+1)->byte_start-(p)->byte_start)!=l)return 0;
if(p->dummy.Ilk!=t&&!(t==0&&(p->dummy.Ilk>3)))return 0;
return!strncmp(first,p->byte_start,l);
}

init_p(p,t)
name_pointer p;
eight_bits t;
{
p->dummy.Ilk= t;p->equiv_or_xref= (ASCII *)xmem;
}

init_node(p)
name_pointer p;
{
p->equiv_or_xref= (ASCII *)xmem;
}

/*:26*//*33:*/
#line 439 "weave.web"
skip_limbo(){
while(1){
if(loc>limit&&get_line()==0)return;
 *(limit+1)= 64;
while( *loc!=64)loc++;
if(loc++<=limit)if(ccode[ *loc++]==255)return;
}
}

/*:33*//*34:*/
#line 453 "weave.web"
unsigned skip_TeX()
{
while(1){
if(loc>limit&&get_line()==0)return(255);
 *(limit+1)= 64;
while( *loc!=64&& *loc!=124)loc++;
if( *loc++==124)return(248);
if(loc<=limit)return(ccode[ *(loc++)]);
}
}

/*:34*//*37:*/
#line 526 "weave.web"
eight_bits get_next(see_vertical)

char see_vertical;
{
eight_bits c;
while(1){
if(loc>limit){
if(get_line()==0)return(255);
else{return(10);}
}
c=  *(loc++);
/*162:*/
#line 504 ""

{int len;len= strlen("//");
if(loc+len-1<=limit&&!strncmp(loc-1,"//",len)){
loc+= len-1;
return(8);
}
}
/*:162*/
#line 537 "weave.web"

if(see_vertical&&c==124){
if( *loc==124&&loc<limit){
loc++;
}else{
return 248;
}
}
if(isdigit(c))/*40:*/
#line 567 "weave.web"
{
id_first= id_loc= mod_text+1;

if( *(loc-1)=='.'&&!isdigit( *loc))goto mistake;
 *id_loc++=  *(loc-1);
while(isdigit( *loc)) *id_loc++=  *loc++;
if( *loc=='.'){
 *id_loc++=  *loc++;
while(isdigit( *loc)) *id_loc++=  *loc++;
}
#ifdef C_FLOATING_POINT

if( *loc=='e'|| *loc=='E'){
 *id_loc++= '_';loc++;
if( *loc=='+'|| *loc=='-') *id_loc++=  *loc++;
while(isdigit( *loc)) *id_loc++=  *loc++;
}
#endif C_FLOATING_POINT
return(199);
}



/*:40*/
#line 545 "weave.web"

else if(isalpha(c)||c=='_')/*39:*/
#line 558 "weave.web"
{
id_first= --loc;
while(isalpha( *++loc)||isdigit( *loc)|| *loc=='_');
id_loc= loc;return(200);
}

/*:39*/
#line 546 "weave.web"

else if(c=='\''||c=='"')/*43:*/
#line 613 "weave.web"
{
ASCII delim= c;
id_first= mod_text+1;
id_loc= mod_text;
if(delim=='`'&& *(loc-2)==64){

 *++id_loc= 64;
 *++id_loc= 64;
}



if((delim=='\''||delim=='`')&&
(loc+1>=limit||
( *loc!='\\'&& *loc!=64&&loc[1]!='\'')||
( *loc=='\\'&&(loc+2>=limit||loc[2]!='\''))||
( *loc==64&&
(loc+2>=limit||loc[1]!=64||loc[2]!='\''))
)
)goto mistake;
 *++id_loc= delim;
if(delim=='`')delim= '\'';
while(1){
if(loc>=limit){
if( *(limit-1)!='\\'){
err_print("! String didn't end");loc= limit;break;

}
if(get_line()==0){
err_print("! Input ended in middle of string");loc= buffer;break;

}
}
if((c=  *loc++)==delim){
if(++id_loc<=mod_text_end) *id_loc= c;
break;
}
if(c=='\\')if(loc>=limit)continue;
else if(++id_loc<=mod_text_end){
 *id_loc= '\\';c=  *loc++;
}
if(++id_loc<=mod_text_end) *id_loc= c;
}
if(id_loc>=mod_text_end){
#line 28 "weave.ch"
printf("! String too long: ");

fflush(stdout),write(1,mod_text+1,25);
printf("...\n");history= 2;
#line 661 "weave.web"
}
id_loc++;
return(198);
}

/*:43*/
#line 547 "weave.web"

else if(c==64)/*44:*/
#line 669 "weave.web"
{
c=  *loc++;
switch(ccode[c]){
case 126:xref_switch= 10240;continue;
case 125:math_flag= !math_flag;continue;
#ifdef DEBUG
case 249:tracing= c-'0';continue;
#endif DEBUG
case(200+1):case(200+2):case(200+3):
case 238:
/*50:*/
#line 750 "weave.web"
{
c= ccode[ *(loc-1)];id_first= loc; *(limit+1)= 64;
while( *loc!=64)loc++;
id_loc= loc;
if(loc++>limit){
err_print("! Control text didn't end");loc= limit;return(c);

}
if( *loc++!='>')err_print("! Control codes are forbidden in control text");

return(c);
}

/*:50*/
#line 679 "weave.web"

case 254:
/*45:*/
#line 694 "weave.web"
{
ASCII *k;
cur_module_char= c;
/*48:*/
#line 713 "weave.web"

k= mod_text;
while(1){
if(loc>limit&&get_line()==0){
err_print("! Input ended in section name");

loc= buffer+1;break;
}
c=  *loc;
/*49:*/
#line 737 "weave.web"

if(c==64){
c=  *(loc+1);
if(c=='>'){
loc+= 2;break;
}
if(ccode[c]==255){
err_print("! Section name didn't end");break;

}
 *(++k)= 64;loc++;
}

/*:49*/
#line 722 "weave.web"
;
loc++;if(k<mod_text_end)k++;
if(c==' '||c==011){
c= ' ';if( *(k-1)==' ')k--;
}
 *k= c;
}
if(k>=mod_text_end){
#line 40 "weave.ch"
printf("! Section name too long: ");

fflush(stdout),write(1,mod_text+1,25);
printf("...\n");{if(history==0)history= 1;};
#line 734 "weave.web"
}
if( *k==' '&&k>mod_text)k--;

/*:48*/
#line 697 "weave.web"
;
if(k-mod_text>3&&strncmp(k-2,"...",3)==0)cur_module= prefix_lookup(mod_text+1,k-3);
else cur_module= mod_lookup(mod_text+1,k);
xref_switch= 0;return(254);
}

/*:45*/
#line 681 "weave.web"

case 2:/*51:*/
#line 768 "weave.web"
{
id_first= loc++; *(limit+1)= 64; *(limit+2)= '>';
while( *loc!=64|| *(loc+1)!='>')loc++;
if(loc>=limit)err_print("! Verbatim string didn't end");

id_loc= loc;loc+= 2;
return(2);
}

/*:51*/
#line 682 "weave.web"

case 239:
/*43:*/
#line 613 "weave.web"
{
ASCII delim= c;
id_first= mod_text+1;
id_loc= mod_text;
if(delim=='`'&& *(loc-2)==64){

 *++id_loc= 64;
 *++id_loc= 64;
}



if((delim=='\''||delim=='`')&&
(loc+1>=limit||
( *loc!='\\'&& *loc!=64&&loc[1]!='\'')||
( *loc=='\\'&&(loc+2>=limit||loc[2]!='\''))||
( *loc==64&&
(loc+2>=limit||loc[1]!=64||loc[2]!='\''))
)
)goto mistake;
 *++id_loc= delim;
if(delim=='`')delim= '\'';
while(1){
if(loc>=limit){
if( *(limit-1)!='\\'){
err_print("! String didn't end");loc= limit;break;

}
if(get_line()==0){
err_print("! Input ended in middle of string");loc= buffer;break;

}
}
if((c=  *loc++)==delim){
if(++id_loc<=mod_text_end) *id_loc= c;
break;
}
if(c=='\\')if(loc>=limit)continue;
else if(++id_loc<=mod_text_end){
 *id_loc= '\\';c=  *loc++;
}
if(++id_loc<=mod_text_end) *id_loc= c;
}
if(id_loc>=mod_text_end){
#line 28 "weave.ch"
printf("! String too long: ");

fflush(stdout),write(1,mod_text+1,25);
printf("...\n");history= 2;
#line 661 "weave.web"
}
id_loc++;
return(198);
}

/*:43*/
#line 684 "weave.web"
;
case 12:/*41:*/
#line 591 "weave.web"
{
id_first= id_loc= mod_text+1;
 *id_loc++= '~';
while('0'<= *loc&& *loc<'8') *id_loc++=  *loc++;
return(199);
}
/*:41*/
#line 685 "weave.web"
;
case 13:/*42:*/
#line 598 "weave.web"
{
id_first= id_loc= mod_text+1;
 *id_loc++= '^';
while(isxdigit( *loc)){
 *id_loc++= (islower( *loc)?toupper( *loc): *loc);
loc++;
}
return(199);
}

/*:42*/
#line 686 "weave.web"
;
default:return(ccode[c]);
}
}

/*:44*/
#line 548 "weave.web"

else if(c==' '||c==011)continue;
mistake:/*148:*/
#line 3 ""

if(loc+2<=limit){
if(strncmp("/**",loc-1,3)==0){
loc+= 2;
return 197;
}
}
if(loc+1<=limit){
if(strncmp("+=",loc-1,2)==0){
loc+= 1;
return 192;
}
else if(strncmp("||",loc-1,2)==0){
loc+= 1;
return 185;
}
else if(strncmp("-=",loc-1,2)==0){
loc+= 1;
return 191;
}
else if(strncmp("<<",loc-1,2)==0){
loc+= 1;
return 184;
}
else if(strncmp("!=",loc-1,2)==0){
loc+= 1;
return 187;
}
else if(strncmp("<=",loc-1,2)==0){
loc+= 1;
return 190;
}
else if(strncmp("==",loc-1,2)==0){
loc+= 1;
return 188;
}
else if(strncmp(">=",loc-1,2)==0){
loc+= 1;
return 189;
}
else if(strncmp("++",loc-1,2)==0){
loc+= 1;
return 194;
}
else if(strncmp("&&",loc-1,2)==0){
loc+= 1;
return 186;
}
else if(strncmp("*/",loc-1,2)==0){
loc+= 1;
return 195;
}
else if(strncmp("/*",loc-1,2)==0){
loc+= 1;
return 196;
}
else if(strncmp("--",loc-1,2)==0){
loc+= 1;
return 193;
}
}
/*:148*/
#line 550 "weave.web"

return(c);
}
}

/*:37*//*53:*/
#line 793 "weave.web"
phase_one(){
#line 794 "weave.web"
phase= 1;reset_input();module_count= 0;
skip_limbo();change_exists= 0;
while(!input_has_ended)
/*54:*/
#line 804 "weave.web"

#line 805 "weave.web"
{
if(++module_count==2000)stat_overflow("section number");
changed_module[module_count]= 0;
if( *(loc-1)=='*'){
#line 811 "weave.web"
}
/*57:*/
#line 867 "weave.web"

#line 868 "weave.web"
while(1){
switch(next_control= skip_TeX()){
case 126:xref_switch= 10240;continue;
#ifdef DEBUG
case 249:tracing= next_control-'0';continue;
#endif DEBUG
case 248:C_xref(1);break;
case(200+1):case(200+2):
case(200+3):case 254:
loc-= 2;next_control= get_next(1);
if(next_control!=254){




new_xref(id_lookup(id_first,id_loc,next_control-200));
}
break;
}
if(next_control>=251)break;
}

/*:57*/
#line 812 "weave.web"
;
/*59:*/
#line 905 "weave.web"

#line 906 "weave.web"
while(next_control<=252){
xref_switch= 10240;
if(next_control==252)next_control= get_next(1);
else/*60:*/
#line 919 "weave.web"
{
#line 920 "weave.web"
next_control= get_next(1);
if(next_control==200){
lhs= id_lookup(id_first,id_loc,0);lhs->dummy.Ilk= 0;new_xref(lhs);
next_control= get_next(1);
if(next_control==200){
rhs= id_lookup(id_first,id_loc,0);
lhs->dummy.Ilk= rhs->dummy.Ilk;rhs->dummy.Ilk= 0;new_xref(rhs);
rhs->dummy.Ilk= lhs->dummy.Ilk;next_control= get_next(1);
}
}
}

/*:60*/
#line 909 "weave.web"
;
outer_xref();
}

/*:59*/
#line 813 "weave.web"
;
/*61:*/
#line 935 "weave.web"

#line 936 "weave.web"
if(next_control<=254){
if(next_control==253)mod_xref_switch= 0;
else mod_xref_switch= (cur_module_char=='<'?10240:2 *10240);
do{
if(next_control==254&&cur_module!=NULL)new_mod_xref(cur_module);
next_control= get_next(1);outer_xref();
}while(next_control<=254);
}

/*:61*/
#line 814 "weave.web"
;
if(changed_module[module_count])change_exists= 1;
}

/*:54*/
#line 797 "weave.web"
;
#line 800 "weave.web"
phase= 2;
/*64:*/
#line 988 "weave.web"
mod_check(name_dir->dummy.Rlink)
#line 989 "weave.web"

/*:64*/
#line 801 "weave.web"
;
}

/*:53*//*55:*/
#line 830 "weave.web"
C_xref(see_v)
#line 831 "weave.web"
char see_v;
{
name_pointer p;
while(next_control<251){
if(next_control>=200&&next_control<=(200+3)){
p= id_lookup(id_first,id_loc,next_control-200);new_xref(p);
}
next_control= get_next(see_v);
if(next_control==248||next_control==8)return;
}
}

/*:55*//*56:*/
#line 847 "weave.web"
outer_xref()
#line 848 "weave.web"
{
int bal;
while(next_control<251)
if(next_control!=8)C_xref(0);
else{
bal= copy_comment(1);next_control= 248;
while(bal>0){
C_xref(1);
if(next_control==248)bal= copy_comment(bal);
else bal= 0;
}
}
}

/*:56*//*63:*/
#line 956 "weave.web"
mod_check(p)name_pointer p;
#line 957 "weave.web"
{
int level;
if(p){
mod_check(p->link);
cur_xref= (xref_pointer)p->equiv_or_xref;
level= (cur_xref->num)/10240;
if(level==0){
#line 62 "weave.ch"
printf("! Never defined: <");fflush(stdout),write(1,(p)->byte_start,(((p)+1)->byte_start-((p))->byte_start));printf(">\n");{if(history==0)history= 1;};
#line 965 "weave.web"

}
while(cur_xref->num>=10240){
if((cur_xref->num)/10240!=level){
#line 69 "weave.ch"
printf("\n! You can't use <");fflush(stdout),write(1,(p)->byte_start,(((p)+1)->byte_start-((p))->byte_start));
printf("> both as a file and as a named module");{if(history==0)history= 1;};
#line 971 "weave.web"

}
cur_xref= cur_xref->xlink;
}
if(cur_xref==xmem&&level<2){
#line 76 "weave.ch"
printf("! Never used: <");fflush(stdout),write(1,(p)->byte_start,(((p)+1)->byte_start-((p))->byte_start));printf(">\n");{if(history==0)history= 1;};
#line 977 "weave.web"

}
else if(cur_xref!=xmem&&level==2){
#line 83 "weave.ch"
printf("! You can't use file module (");fflush(stdout),write(1,(p)->byte_start,(((p)+1)->byte_start-((p))->byte_start));
printf(")\n");{if(history==0)history= 1;};
#line 982 "weave.web"

}
mod_check(p->dummy.Rlink);
}
}

/*:63*//*66:*/
#line 1017 "weave.web"
flush_buffer(b,per_cent)
ASCII *b;
boolean per_cent;
{
ASCII *j;j= b;
if(!per_cent)
while(j>out_buf&& *j==' ')j--;
fflush(tex_file),write(fileno(tex_file),out_buf+1,j-out_buf);
if(per_cent)putc(xchr['%'],tex_file);
putc('\n',tex_file);out_line++;
if(b<out_ptr)strncpy(out_buf+1,b+1,out_ptr-b);
out_ptr-= b-out_buf;
}

/*:66*//*67:*/
#line 1039 "weave.web"
finish_line()
{
ASCII *k;
if(out_ptr>out_buf)flush_buffer(out_ptr,0);
else{
for(k= buffer;k<=limit;k++)
if( *k!=' '&& *k!=011)return;
flush_buffer(out_buf,0);
}
}

/*:67*//*69:*/
#line 1071 "weave.web"
out_str_del(s,t)
ASCII *s, *t;
{
while(s<t){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)=  *s++;};
}

out_str(s)
ASCII *s;
{
while( *s){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)=  *s++;};
}

/*:69*//*71:*/
#line 1094 "weave.web"
break_out()
{
ASCII *k= out_ptr;
while(1){
if(k==out_buf)/*72:*/
#line 1113 "weave.web"

{
#line 90 "weave.ch"
printf("! Line had to be broken (output l. %d):\n",out_line);
#line 1116 "weave.web"

fflush(stdout),write(1,out_buf+1,out_ptr-out_buf-1);
putchar('\n');{if(history==0)history= 1;};
flush_buffer(out_ptr-1,1);return;
}

/*:72*/
#line 1098 "weave.web"
;
if( *k==' '){
flush_buffer(k,0);return;
}
if( *(k--)=='\\'&& *k!='\\'){
flush_buffer(k,1);return;
}
}
}

/*:71*//*73:*/
#line 1127 "weave.web"
out_mod(n)sixteen_bits n;
{
ASCII s[6];
#line 96 "weave.ch"
sprintf(s,"\\LP{%d}",n);out_str(s);
#line 1131 "weave.web"
if(changed_module[n])out_str("\\*");
}

/*:73*//*74:*/
#line 1137 "weave.web"
out_name(p)name_pointer p;{
ASCII *k, *k_end= (p+1)->byte_start;
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '{';};
for(k= p->byte_start;k<k_end;k++){
if( *k=='$'){{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 'D';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 'O';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= ' ';};}
else if( *k=='&'){{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 'a';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 'm';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 'p';};}
else{
if( *k=='_'|| *k=='%'|| *k=='#'|| *k=='^'|| *k=='{'|| *k=='}')
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';};
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)=  *k;};
}
}
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '}';};
}

/*:74*//*75:*/
#line 1162 "weave.web"
copy_limbo()
{
ASCII c;
while(1){
if(loc>limit&&(finish_line(),get_line()==0))return;
 *(limit+1)= 64;
while( *loc!=64){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)=  *(loc++);};
if(loc++<=limit){
c=  *loc++;
if(ccode[c]==255)break;
if(c!='z'&&c!='Z'){
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 64;};
if(c!=64)err_print("! Double @ required outside of sections");

}
}
}
}


/*:75*//*77:*/
#line 1190 "weave.web"
eight_bits copy_TeX()
#line 1191 "weave.web"
{
ASCII c;
while(1){
if(loc>limit&&(finish_line(),get_line()==0))return(255);
 *(limit+1)= 64;
while((c=  *(loc++))!=124&&c!=64){
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= c;};
if(out_ptr==out_buf+1&&(c==' '||c==011))out_ptr--;
}
if(c==124)return(248);
if(loc<=limit)return(ccode[ *(loc++)]);
}
}

/*:77*//*78:*/
#line 1218 "weave.web"

copy_comment(bal)
int bal;
{
ASCII c;
while(1){
if(loc>limit)
if(1){
loc++;if(bal==1){if(phase==2){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= '}';};return(0);}
else{
err_print("! Braces don't balance in comment");

/*80:*/
#line 1265 "weave.web"

{if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= ' ';};
while(bal-->0){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= '}';};

return(0);

/*:80*/
#line 1230 "weave.web"
;
}
}else{
if(get_line()==0){
err_print("! Input ended in mid-comment");

loc= buffer+1;/*80:*/
#line 1265 "weave.web"

{if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= ' ';};
while(bal-->0){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= '}';};

return(0);

/*:80*/
#line 1236 "weave.web"
;
}
}

c=  *(loc++);
if(c==124)return(bal);
/*163:*/
#line 512 ""

{int len;len= strlen("\n");
if(loc+len-1<=limit&&!strncmp(loc-1,"\n",len)){
loc++;if(bal==1){if(phase==2){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= '}';};return(0);}
else{
err_print("! Braces don't balance in comment");

/*80:*/
#line 1265 "weave.web"

{if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= ' ';};
while(bal-->0){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= '}';};

return(0);

/*:80*/
#line 519 ""
;
}
}
}
#line 2183 "weave.web"

/*:163*/
#line 1242 "weave.web"
;
if(phase==2){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= c;};
/*79:*/
#line 1250 "weave.web"

if(c==64){
if( *(loc++)!=64){
err_print("! Illegal use of @ in comment");

loc-= 2;if(phase==2)tok_ptr--;/*80:*/
#line 1265 "weave.web"

{if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= ' ';};
while(bal-->0){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= '}';};

return(0);

/*:80*/
#line 1255 "weave.web"
;
}
}
else if(c=='\\'&& *loc!=64&&phase==2){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)=  *(loc++);}
else if(c=='{')bal++;
else if(c=='}')bal--;

/*:79*/
#line 1244 "weave.web"
;
}
}



/*:78*//*85:*/
#line 69 ""

#ifdef DEBUG
#define PRINT_CAT(A,B)case A:printf(B);break
print_cat(c)
eight_bits c;
{
switch(c){
PRINT_CAT(1,"simplsquare");
PRINT_CAT(2,"star");
PRINT_CAT(3,"unorbinop");
PRINT_CAT(4,"stmt");
PRINT_CAT(5,"simplthan");
PRINT_CAT(6,"inst");
PRINT_CAT(7,"instanceof");
PRINT_CAT(8,"switch");
PRINT_CAT(9,"def");
PRINT_CAT(10,"lbrace");
PRINT_CAT(11,"gthan");
PRINT_CAT(12,"throw");
PRINT_CAT(13,"rbrace");
PRINT_CAT(14,"lsquare");
PRINT_CAT(15,"new");
PRINT_CAT(16,"do");
PRINT_CAT(17,"else");
PRINT_CAT(18,"extends");
PRINT_CAT(19,"lparen");
PRINT_CAT(20,"impsimp");
PRINT_CAT(21,"compcasec");
PRINT_CAT(22,"simplsimp");
PRINT_CAT(23,"catch");
PRINT_CAT(24,"incop");
PRINT_CAT(25,"simplparen");
PRINT_CAT(26,"class");
PRINT_CAT(27,"colon");
PRINT_CAT(28,"compstmt");
PRINT_CAT(29,"moddef");
PRINT_CAT(30,"bjc");
PRINT_CAT(31,"semi");
PRINT_CAT(32,"newline");
PRINT_CAT(33,"for");
PRINT_CAT(34,"equals");
PRINT_CAT(35,"bjd");
PRINT_CAT(36,"simp");
PRINT_CAT(37,"elsecond");
PRINT_CAT(38,"ifcond");
PRINT_CAT(39,"expr");
PRINT_CAT(40,"import");
PRINT_CAT(41,"decl");
PRINT_CAT(42,"unk");
PRINT_CAT(43,"case");
PRINT_CAT(44,"try");
PRINT_CAT(45,"return");
PRINT_CAT(46,"comma");
PRINT_CAT(47,"rparen");
PRINT_CAT(48,"lthan");
PRINT_CAT(49,"binop");
PRINT_CAT(50,"ejd");
PRINT_CAT(51,"num");
PRINT_CAT(52,"casec");
PRINT_CAT(53,"sync");
PRINT_CAT(54,"while");
PRINT_CAT(55,"int");
PRINT_CAT(56,"rsquare");
PRINT_CAT(57,"question");
PRINT_CAT(58,"ifclause");
PRINT_CAT(59,"cast");
PRINT_CAT(60,"dowhile");
PRINT_CAT(61,"ignore_scrap");
PRINT_CAT(62,"if");
PRINT_CAT(63,"static");
PRINT_CAT(64,"public");
PRINT_CAT(65,"dot");
PRINT_CAT(66,"unop");
case 0:printf("zero");break;
default:printf("UNKNOWN");break;
}
}
#endif DEBUG

/*:85*//*114:*/
#line 1493 "weave.web"

#ifdef DEBUG
print_text(p)
text_pointer p;
{
token_pointer j;
sixteen_bits r;
if(p>=text_ptr)printf("BAD");
else for(j=  *p;j< *(p+1);j++){
r=  *j%10240;
switch( *j/10240){
case 1:printf("\\{");fflush(stdout),write(1,((name_dir+r))->byte_start,((((name_dir+r))+1)->byte_start-(((name_dir+r)))->byte_start));printf("}");break;

case 2:printf("\\&{");fflush(stdout),write(1,((name_dir+r))->byte_start,((((name_dir+r))+1)->byte_start-(((name_dir+r)))->byte_start));printf("}");break;

case 3:printf("<");fflush(stdout),write(1,((name_dir+r))->byte_start,((((name_dir+r))+1)->byte_start-(((name_dir+r)))->byte_start));printf(">");break;

case 4:printf("[[%d]]",r);break;
case 5:printf("|[[%d]]|",r);break;
default:/*115:*/
#line 1518 "weave.web"

switch(r){
case 133:printf("\\mathbin{");break;
case 135:printf("\\mathop{");break;
case 134:printf("\\mathrel{");break;
case 136:printf("[ccancel]");break;
case 137:printf("[cancel]");break;
case 137+1:printf("[indent]");break;
case 137+2:printf("[outdent]");break;
case 137+4:printf("[backup]");break;
case 137+3:printf("[opt]");break;
case 137+5:printf("[break]");break;
case 137+6:printf("[force]");break;
case 137+7:printf("[fforce]");break;
case 137+7+1:printf("[quit]");break;
default:putchar(r);
}

/*:115*/
#line 1512 "weave.web"
;
}
}
}
#endif DEBUG

/*:114*//*117:*/
#line 1591 "weave.web"
app_str(s)
ASCII *s;
{
while( *s) *(tok_ptr++)=  *(s++);
}

app(a)
token a;
{
if(a==' '||a>=136&&a<=137+7){
if(last_mathness==0)init_mathness= 2;
else if(last_mathness==1) *(tok_ptr++)= '$';
last_mathness= 2;
}
else{
if(last_mathness==0)init_mathness= 1;
else if(last_mathness==2) *(tok_ptr++)= '$';
last_mathness= last_mathness= 1;
}
 *(tok_ptr++)= a;
}
app1(a)
scrap_pointer a;
{
switch(((a)->mathness%4)){
case(2):
if(last_mathness==0)init_mathness= 2;
if(last_mathness==1) *(tok_ptr++)= '$';
last_mathness= (((a)->mathness/4)%4);
break;
case(1):
if(last_mathness==0)init_mathness= 1;
else if(last_mathness==2) *(tok_ptr++)= '$';
last_mathness= (((a)->mathness/4)%4);
break;
case(0):
break;
}
 *(tok_ptr++)= 4 *10240+(a)->trans_plus.Trans-tok_start;
}

/*:117*//*119:*/
#line 1653 "weave.web"

/*120:*/
#line 1686 "weave.web"


sixteen_bits first_id(p)
text_pointer p;
{
token_pointer tp;
sixteen_bits r;
sixteen_bits the_id;

for(tp=  *p;tp< *(p+1);tp++){
r=  *tp%10240;
switch( *tp/10240){
case 1:
return *tp;
break;
case 2:
case 3:
goto next;
break;
case 4:
case 5:

if((the_id= first_id(tok_start+r))!=0)return the_id;
goto next;
break;
default:
goto next;
break;
}
next:continue;
}
return 0;
}

/*:120*/
#line 1654 "weave.web"

make_underlined(p)

scrap_pointer p;
{
sixteen_bits tok_value;




tok_value= first_id(p->trans_plus.Trans);
if(tok_value==0){
#ifdef DEBUG
if(tracing>0){
printf("\n! I couldn't find an identifier to underline.");
{if(history==0)history= 1;};
}
#endif DEBUG
return;
}
if(tok_value<10240||tok_value>=2 *10240)
{printf("");err_print("! Internal error in first_id");history= 3;wrap_up();};



if(((tok_value-10240+name_dir+1)->byte_start-(tok_value-10240+name_dir)->byte_start)>1)
underline_xref(tok_value-10240+name_dir);
}

/*:119*//*121:*/
#line 1725 "weave.web"
underline_xref(p)
name_pointer p;
{
xref_pointer q= (xref_pointer)p->equiv_or_xref;

xref_pointer r;
sixteen_bits m;
sixteen_bits n;
if(no_xref)return;
xref_switch= 10240;
m= module_count+xref_switch;
while(q!=xmem){
n= q->num;
if(n==m)return;
else if(m==n+10240){
q->num= m;return;
}
else if(n>=10240&&n<m)break;
q= q->xlink;
}
/*122:*/
#line 1755 "weave.web"

if(xref_ptr==xmem_end)stat_overflow("cross-reference");else(++xref_ptr)->num= 0;;
xref_ptr->xlink= (xref_pointer)p->equiv_or_xref;
p->equiv_or_xref= (ASCII *)xref_ptr;
r= xref_ptr;
while(r->xlink!=q){r->num= r->xlink->num;r= r->xlink;}
r->num= m;



/*:122*/
#line 1745 "weave.web"
;
}

/*:121*//*124:*/
#line 1779 "weave.web"
reduce(j,k,c,d,n)
scrap_pointer j;
eight_bits c;
short k,d,n;
{
scrap_pointer i,i1;
j->cat= c;j->trans_plus.Trans= text_ptr;
j->mathness= ((eight_bits)(init_mathness+4 *(last_mathness)));
 *(++text_ptr)= tok_ptr;
if(k>1){
for(i= j+k,i1= j+1;i<=lo_ptr;i++,i1++){
i1->cat= i->cat;i1->trans_plus.Trans= i->trans_plus.Trans;
i1->mathness= i->mathness;
}
lo_ptr= lo_ptr-k+1;
}
/*125:*/
#line 1802 "weave.web"

if(pp+d>=scrap_base)pp= pp+d;
else pp= scrap_base;

/*:125*/
#line 1795 "weave.web"
;
#ifdef DEBUG
/*130:*/
#line 1869 "weave.web"
{
scrap_pointer k;
if(tracing==2){
printf("\n%d:",n);
for(k= scrap_base;k<=lo_ptr;k++){
if(k==pp)putchar('*');else putchar(' ');
if(((k)->mathness%4)==1)putchar('+');
else if(((k)->mathness%4)==2)putchar('-');
print_cat(k->cat);
if((((k)->mathness/4)%4)==1)putchar('+');
else if((((k)->mathness/4)%4)==2)putchar('-');
}
if(hi_ptr<=scrap_ptr)printf("...");
}
}

/*:130*/
#line 1797 "weave.web"
;
#endif DEBUG
pp--;
}

/*:124*//*126:*/
#line 1809 "weave.web"
squash(j,k,c,d,n)
scrap_pointer j;
eight_bits c;
short k,d,n;
{
scrap_pointer i;
if(k==1){
j->cat= c;/*125:*/
#line 1802 "weave.web"

if(pp+d>=scrap_base)pp= pp+d;
else pp= scrap_base;

/*:125*/
#line 1816 "weave.web"
;
#ifdef DEBUG
/*130:*/
#line 1869 "weave.web"
{
scrap_pointer k;
if(tracing==2){
printf("\n%d:",n);
for(k= scrap_base;k<=lo_ptr;k++){
if(k==pp)putchar('*');else putchar(' ');
if(((k)->mathness%4)==1)putchar('+');
else if(((k)->mathness%4)==2)putchar('-');
print_cat(k->cat);
if((((k)->mathness/4)%4)==1)putchar('+');
else if((((k)->mathness/4)%4)==2)putchar('-');
}
if(hi_ptr<=scrap_ptr)printf("...");
}
}

/*:130*/
#line 1818 "weave.web"
;
#endif DEBUG
pp--;
return;
}
for(i= j;i<j+k;i++)app1(i);
reduce(j,k,c,d,n);
}

/*:126*//*131:*/
#line 1898 "weave.web"
text_pointer translate()
{
scrap_pointer i,
j;
pp= scrap_base;lo_ptr= pp-1;hi_ptr= pp;
/*134:*/
#line 1940 "weave.web"

#ifdef DEBUG
if(tracing==2){
printf("\nTracing after l. %d:\n",line[include_depth]);{if(history==0)history= 1;};
if(loc>buffer+50){
printf("...");
fflush(stdout),write(1,loc-51,51);
}
else fflush(stdout),write(1,buffer+1,loc-buffer);
}
#endif DEBUG

/*:134*/
#line 1903 "weave.web"
;
/*127:*/
#line 1831 "weave.web"

while(1){
/*128:*/
#line 1850 "weave.web"

if(lo_ptr<pp+6-1){
while(hi_ptr<=scrap_ptr&&lo_ptr!=pp+6-1){
(++lo_ptr)->cat= hi_ptr->cat;lo_ptr->mathness= (hi_ptr)->mathness;
lo_ptr->trans_plus.Trans= (hi_ptr++)->trans_plus.Trans;
}
for(i= lo_ptr+1;i<=pp+6-1;i++)i->cat= 0;
}

/*:128*/
#line 1834 "weave.web"
;
if(tok_ptr+8>tok_mem_end||text_ptr+4>tok_start_end){
#ifdef STAT
if(tok_ptr>max_tok_ptr)max_tok_ptr= tok_ptr;
if(text_ptr>max_text_ptr)max_text_ptr= text_ptr;
#endif STAT
stat_overflow("token/text");
}
if(pp>lo_ptr)break;
init_mathness= last_mathness= 0;
/*118:*/
#line 1637 "weave.web"
{

/*86:*/
#line 151 ""

if((pp+0)->cat!=0&&
(pp+1)->cat==61){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,(pp+0)->cat,-5,1);
goto end_prods;
}if((pp+0)->cat!=0&&
(pp+1)->cat==32){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,(pp+0)->cat,-5,2);
goto end_prods;
}if((pp+0)->cat==29&&
(pp+1)->cat!=0){

app1(pp+0);
app(137+6);
app1(pp+1);
reduce(pp+0,2,(pp+1)->cat,-5,3);
goto end_prods;
}if(((pp+0)->cat==55||
(pp+0)->cat==36)&&
(pp+1)->cat==36){

app1(pp+0);
app_str("\\");
app_str(" ");
app1(pp+1);
reduce(pp+0,2,41,-2,4);
goto end_prods;
}/*:86*//*87:*/
#line 184 ""

if((pp+0)->cat==55&&
(pp+1)->cat==14&&
(pp+2)->cat==56){

app1(pp+0);
app1(pp+1);
app_str("\\");
app_str(",");
app1(pp+2);
reduce(pp+0,3,55,-2,5);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==14&&
(pp+2)->cat==56){

app1(pp+0);
app1(pp+1);
app_str("\\");
app_str(",");
app1(pp+2);
reduce(pp+0,3,36,-4,6);
goto end_prods;
}if((pp+0)->cat==41&&
(pp+1)->cat==14&&
(pp+2)->cat==56){

app1(pp+0);
app1(pp+1);
app_str("\\");
app_str(",");
app1(pp+2);
reduce(pp+0,3,41,-2,7);
goto end_prods;
}if((pp+0)->cat==41&&
(pp+1)->cat==46&&
((pp+2)->cat==55||
(pp+2)->cat==36)&&
(pp+3)->cat==36){


app1(pp+0);
app1(pp+1);
app_str("\\39");
app1(pp+2);
app_str("\\");
app_str(" ");
app1(pp+3);
reduce(pp+0,4,41,-2,8);
goto end_prods;
}if((pp+0)->cat==41&&
(pp+1)->cat==46&&
(pp+2)->cat==36){

app1(pp+0);
app1(pp+1);
app_str("\\39");
app1(pp+2);
reduce(pp+0,3,41,-2,9);
goto end_prods;
}/*:87*//*88:*/
#line 244 ""

if((pp+0)->cat==36&&
(pp+1)->cat==19){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,25,0,10);
goto end_prods;
}if((pp+0)->cat==25&&
((pp+1)->cat==39||
(pp+1)->cat==28)&&
(pp+2)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,36,-4,11);
goto end_prods;
}if((pp+0)->cat==25&&
(pp+1)->cat==47){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,36,-4,12);
goto end_prods;
}if(((pp+0)->cat==36||
(pp+0)->cat==39||
(pp+0)->cat==59)&&
(pp+1)->cat==14){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,1,0,13);
goto end_prods;
}if((pp+0)->cat==1&&
(pp+1)->cat==39&&
(pp+2)->cat==56){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,36,-4,14);
goto end_prods;
}/*:88*//*89:*/
#line 287 ""

if(((pp+0)->cat==36||
(pp+0)->cat==39)&&
(pp+1)->cat==65&&
(pp+2)->cat==36){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,36,-4,15);
goto end_prods;
}if(((pp+0)->cat==66||
(pp+0)->cat==3)&&
(pp+1)->cat==39){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,39,-4,16);
goto end_prods;
}if(((pp+0)->cat==39||
(pp+0)->cat==41)&&
((pp+1)->cat==34||
(pp+1)->cat==49||
(pp+1)->cat==3)&&
(pp+2)->cat==39){


app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,39,-4,17);
goto end_prods;
}if((pp+0)->cat==39&&
(pp+1)->cat==24){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,39,-4,18);
goto end_prods;
}if((pp+0)->cat==24&&
(pp+1)->cat==36){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,39,-4,19);
goto end_prods;
}/*:89*//*90:*/
#line 333 ""

if((pp+0)->cat==39&&
(pp+1)->cat==46&&
(pp+2)->cat==39){

app1(pp+0);
app1(pp+1);
app_str("\\39");
app1(pp+2);
reduce(pp+0,3,39,-4,20);
goto end_prods;
}if((pp+0)->cat==19&&
(pp+1)->cat==39&&
(pp+2)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,39,-4,21);
goto end_prods;
}if((pp+0)->cat==19&&
(pp+1)->cat==36&&
(pp+2)->cat==47&&
(pp+3)->cat==65){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,39,-4,22);
goto end_prods;
}if((pp+0)->cat==19&&
((pp+1)->cat==55||
(pp+1)->cat==36)&&
(pp+2)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,59,-1,23);
goto end_prods;
}if((pp+0)->cat==59&&
(pp+1)->cat==39){

app1(pp+0);
app_str("\\");
app_str(" ");
app1(pp+1);
reduce(pp+0,2,39,-4,24);
goto end_prods;
}/*:90*//*91:*/
#line 382 ""

if((pp+0)->cat==2){

app1(pp+0);
reduce(pp+0,1,49,-1,25);
goto end_prods;
}if((pp+0)->cat==39&&
(pp+1)->cat==57&&
(pp+2)->cat==39&&
(pp+3)->cat==27&&
(pp+4)->cat==39){

app1(pp+0);
app1(pp+1);
app1(pp+2);
app1(pp+3);
app1(pp+4);
reduce(pp+0,5,39,-4,26);
goto end_prods;
}if((pp+0)->cat==10&&
(pp+1)->cat==39&&
(pp+2)->cat==13){

app1(pp+0);
app(137+1);
app1(pp+1);
app(137+2);
app_str("\\kern.5em");
app1(pp+2);
reduce(pp+0,3,39,-4,27);
goto end_prods;
}if((pp+0)->cat==39&&
(pp+1)->cat==65&&
(pp+2)->cat==36){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,39,-4,28);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==7&&
((pp+2)->cat==36||
(pp+2)->cat==55)){

app1(pp+0);
app_str("\\");
app_str(" ");
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,6,0,29);
goto end_prods;
}/*:91*//*92:*/
#line 434 ""

if((pp+0)->cat==6&&
(pp+1)->cat==14&&
(pp+2)->cat==56){

app1(pp+0);
app1(pp+1);
app_str("\\");
app_str(",");
app1(pp+2);
reduce(pp+0,3,6,0,30);
goto end_prods;
}if((pp+0)->cat==6){

app1(pp+0);
reduce(pp+0,1,39,-4,31);
goto end_prods;
}if((pp+0)->cat==51&&
(pp+1)->cat==36&&
(pp+2)->cat==3&&
(pp+3)->cat==51){

app1(pp+0);
app_str("{\\SC");
app1(pp+1);
app1(pp+2);
app1(pp+3);
app_str("}");
reduce(pp+0,4,51,-3,32);
goto end_prods;
}if((pp+0)->cat==51&&
(pp+1)->cat==36){

app1(pp+0);
app_str("{\\SC");
app1(pp+1);
app_str("}");
reduce(pp+0,2,51,-3,33);
goto end_prods;
}if((pp+0)->cat==51&&
(pp+1)->cat==36){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,51,-3,34);
goto end_prods;
}/*:92*//*93:*/
#line 480 ""

if((pp+0)->cat==51){

app1(pp+0);
reduce(pp+0,1,39,-4,35);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==48&&
((pp+2)->cat==55||
(pp+2)->cat==36||
(pp+2)->cat==57)&&
(pp+3)->cat==11){


app1(pp+0);
app_str("\\LT");
app1(pp+1);
app1(pp+2);
app_str("\\GT");
app1(pp+3);
reduce(pp+0,4,36,-4,36);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==48&&
(pp+2)->cat==57&&
(pp+3)->cat==18&&
(pp+4)->cat==36&&
(pp+5)->cat==11){


app1(pp+0);
app_str("\\LT");
app1(pp+1);
app1(pp+2);
app1(pp+3);
app1(pp+4);
app_str("\\GT");
app1(pp+5);
reduce(pp+0,6,36,-4,37);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==48&&
(pp+2)->cat==36&&
(pp+3)->cat==48){

app1(pp+0);
app_str("\\LT");
app1(pp+1);
reduce(pp+0,2,5,0,38);
goto end_prods;
}if((pp+0)->cat==5&&
(pp+1)->cat==36&&
(pp+2)->cat==48){

app1(pp+1);
app_str("\\LT");
app1(pp+2);
reduce(pp+1,2,5,0,39);
goto end_prods;
}/*:93*//*94:*/
#line 539 ""

if((pp+0)->cat==5&&
(pp+1)->cat==57&&
(pp+2)->cat==18&&
(pp+3)->cat==36){

app1(pp+0);
app1(pp+1);
app1(pp+2);
app1(pp+3);
reduce(pp+0,4,22,0,40);
goto end_prods;
}if((pp+0)->cat==5&&
((pp+1)->cat==55||
(pp+1)->cat==36||
(pp+1)->cat==57)){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,22,0,41);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==48&&
((pp+2)->cat==55||
(pp+2)->cat==36||
(pp+2)->cat==57)&&
(pp+3)->cat==46){


app1(pp+0);
app_str("\\LT");
app1(pp+1);
app1(pp+2);
app1(pp+3);
reduce(pp+0,4,5,0,42);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==48&&
(pp+2)->cat==57&&
(pp+3)->cat==18&&
(pp+4)->cat==36){

app1(pp+0);
app_str("\\LT");
app1(pp+1);
app1(pp+2);
app1(pp+3);
app1(pp+4);
reduce(pp+0,5,22,0,43);
goto end_prods;
}if((pp+0)->cat==36&&
(pp+1)->cat==48&&
((pp+2)->cat==55||
(pp+2)->cat==36)&&
(pp+3)->cat==14&&
(pp+4)->cat==56){


app1(pp+0);
app_str("\\LT");
app1(pp+1);
app1(pp+2);
app1(pp+3);
app1(pp+4);
reduce(pp+0,5,22,0,44);
goto end_prods;
}/*:94*//*95:*/
#line 605 ""

if((pp+0)->cat==22&&
(pp+1)->cat==46){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,5,0,45);
goto end_prods;
}if((pp+0)->cat==22&&
(pp+1)->cat==14&&
(pp+2)->cat==56){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,22,0,46);
goto end_prods;
}if((pp+0)->cat==22&&
(pp+1)->cat==11){

app1(pp+0);
app_str("\\GT");
app1(pp+1);
reduce(pp+0,2,36,-4,47);
goto end_prods;
}if((pp+0)->cat==11&&
(pp+1)->cat==11&&
(pp+2)->cat==11){

app_str("\\GGG");
app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,66,0,48);
goto end_prods;
}if((pp+0)->cat==11&&
(pp+1)->cat==11){

app_str("\\GG");
app1(pp+0);
app1(pp+1);
reduce(pp+0,2,66,0,49);
goto end_prods;
}/*:95*//*96:*/
#line 648 ""

if(((pp+0)->cat==48||
(pp+0)->cat==11)){

app1(pp+0);
reduce(pp+0,1,49,-1,50);
goto end_prods;
}if((pp+0)->cat==36){

app1(pp+0);
reduce(pp+0,1,39,-4,51);
goto end_prods;
}if(((pp+0)->cat==49||
(pp+0)->cat==3)&&
(pp+1)->cat==34){


app_str("\\buildrel");
app1(pp+0);
app_str("\\over{");
app1(pp+1);
app_str("}");
reduce(pp+0,2,34,-1,52);
goto end_prods;
}if((pp+0)->cat==45&&
(pp+1)->cat==31){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,4,-2,53);
goto end_prods;
}if(((pp+0)->cat==45||
(pp+0)->cat==12)&&
(pp+1)->cat==39){

app1(pp+0);
app_str("\\");
app_str(" ");
app1(pp+1);
reduce(pp+0,2,39,-4,54);
goto end_prods;
}/*:96*//*97:*/
#line 689 ""

if((pp+0)->cat==15&&
((pp+1)->cat==55||
(pp+1)->cat==36)){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,36,-4,55);
goto end_prods;
}if(((pp+0)->cat==39||
(pp+0)->cat==41)&&
(pp+1)->cat==31){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,4,-2,56);
goto end_prods;
}if((pp+0)->cat==31){

app1(pp+0);
reduce(pp+0,1,4,-2,57);
goto end_prods;
}if((pp+0)->cat==4&&
(pp+1)->cat==4){

app1(pp+0);
app(137+5);
app1(pp+1);
reduce(pp+0,2,4,-2,58);
goto end_prods;
}if((pp+0)->cat==10&&
(pp+1)->cat==13){

app_str("\\");
app_str(" ");
app1(pp+0);
app_str("\\");
app_str(" ");
app_str("\\");
app_str(" ");
app1(pp+1);
reduce(pp+0,2,4,-2,59);
goto end_prods;
}/*:97*//*98:*/
#line 732 ""

if((pp+0)->cat==10&&
(pp+1)->cat==4&&
(pp+2)->cat==13){


app1(pp+0);
app(137+1);
app(137);
app1(pp+1);
app(137+2);
app(137+6);
app1(pp+2);
reduce(pp+0,3,28,-1,60);
goto end_prods;
}if((pp+0)->cat==10&&
(pp+1)->cat==28&&
(pp+2)->cat==13){


app1(pp+0);
app(137+1);
app(137);
app1(pp+1);
app(137+2);
app(137+6);
app1(pp+2);
reduce(pp+0,3,28,-1,61);
goto end_prods;
}if((pp+0)->cat==28&&
(pp+1)->cat==4){

app1(pp+0);
app(137+6);
app1(pp+1);
reduce(pp+0,2,4,-2,62);
goto end_prods;
}if(((pp+0)->cat==4||
(pp+0)->cat==28)&&
(pp+1)->cat==28){

app1(pp+0);
app(137+6);
app1(pp+1);
reduce(pp+0,2,28,-1,63);
goto end_prods;
}if((pp+0)->cat==44&&
(pp+1)->cat==31){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,28,-1,64);
goto end_prods;
}/*:98*//*99:*/
#line 785 ""

if((pp+0)->cat==44&&
(pp+1)->cat==4){

app1(pp+0);
app(137+1);
app(137+5);
app1(pp+1);
app(137+2);
reduce(pp+0,2,28,-1,65);
goto end_prods;
}if((pp+0)->cat==44&&
(pp+1)->cat==28){

app1(pp+0);
app(137+1);
app(137+6);
app1(pp+1);
app(137+2);
reduce(pp+0,2,28,-1,66);
goto end_prods;
}if((pp+0)->cat==8&&
((pp+1)->cat==39||
(pp+1)->cat==59)){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,44,-1,67);
goto end_prods;
}if((pp+0)->cat==54){

app1(pp+0);
reduce(pp+0,1,8,0,68);
goto end_prods;
}if((pp+0)->cat==23&&
(pp+1)->cat==19&&
(pp+2)->cat==41&&
(pp+3)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
app1(pp+3);
reduce(pp+0,4,44,-1,69);
goto end_prods;
}/*:99*//*100:*/
#line 830 ""

if((pp+0)->cat==33&&
(pp+1)->cat==19&&
(pp+2)->cat==4&&
(pp+3)->cat==39&&
(pp+4)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
app_str("\\");
app_str(" ");
app1(pp+3);
app1(pp+4);
reduce(pp+0,5,44,-1,70);
goto end_prods;
}if((pp+0)->cat==33&&
(pp+1)->cat==19&&
(pp+2)->cat==4&&
(pp+3)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
app1(pp+3);
reduce(pp+0,4,44,-1,71);
goto end_prods;
}if((pp+0)->cat==53&&
(pp+1)->cat==19){

app1(pp+0);
reduce(pp+0,1,8,0,72);
goto end_prods;
}if((pp+0)->cat==53&&
((pp+1)->cat==36||
(pp+1)->cat==55)){

app1(pp+0);
reduce(pp+0,1,63,0,73);
goto end_prods;
}if((pp+0)->cat==16&&
(pp+1)->cat==4&&
(pp+2)->cat==54){

app1(pp+0);
app(137+1);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,60,0,74);
goto end_prods;
}/*:100*//*101:*/
#line 880 ""

if((pp+0)->cat==16&&
(pp+1)->cat==28&&
(pp+2)->cat==54){

app1(pp+0);
app(137+1);
app(137+6);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,60,0,75);
goto end_prods;
}if((pp+0)->cat==60&&
((pp+1)->cat==39||
(pp+1)->cat==59)){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,60,0,76);
goto end_prods;
}if((pp+0)->cat==60&&
(pp+1)->cat==4){

app1(pp+0);
app1(pp+1);
app(137+2);
app(137+6);
reduce(pp+0,2,28,-1,77);
goto end_prods;
}if((pp+0)->cat==62&&
((pp+1)->cat==39||
(pp+1)->cat==59)){

app1(pp+0);
app1(pp+1);
app(137+1);
reduce(pp+0,2,38,0,78);
goto end_prods;
}if((pp+0)->cat==38&&
(pp+1)->cat==4){

app1(pp+0);
app_str("\\");
app_str(" ");
app1(pp+1);
app(137+2);
app(137+6);
reduce(pp+0,2,58,0,79);
goto end_prods;
}/*:101*//*102:*/
#line 929 ""

if((pp+0)->cat==38&&
(pp+1)->cat==28){

app1(pp+0);
app(137+6);
app1(pp+1);
app(137+2);
app(137+6);
reduce(pp+0,2,58,0,80);
goto end_prods;
}if((pp+0)->cat==58&&
(pp+1)->cat==17&&
(pp+2)->cat==62){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,62,-2,81);
goto end_prods;
}if((pp+0)->cat==58&&
(pp+1)->cat==17){

app1(pp+0);
app1(pp+1);
app(137+1);
reduce(pp+0,2,37,0,82);
goto end_prods;
}if((pp+0)->cat==58){

app1(pp+0);
reduce(pp+0,1,28,-1,83);
goto end_prods;
}if((pp+0)->cat==37&&
(pp+1)->cat==4){

app1(pp+0);
app1(pp+1);
app(137+2);
app(137+6);
reduce(pp+0,2,28,-1,84);
goto end_prods;
}/*:102*//*103:*/
#line 971 ""

if((pp+0)->cat==37&&
(pp+1)->cat==28){

app1(pp+0);
app(137+6);
app1(pp+1);
app(137+2);
app(137+6);
reduce(pp+0,2,28,-1,85);
goto end_prods;
}if((pp+0)->cat==43&&
(pp+1)->cat==39&&
(pp+2)->cat==27){

app1(pp+0);
app1(pp+1);
app1(pp+2);
app(137+1);
reduce(pp+0,3,52,-1,86);
goto end_prods;
}if((pp+0)->cat==9&&
(pp+1)->cat==27){

app1(pp+0);
app1(pp+1);
app(137+1);
reduce(pp+0,2,52,-1,87);
goto end_prods;
}if((pp+0)->cat==52&&
(pp+1)->cat==4){

app1(pp+0);
app(137+5);
app1(pp+1);
reduce(pp+0,2,52,-1,88);
goto end_prods;
}if((pp+0)->cat==21&&
(pp+1)->cat==4){

app1(pp+0);
app(137+6);
app1(pp+1);
reduce(pp+0,2,52,-1,89);
goto end_prods;
}/*:103*//*104:*/
#line 1016 ""

if(((pp+0)->cat==52||
(pp+0)->cat==21)&&
(pp+1)->cat==28){

app1(pp+0);
app(137+6);
app1(pp+1);
reduce(pp+0,2,21,0,90);
goto end_prods;
}if(((pp+0)->cat==52||
(pp+0)->cat==21)&&
(pp+1)->cat==52){

app1(pp+0);
app(137+2);
app(137+6);
app1(pp+1);
reduce(pp+0,2,52,-1,91);
goto end_prods;
}if(((pp+0)->cat==52||
(pp+0)->cat==21)&&
(pp+1)->cat==13){

app1(pp+0);
app(137+2);
reduce(pp+0,1,4,-2,92);
goto end_prods;
}if(((pp+0)->cat==64||
(pp+0)->cat==63)&&
(pp+1)->cat==55){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,55,-2,93);
goto end_prods;
}if(((pp+0)->cat==64||
(pp+0)->cat==63)&&
(pp+1)->cat==36){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,36,-4,94);
goto end_prods;
}/*:104*//*105:*/
#line 1060 ""

if((pp+0)->cat==41&&
(pp+1)->cat==19&&
(pp+2)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,44,-1,95);
goto end_prods;
}if((pp+0)->cat==25&&
(pp+1)->cat==41&&
(pp+2)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,44,-1,96);
goto end_prods;
}if((pp+0)->cat==41&&
(pp+1)->cat==19&&
(pp+2)->cat==41&&
(pp+3)->cat==47){

app1(pp+0);
app1(pp+1);
app1(pp+2);
app1(pp+3);
reduce(pp+0,4,44,-1,97);
goto end_prods;
}if((pp+0)->cat==44&&
(pp+1)->cat==18&&
(pp+2)->cat==36){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,44,-1,98);
goto end_prods;
}if((pp+0)->cat==44&&
(pp+1)->cat==46&&
(pp+2)->cat==36){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,44,-1,99);
goto end_prods;
}/*:105*//*106:*/
#line 1108 ""

if((pp+0)->cat==39&&
(pp+1)->cat==19&&
(pp+2)->cat==41&&
(pp+3)->cat==47){

app1(pp+0);
reduce(pp+0,1,44,-1,100);
goto end_prods;
}if((pp+0)->cat==39&&
(pp+1)->cat==10){

app1(pp+0);
reduce(pp+0,1,44,-1,101);
goto end_prods;
}if((pp+0)->cat==63&&
(pp+1)->cat==44){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,44,-1,102);
goto end_prods;
}if((pp+0)->cat==64&&
(pp+1)->cat==44){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,44,-1,103);
goto end_prods;
}if((pp+0)->cat==63&&
(pp+1)->cat==26){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,26,-1,104);
goto end_prods;
}/*:106*//*107:*/
#line 1144 ""

if((pp+0)->cat==64&&
(pp+1)->cat==26){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,26,-1,105);
goto end_prods;
}if((pp+0)->cat==26&&
(pp+1)->cat==36){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,26,-1,106);
goto end_prods;
}if((pp+0)->cat==26&&
(pp+1)->cat==18&&
(pp+2)->cat==36){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,26,-1,107);
goto end_prods;
}if((pp+0)->cat==26&&
(pp+1)->cat==46&&
(pp+2)->cat==36){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,26,-1,108);
goto end_prods;
}if((pp+0)->cat==26&&
(pp+1)->cat==10){

app1(pp+0);
reduce(pp+0,1,44,-1,109);
goto end_prods;
}/*:107*//*108:*/
#line 1183 ""

if((pp+0)->cat==40&&
(pp+1)->cat==36){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,20,0,110);
goto end_prods;
}if((pp+0)->cat==20&&
(pp+1)->cat==65&&
((pp+2)->cat==36||
(pp+2)->cat==2)){

app1(pp+0);
app1(pp+1);
app1(pp+2);
reduce(pp+0,3,20,0,111);
goto end_prods;
}if((pp+0)->cat==20&&
(pp+1)->cat==31){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,28,-1,112);
goto end_prods;
}if((pp+0)->cat==35&&
(pp+1)->cat==50){

app1(pp+0);
app1(pp+1);
app(137+6);
reduce(pp+0,2,4,-2,113);
goto end_prods;
}if((pp+0)->cat==35&&
(pp+1)->cat!=0){

app1(pp+0);
app1(pp+1);
reduce(pp+0,2,35,0,114);
goto end_prods;
}
end_prods:
/*:108*/
#line 1639 "weave.web"

pp++;
}

/*:118*/
#line 1844 "weave.web"
;
}

/*:127*/
#line 1904 "weave.web"
;
/*132:*/
#line 1913 "weave.web"
{
/*133:*/
#line 1929 "weave.web"

#ifdef DEBUG
if(lo_ptr>scrap_base&&tracing==1){
printf("\nIrreducible scrap sequence in section %d:",module_count);
{if(history==0)history= 1;};
for(j= scrap_base;j<=lo_ptr;j++){
printf(" ");print_cat(j->cat);
}
}
#endif DEBUG

/*:133*/
#line 1914 "weave.web"
;
for(j= scrap_base;j<=lo_ptr;j++){
if(j!=scrap_base) *(tok_ptr++)= ' ';
if((((j)->mathness%4)==1)&&math_flag==0) *(tok_ptr++)= '$';
if((((j)->mathness%4)==2)&&math_flag==1){
 *(tok_ptr++)= ' '; *(tok_ptr++)= '$';}
 *(tok_ptr++)= 4 *10240+(j)->trans_plus.Trans-tok_start;
if(((((j)->mathness/4)%4)==1)&&math_flag==0) *(tok_ptr++)= '$';
if(((((j)->mathness/4)%4)==2)&&math_flag==1){ *(tok_ptr++)= '$';
 *(tok_ptr++)= ' ';}
if(tok_ptr+6>tok_mem_end)stat_overflow("token");
}
 *(++text_ptr)= tok_ptr;return(text_ptr-1);
}

/*:132*/
#line 1905 "weave.web"
;
}

/*:131*//*135:*/
#line 1996 "weave.web"
C_parse(see_v)
char see_v;
{
name_pointer p;
while(next_control<251){
/*137:*/
#line 2014 "weave.web"

/*138:*/
#line 2052 "weave.web"

if(scrap_ptr+50>scrap_info_end||tok_ptr+50>tok_mem_end||
text_ptr+50>tok_start_end){
#ifdef STAT
if(scrap_ptr>max_scr_ptr)max_scr_ptr= scrap_ptr;
if(tok_ptr>max_tok_ptr)max_tok_ptr= tok_ptr;
if(text_ptr>max_text_ptr)max_text_ptr= text_ptr;
#endif STAT
stat_overflow("scrap/token/text");
}

/*:138*/
#line 2016 "weave.web"
;
switch(next_control){
/*153:*/
#line 88 ""

#line 89 ""
case'[':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 14;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 192:
app_str("\\PE");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'(':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 19;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 185:
app_str("\\V");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case']':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 56;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case')':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 47;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 191:
app_str("\\ME");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 184:
app_str("\\LL");

(++scrap_ptr)->cat= 66;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'^':
app_str("\\^");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 187:
app_str("\\I");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'*':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 2;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 190:
app_str("\\L");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'+':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 3;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case',':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 46;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 188:
app_str("\\S");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'{':
app_str("\\LB");

(++scrap_ptr)->cat= 10;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case':':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 27;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 189:
app_str("\\G");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'-':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 3;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case';':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 31;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'.':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 65;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'|':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 3;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'!':
app_str("\\neg");

(++scrap_ptr)->cat= 66;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 197:
app_str("\\BJD");

(++scrap_ptr)->cat= 35;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'}':
app_str("\\RB");

(++scrap_ptr)->cat= 13;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'<':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 48;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 194:
app_str("\\PP");

(++scrap_ptr)->cat= 24;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'/':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'~':
app_str("\\TI");

(++scrap_ptr)->cat= 66;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'=':
app_str("\\leftarrow");

(++scrap_ptr)->cat= 34;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'>':
 *(tok_ptr++)= next_control;
(++scrap_ptr)->cat= 11;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'?':
app_str("\\?");

(++scrap_ptr)->cat= 57;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 186:
app_str("\\W");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'%':
app_str("\\%");

(++scrap_ptr)->cat= 49;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 195:
app_str("\\EJD");

(++scrap_ptr)->cat= 50;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 196:
app_str("\\BJC");

(++scrap_ptr)->cat= 30;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case'&':
app_str("\\amp");

(++scrap_ptr)->cat= 3;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 193:
app_str("\\MM");

(++scrap_ptr)->cat= 24;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
/*:153*/
#line 2018 "weave.web"

case 198:case 199:case 2:/*140:*/
#line 2075 "weave.web"

if(next_control==199)app_str("\\O{");

else if(next_control==198)app_str("\\.{");

else app_str("\\={");

while(id_first<id_loc){
if( *id_first==64){
if( *(id_first+1)==64)id_first++;
else err_print("! Double at_sign should be used in strings");
}

/*141:*/
#line 2094 "weave.web"

switch( *id_first){
case' ':case'\\':
case'%':case'$':case'^':case'`':
case'#':
case'{':case'}':case'~':case'&':case'_':
 *(tok_ptr++)= '\\';break;

}

/*:141*/
#line 2088 "weave.web"

{if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)=  *id_first++;};
}
 *(tok_ptr++)= '}';
/*150:*/
#line 79 ""

#line 80 ""
(++scrap_ptr)->cat= 51;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
/*:150*/
#line 2092 "weave.web"


/*:140*/
#line 2019 "weave.web"
;
break;
case 10:/*151:*/
#line 81 ""

#line 82 ""

(++scrap_ptr)->cat= 32;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(0+4 *(0))); *(++text_ptr)= tok_ptr;;
/*:151*/
#line 2021 "weave.web"
;break;
case 200:/*149:*/
#line 64 ""

#line 65 ""
p= id_lookup(id_first,id_loc,0);
if(p->dummy.Ilk==0){
 *(tok_ptr++)= 10240+p-name_dir;
(++scrap_ptr)->cat= 36;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
}
else if(p->dummy.Ilk>3){
/*156:*/
#line 309 ""

switch(p->dummy.Ilk){
case 64:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 23;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 65:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 8;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 66:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 33;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 67:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 42;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 68:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 54;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 69:
 *(tok_ptr++)= 2 *10240+p-name_dir;
(++scrap_ptr)->cat= 55;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 70:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 62;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 71:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 15;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 72:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 17;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 73:
 *(tok_ptr++)= 2 *10240+p-name_dir;
(++scrap_ptr)->cat= 45;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 74:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 12;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 75:
app_str("\\");
app_str(" ");
app_str("\\30");
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 18;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 76:
 *(tok_ptr++)= 2 *10240+p-name_dir;
(++scrap_ptr)->cat= 9;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 77:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 40;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 78:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 64;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 79:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 7;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 80:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 53;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 81:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 43;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 82:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 16;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 83:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 26;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 84:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 63;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 85:
 *(tok_ptr++)= 2 *10240+p-name_dir;app_str("\\");
app_str(" ");

(++scrap_ptr)->cat= 44;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
case 86:
 *(tok_ptr++)= 2 *10240+p-name_dir;
(++scrap_ptr)->cat= 36;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
break;
}
/*:156*/
#line 71 ""
;
}
else{
err_print("! Identifier with unmentioned ilk");

}
/*:149*/
#line 2022 "weave.web"
;break;
case 238:/*142:*/
#line 2104 "weave.web"

app_str("\\hbox{");while(id_first<id_loc){if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)=  *id_first++;};
 *(tok_ptr++)= '}';
/*150:*/
#line 79 ""

#line 80 ""
(++scrap_ptr)->cat= 51;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;
/*:150*/
#line 2107 "weave.web"



/*:142*/
#line 2023 "weave.web"
;break;
case 0:case 248:
break;
case(200+1):case(200+2):case(200+3):
break;
case 241:app_str("\\,");(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;break;
case 242:
 *(tok_ptr++)= 137+3;app_str("0");(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;break;
case 244:
app_str("\\0");(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(1+4 *(1))); *(++text_ptr)= tok_ptr;;break;
case 243:
 *(tok_ptr++)= 137+6;(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;break;
case 245:
 *(tok_ptr++)= 137+7;(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;break;
case 246:
 *(tok_ptr++)= 136; *(tok_ptr++)= ' '; *(tok_ptr++)= 136;
(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;break;
case 247:
/*152:*/
#line 84 ""

#line 85 ""
app_str("\\relax");

(++scrap_ptr)->cat= 31;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(0+4 *(0))); *(++text_ptr)= tok_ptr;;
/*:152*/
#line 2041 "weave.web"

break;
#line 102 "weave.ch"
case 240:app_str("\\J");(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(0+4 *(0))); *(++text_ptr)= tok_ptr;;break;
#line 2044 "weave.web"
default: *(tok_ptr++)= next_control;(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;break;
}

/*:137*/
#line 2001 "weave.web"
;
next_control= get_next(see_v);
if(next_control==248||next_control==8)return;
}
}

/*:135*//*143:*/
#line 2115 "weave.web"
text_pointer C_translate()
{
text_pointer p;
scrap_pointer save_base;
save_base= scrap_base;scrap_base= scrap_ptr+1;
C_parse(1);
#line 108 "weave.ch"
if(next_control!=248)err_print("! Missing vertical_bar after program text");
#line 2122 "weave.web"

{if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= 137;};(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;

p= translate();
#ifdef STAT
if(scrap_ptr>max_scr_ptr)max_scr_ptr= scrap_ptr;
#endif STAT
scrap_ptr= scrap_base-1;scrap_base= save_base;
return(p);
}

/*:143*//*144:*/
#line 2139 "weave.web"
outer_parse()
{
int bal;
text_pointer p,q;
while(next_control<251){
if(next_control==8){
/*146:*/
#line 2171 "weave.web"

if(tok_ptr+50>tok_mem_end||text_ptr+50>tok_start_end
||scrap_ptr+50>scrap_info_end){
#ifdef STAT
if(scrap_ptr>max_scr_ptr)max_scr_ptr= scrap_ptr;
if(tok_ptr>max_tok_ptr)max_tok_ptr= tok_ptr;
if(text_ptr>max_text_ptr)max_text_ptr= text_ptr;
#endif STAT
stat_overflow("token/text/scrap");
}

#line 1 ""
/*:146*/
#line 2146 "weave.web"
;
/*145:*/
#line 2155 "weave.web"

 *(tok_ptr++)= 137+5;app_str("\\C{");

bal= copy_comment(1);next_control= 248;
while(bal>0){
p= text_ptr; *(++text_ptr)= tok_ptr;q= C_translate();

 *(tok_ptr++)= 4 *10240+p-tok_start; *(tok_ptr++)= 5 *10240+q-tok_start;
if(next_control==248)bal= copy_comment(bal);
else bal= 0;
}
 *(tok_ptr++)= 137+6;
(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;



/*:145*/
#line 2147 "weave.web"
;
}
else{
C_parse(0);
}
}
}

/*:144*//*168:*/
#line 2257 "weave.web"
push_level(p)
text_pointer p;
{
if(stack_ptr==stack_end)stat_overflow("stack");
if(stack_ptr>stack){
stack_ptr->end_field= cur_state.end_field;
stack_ptr->tok_field= cur_state.tok_field;
stack_ptr->mode_field= cur_state.mode_field;
}
stack_ptr++;
#ifdef STAT
if(stack_ptr>max_stack_ptr)max_stack_ptr= stack_ptr;
#endif STAT
cur_state.tok_field=  *p;cur_state.end_field=  *(p+1);
}

/*:168*//*169:*/
#line 2277 "weave.web"
pop_level()
{
cur_state.end_field= (--stack_ptr)->end_field;
cur_state.tok_field= stack_ptr->tok_field;cur_state.mode_field= stack_ptr->mode_field;
}

/*:169*//*171:*/
#line 2297 "weave.web"
eight_bits get_output()
{
sixteen_bits a;
restart:while(cur_state.tok_field==cur_state.end_field)pop_level();
a=  *(cur_state.tok_field++);
if(a>=0400){
cur_name= a%10240+name_dir;
switch(a/10240){
case 2:return(0201);
case 3:return(0200);
case 4:push_level(a%10240+tok_start);goto restart;

case 5:push_level(a%10240+tok_start);cur_state.mode_field= 0;goto restart;

default:return(200);
}
}
return(a);
}

/*:171*//*172:*/
#line 2332 "weave.web"

output_C()
{
token_pointer save_tok_ptr;
text_pointer save_text_ptr;
sixteen_bits save_next_control;
text_pointer p;
save_tok_ptr= tok_ptr;save_text_ptr= text_ptr;
save_next_control= next_control;next_control= 248;p= C_translate();
 *(tok_ptr++)= p-tok_start+5 *10240;
make_output();
#ifdef STAT
if(text_ptr>max_text_ptr)max_text_ptr= text_ptr;
if(tok_ptr>max_tok_ptr)max_tok_ptr= tok_ptr;
#endif STAT
text_ptr= save_text_ptr;tok_ptr= save_tok_ptr;
next_control= save_next_control;
}

/*:172*//*173:*/
#line 2353 "weave.web"
make_output()
{
eight_bits a,
b;
int c;
ASCII *k, *k_limit;
ASCII *j;
ASCII delim;
ASCII *save_loc, *save_limit;
name_pointer cur_mod_name;
boolean save_mode;
 *(tok_ptr++)= 137+7+1;
 *(++text_ptr)= tok_ptr;push_level(text_ptr-1);
while(1){
a= get_output();
reswitch:switch(a){
case 137+7+1:return;
case 200:case 0201:/*174:*/
#line 2400 "weave.web"

{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';};
if(a==200)
if(((cur_name+1)->byte_start-(cur_name)->byte_start)==1){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '|';}

else{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';}

else{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '&';}

out_name(cur_name);

/*:174*/
#line 2370 "weave.web"
;break;
case 0200:/*179:*/
#line 2471 "weave.web"
{
boolean is_file;
cur_xref= (xref_pointer)cur_name->equiv_or_xref;
is_file= cur_xref->num>=2 *10240;

out_str((is_file?"\\XF":"\\X"));

if(cur_xref->num>=10240){
out_mod(cur_xref->num-(is_file?2 *10240:10240));
if(phase==3){
cur_xref= cur_xref->xlink;
while(cur_xref->num>=10240){
out_str(", ");
out_mod(cur_xref->num-(is_file?2 *10240:10240));
cur_xref= cur_xref->xlink;
}
}
}
else{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '0';};
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= ':';};/*180:*/
#line 2494 "weave.web"

k= cur_name->byte_start;k_limit= (cur_name+1)->byte_start;
cur_mod_name= cur_name;
while(k<k_limit){
b=  *(k++);
if(b==64)/*181:*/
#line 2509 "weave.web"

if( *k++!=64){
#line 116 "weave.ch"
printf("! Illegal control code in section name: <");

fflush(stdout),write(1,(cur_mod_name)->byte_start,(((cur_mod_name)+1)->byte_start-((cur_mod_name))->byte_start));printf(">\n");history= 2;
#line 2514 "weave.web"
}

/*:181*/
#line 2499 "weave.web"

if(b!=124){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= b;}
else{
/*182:*/
#line 2522 "weave.web"

j= limit+1; *j= 124;delim= 0;
while(1){
if(k>=k_limit){
#line 125 "weave.ch"
printf("! Program Text in section name didn't end: <");

#line 2528 "weave.web"
fflush(stdout),write(1,(cur_mod_name)->byte_start,(((cur_mod_name)+1)->byte_start-((cur_mod_name))->byte_start));printf("> ");history= 2;break;
}
b=  *(k++);
if(b==64)/*183:*/
#line 2544 "weave.web"
{
if(j>buffer+500-4)stat_overflow("buffer");
 *(++j)= 64; *(++j)=  *(k++);
}

/*:183*/
#line 2531 "weave.web"

else{
if(b=='\''||b=='"')
if(delim==0)delim= b;
else if(delim==b)delim= 0;
if(b!=124||delim!=0){
if(j>buffer+500-3)stat_overflow("buffer");
 *(++j)= b;
}
else break;
}
}

/*:182*/
#line 2502 "weave.web"

save_loc= loc;save_limit= limit;loc= limit+2;limit= j+1;
 *limit= 124;output_C();
loc= save_loc;limit= save_limit;
}
}

/*:180*/
#line 2490 "weave.web"
;
out_str((is_file?"\\XF":"\\X"));
}

/*:179*/
#line 2371 "weave.web"
;break;
case 133:case 134:case 135:
/*175:*/
#line 2411 "weave.web"

if(a==133)out_str("\\mathbin{");
else if(a==134)out_str("\\mathrel{");
else out_str("\\mathop{");

/*:175*/
#line 2373 "weave.web"
;break;
case 137:c= 0;while((a= get_output())>=137+1&&a<=137+7){
if(a==137+1)c++;if(a==137+2)c--;
}
/*178:*/
#line 2460 "weave.web"

for(;c>0;c--)out_str("\\1");
for(;c<0;c++)out_str("\\2");

/*:178*/
#line 2377 "weave.web"
;
goto reswitch;
case 136:c= 0;
while(((a= get_output())>=137+1||a==' ')&&a<=137+7){
if(a==137+1)c++;if(a==137+2)c--;
}
/*178:*/
#line 2460 "weave.web"

for(;c>0;c--)out_str("\\1");
for(;c<0;c++)out_str("\\2");

/*:178*/
#line 2383 "weave.web"
;
goto reswitch;
case 137+1:case 137+2:case 137+3:case 137+4:case 137+5:
case 137+6:case 137+7:/*176:*/
#line 2419 "weave.web"

if(a<137+5){
if(cur_state.mode_field==1){
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= a-137+'0';};
if(a==137+3){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= get_output();};
}
else if(a==137+3)b= get_output();
}
else/*177:*/
#line 2435 "weave.web"
{
b= a;save_mode= cur_state.mode_field;c= 0;
while(1){
a= get_output();
if(a==137||a==136){
/*178:*/
#line 2460 "weave.web"

for(;c>0;c--)out_str("\\1");
for(;c<0;c++)out_str("\\2");

/*:178*/
#line 2440 "weave.web"
;
goto reswitch;
}
if((a!=' '&&a<137+1)||a==137+4||a>137+7){
if(save_mode==1){
if(out_ptr>out_buf+3&&strncmp(out_ptr-3,"\\Y\\P",4)==0)
goto reswitch;
/*178:*/
#line 2460 "weave.web"

for(;c>0;c--)out_str("\\1");
for(;c<0;c++)out_str("\\2");

/*:178*/
#line 2447 "weave.web"
;
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';};{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= b-137+'0';};
if(a!=137+7+1)finish_line();
}
else if(a!=137+7+1&&cur_state.mode_field==0){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= ' ';};
goto reswitch;
}
if(a==137+1)c++;
else if(a==137+2)c--;
else if(a>b)b= a;
}
}

/*:177*/
#line 2427 "weave.web"


/*:176*/
#line 2387 "weave.web"
;break;
default:{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= a;};
}
}
}

/*:173*//*184:*/
#line 2556 "weave.web"
phase_two(){
#line 132 "weave.ch"
reset_input();
#line 2558 "weave.web"
module_count= 0;copy_limbo();
math_flag= 0;
finish_line();flush_buffer(out_buf,0);
while(!input_has_ended)/*186:*/
#line 2581 "weave.web"
{
module_count++;
/*187:*/
#line 2597 "weave.web"

if( *(loc-1)!='*')out_str("\\M");

else{
out_str("\\N");

#line 2604 "weave.web"
}
out_mod(module_count);out_str(". ");

/*:187*/
#line 2583 "weave.web"
;
save_line= out_line;save_place= out_ptr;
/*188:*/
#line 2610 "weave.web"
do{
next_control= copy_TeX();
switch(next_control){
case 248:
out_str("\\CD{}");
stack_ptr= stack;cur_state.mode_field= 1;output_C();
out_str("\\DC{}");
break;
case 64:{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 64;};break;
case 12:/*189:*/
#line 2633 "weave.web"
{
out_str("\\O{\\~");
while('0'<= *loc&& *loc<'8'){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)=  *loc++;};
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '}';};
}

/*:189*/
#line 2619 "weave.web"
;break;
case 13:/*190:*/
#line 2639 "weave.web"
{
out_str("\\O{\\^");
while(isxdigit( *loc)){
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= islower( *loc)?toupper( *loc): *loc;};
loc++;
}
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '}';};
}



/*:190*/
#line 2620 "weave.web"
;break;
case 238:case(200+1):case(200+2):case(200+3):
case 254:loc-= 2;next_control= get_next(1);
if(next_control==238)
#line 143 "weave.ch"
err_print("! TeX string should be in program text only");break;
#line 2625 "weave.web"

case 241:case 242:
case 244:case 245:case 246:case 240:
case 247:err_print("! You can't do that in TeX text");break;

}
}while(next_control<251);

/*:188*/
#line 2585 "weave.web"
;
/*191:*/
#line 2653 "weave.web"

if(next_control<=252){
if(save_line!=out_line||save_place!=out_ptr)out_str("\\Y");;save_line= out_line;save_place= out_ptr;
}
while(next_control<=252){
stack_ptr= stack;cur_state.mode_field= 1;
if(next_control==252)/*193:*/
#line 2699 "weave.web"
{
 *(tok_ptr++)= 137+4;app_str("\\D");

/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2702 "weave.web"

if(next_control!=200)
err_print("! Improper macro definition");

else{
 *(tok_ptr++)= '$';
 *(tok_ptr++)= 10240+id_lookup(id_first,id_loc,0)-name_dir;
/*195:*/
#line 2730 "weave.web"

/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2731 "weave.web"

if(next_control==40){
 *(tok_ptr++)= 40;
do{
/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2735 "weave.web"

if(next_control==200){
 *(tok_ptr++)= 10240+id_lookup(id_first,id_loc,0)-name_dir;
/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2738 "weave.web"

}else{
err_print("! Improper macro definition");
/*194:*/
#line 2726 "weave.web"
goto punt_the_definition;

/*:194*/
#line 2741 "weave.web"
;
}
if(next_control==44||next_control==41)
 *(tok_ptr++)= next_control;
}while(next_control==44);
if(next_control!=41){
err_print("! Macro parameter list must end with )");
/*194:*/
#line 2726 "weave.web"
goto punt_the_definition;

/*:194*/
#line 2748 "weave.web"
;
}
/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2750 "weave.web"


}




/*:195*/
#line 2711 "weave.web"
;
if(next_control==61){
 *(tok_ptr++)= '\\'; *(tok_ptr++)= 'S';
/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2714 "weave.web"

}else{
err_print("! Equals sign required in macro definition");

}
punt_the_definition:
 *(tok_ptr++)= '$'; *(tok_ptr++)= 137+5;
(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;

}
}

/*:193*/
#line 2659 "weave.web"

else/*196:*/
#line 2757 "weave.web"
{
app_str("\\F");(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;


/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2761 "weave.web"


if(scrap_ptr!=scrap_info+1){
err_print("! This can't happen -- bad scrap_ptr in format definition");
printf("\n\tscrap_ptr-scrap_info==%d\n",scrap_ptr-scrap_info);
}
if(next_control==200){
 *(tok_ptr++)= 10240+id_lookup(id_first,id_loc,0)-name_dir;
app_str(" ");
(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;

/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2772 "weave.web"

if(next_control==200){
 *(tok_ptr++)= 10240+id_lookup(id_first,id_loc,0)-name_dir;
 *(tok_ptr++)= 10;
(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;
/*38:*/
#line 555 "weave.web"

while((next_control= get_next(0))==10);

/*:38*/
#line 2777 "weave.web"

}
}

if(scrap_ptr!=scrap_info+3)err_print("! Improper format definition");

}

/*:196*/
#line 2660 "weave.web"
;
outer_parse();finish_C();
}

/*:191*/
#line 2586 "weave.web"
;
/*198:*/
#line 2792 "weave.web"

this_module= name_dir;
if(next_control<=254){
if(save_line!=out_line||save_place!=out_ptr)out_str("\\Y");;stack_ptr= stack;cur_state.mode_field= 1;
if(next_control==253)next_control= get_next(0);
else{
this_module= cur_module;
/*199:*/
#line 2809 "weave.web"

do next_control= get_next(0);
while(next_control=='+');
if(next_control!='=')
err_print("! You need an = sign after the section name");

else next_control= get_next(0);
if(out_ptr>out_buf+1&& *out_ptr=='Y'&& *(out_ptr-1)=='\\') *(tok_ptr++)= 137+4;


 *(tok_ptr++)= 3 *10240+this_module-name_dir;
cur_xref= (xref_pointer)this_module->equiv_or_xref;
app_str("${}");
if(cur_xref->num%10240!=module_count){
app_str("+");
this_module= name_dir;
}
app_str("\\S");

app_str("{}$");
 *(tok_ptr++)= 137+6;
/*160:*/
#line 500 ""

(++scrap_ptr)->cat= 29;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;
/*:160*/
#line 2830 "weave.web"



/*:199*/
#line 2800 "weave.web"
;
}
while(next_control<=254){
outer_parse();
/*200:*/
#line 2833 "weave.web"

if(next_control<254){
#line 149 "weave.ch"
err_print("! You can't do that in program text");
#line 2836 "weave.web"

next_control= get_next(1);
}
else if(next_control==254){
if(cur_module_char!='<'){
err_print("! You can't use a file like a module");

next_control= get_next(1);
}else{
 *(tok_ptr++)= 3 *10240+cur_module-name_dir;
/*161:*/
#line 502 ""

(++scrap_ptr)->cat= 28;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(0+4 *(0))); *(++text_ptr)= tok_ptr;;
/*:161*/
#line 2846 "weave.web"

next_control= get_next(1);
}
}

/*:200*/
#line 2804 "weave.web"
;
}
finish_C();
}

/*:198*/
#line 2587 "weave.web"
;
/*201:*/
#line 2853 "weave.web"

if(this_module>name_dir){
/*203:*/
#line 2874 "weave.web"

first_xref= (xref_pointer)this_module->equiv_or_xref;
this_xref= first_xref->xlink;
if(this_xref->num>10240){
mid_xref= this_xref;cur_xref= 0;
do{
next_xref= this_xref->xlink;this_xref->xlink= cur_xref;
cur_xref= this_xref;this_xref= next_xref;
}while(this_xref->num>10240);
first_xref->xlink= cur_xref;
}
else mid_xref= xmem;
cur_xref= xmem;
while(this_xref!=xmem){
next_xref= this_xref->xlink;this_xref->xlink= cur_xref;
cur_xref= this_xref;this_xref= next_xref;
}
if(mid_xref>xmem)mid_xref->xlink= cur_xref;
else first_xref->xlink= cur_xref;
cur_xref= first_xref->xlink;

/*:203*/
#line 2855 "weave.web"
;
footnote(((((xref_pointer)this_module->equiv_or_xref)->num>=2 *10240)
?2 *10240:10240));
footnote(0);
}

/*:201*/
#line 2588 "weave.web"
;
/*206:*/
#line 2934 "weave.web"

out_str("\\fi");finish_line();

flush_buffer(out_buf,0);

/*:206*/
#line 2589 "weave.web"
;
}

/*:186*/
#line 2561 "weave.web"
;
}

/*:184*//*192:*/
#line 2674 "weave.web"
finish_C()
{
text_pointer p;
out_str("\\P");{if(tok_ptr+2>tok_mem_end)stat_overflow("token"); *(tok_ptr++)= 137+6;};(++scrap_ptr)->cat= 61;scrap_ptr->trans_plus.Trans= text_ptr;scrap_ptr->mathness= ((eight_bits)(2+4 *(2))); *(++text_ptr)= tok_ptr;;
p= translate();

 *(tok_ptr++)= p-tok_start+4 *10240;make_output();
if(out_ptr>out_buf+1)
if( *(out_ptr-1)=='\\')



if( *out_ptr=='6')out_ptr-= 2;
else if( *out_ptr=='7') *out_ptr= 'Y';
out_str("\\par");finish_line();
#ifdef STAT
if(text_ptr>max_text_ptr)max_text_ptr= text_ptr;
if(tok_ptr>max_tok_ptr)max_tok_ptr= tok_ptr;
if(scrap_ptr>max_scr_ptr)max_scr_ptr= scrap_ptr;
#endif STAT
tok_ptr= tok_mem+1;text_ptr= tok_start+1;scrap_ptr= scrap_info;

}

/*:192*//*204:*/
#line 2903 "weave.web"
footnote(flag)
sixteen_bits flag;
{
xref_pointer q;
if(cur_xref->num<=flag)return;
finish_line();{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '\\';};


if(flag==0){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 'U';}else{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 'A';};
out_str(" section");
/*205:*/
#line 2921 "weave.web"

#line 155 "weave.ch"
q= cur_xref;
while(q->num>flag)
{if(q->xlink->num>flag&&q->num==q->xlink->num)
{q->xlink= q->xlink->xlink;
}
else q= q->xlink;
}
q= cur_xref;
if(q->xlink->num>flag){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= 's';};
#line 2923 "weave.web"
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '~';};
while(1){
out_mod(cur_xref->num-flag);
cur_xref= cur_xref->xlink;
if(cur_xref->num<=flag)break;
if(cur_xref->xlink->num>flag||cur_xref!=q->xlink){if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= ',';};

{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= ' ';};
if(cur_xref->xlink->num<=flag)out_str("and~");
}

/*:205*/
#line 2913 "weave.web"
;
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '.';};
}

/*:204*//*208:*/
#line 2950 "weave.web"
phase_three(){
#line 2951 "weave.web"
if(no_xref){
finish_line();
out_str("\\vfill\\end");
finish_line();
}
else{
#line 169 "weave.ch"
phase= 3;
#line 2958 "weave.web"
if(change_exists){
finish_line();/*210:*/
#line 2981 "weave.web"
{
#line 197 "weave.ch"
out_str("\\ch ");
k_module= 0;
while(!changed_module[++k_module]);
out_mod(k_module);
while(k_module<module_count)
if(changed_module[++k_module]){
out_str(", ");out_mod(k_module);
}
#line 2992 "weave.web"
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '.';};
}

/*:210*/
#line 2959 "weave.web"
;
}
finish_line();out_str("\\inx");finish_line();

/*212:*/
#line 3013 "weave.web"
{
#line 3014 "weave.web"
int c;
for(c= 0;c<=127;c++)bucket[c]= NULL;
for(h= hash;h<=hash_end;h++){
next_name=  *h;
while(next_name){
cur_name= next_name;next_name= cur_name->link;
if(((xref_pointer)cur_name->equiv_or_xref)!=xmem){
c= (cur_name->byte_start)[0];
if(c<='Z'&&c>='A')c= c+040;
blink[cur_name-name_dir]= bucket[c];bucket[c]= cur_name;
}
}
}
}

/*:212*/
#line 2963 "weave.web"
;
/*220:*/
#line 3101 "weave.web"

scrap_ptr= scrap_info;unbucket(1);
while(scrap_ptr>scrap_info){
cur_depth= scrap_ptr->cat;
if(blink[scrap_ptr->trans_plus.Head-name_dir]==0||cur_depth==255)
/*222:*/
#line 3126 "weave.web"
{
cur_name= scrap_ptr->trans_plus.Head;
do{
out_str("\\:");

/*223:*/
#line 3138 "weave.web"

switch(cur_name->dummy.Ilk){
case 0:if(((cur_name+1)->byte_start-(cur_name)->byte_start)==1)out_str("\\|");
else out_str("\\\\");break;


case 1:break;
case 2:out_str("\\9");break;

case 3:out_str("\\.");break;

default:out_str("\\&");

}
out_name(cur_name);

/*:223*/
#line 3131 "weave.web"
;
/*224:*/
#line 3157 "weave.web"

/*225:*/
#line 3172 "weave.web"

this_xref= (xref_pointer)cur_name->equiv_or_xref;cur_xref= xmem;
do{
next_xref= this_xref->xlink;this_xref->xlink= cur_xref;
cur_xref= this_xref;this_xref= next_xref;
}while(this_xref!=xmem);

/*:225*/
#line 3158 "weave.web"
;
do{
out_str(", ");cur_val= cur_xref->num;
if(cur_val<10240)out_mod(cur_val);
else{out_str("\\[");out_mod(cur_val%10240);{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= ']';};}

cur_xref= cur_xref->xlink;
}while(cur_xref!=xmem);
{if(out_ptr>=out_buf_end)break_out(); *(++out_ptr)= '.';};finish_line();

/*:224*/
#line 3132 "weave.web"
;
cur_name= blink[cur_name-name_dir];
}while(cur_name);
--scrap_ptr;
}

/*:222*/
#line 3106 "weave.web"

else/*221:*/
#line 3110 "weave.web"
{
ASCII c;
next_name= scrap_ptr->trans_plus.Head;
do{
cur_name= next_name;next_name= blink[cur_name-name_dir];
cur_byte= cur_name->byte_start+cur_depth;
if(cur_byte==(cur_name+1)->byte_start)c= 0;
else{
c=  *cur_byte;
if(c<='Z'&&c>='A')c= c+040;
}
blink[cur_name-name_dir]= bucket[c];bucket[c]= cur_name;
}while(next_name);
--scrap_ptr;unbucket(cur_depth+1);
}

/*:221*/
#line 3107 "weave.web"
;
}

/*:220*/
#line 2964 "weave.web"
;
out_str("\\fin");finish_line();

/*228:*/
#line 3205 "weave.web"

do_file= (1==1);
mod_print(name_dir->dummy.Rlink);
do_file= (1==0);
mod_print(name_dir->dummy.Rlink);



/*:228*/
#line 2967 "weave.web"
;
#line 175 "weave.ch"
out_str("\\bye");finish_line();
#line 2969 "weave.web"

}
#line 182 "weave.ch"
check_complete();
#line 2973 "weave.web"
}

/*:208*//*219:*/
#line 3085 "weave.web"
unbucket(d)
eight_bits d;
{
ASCII c;
for(c= 100;c>=0;c--)if(bucket[collate[c]]){
if(scrap_ptr>=scrap_info_end)stat_overflow("sorting");
scrap_ptr++;
#ifdef STAT
if(scrap_ptr>max_sort_ptr)max_sort_ptr= scrap_ptr;
#endif STAT
if(c==0)scrap_ptr->cat= 255;
else scrap_ptr->cat= d;
scrap_ptr->trans_plus.Head= bucket[collate[c]];bucket[collate[c]]= NULL;
}
}

/*:219*//*226:*/
#line 3183 "weave.web"
mod_print(p)
name_pointer p;
{
boolean is_file;
if(p){
mod_print(p->link);
cur_xref= (xref_pointer)p->equiv_or_xref;
is_file= ((cur_xref->num)>=2 *10240);
if((is_file&&do_file)||(!is_file&&!do_file)){
out_str("\\:");

tok_ptr= tok_mem+1;text_ptr= tok_start+1;scrap_ptr= scrap_info;stack_ptr= stack;cur_state.mode_field= 1;
 *(tok_ptr++)= p-name_dir+3 *10240;make_output();
footnote(0);
finish_line();
}
mod_print(p->dummy.Rlink);
}
}

/*:226*//*230:*/
#line 3229 "weave.web"

stat_overflow(s)
char *s;
{
#line 210 "weave.ch"
printf("! Sorry, capacity exceeded: %s\n",s);
#line 3234 "weave.web"
#ifdef STAT
/*229:*/
#line 3213 "weave.web"

printf(
"\nMemory usage statistics: %d of %d names, %d of %d cross-references,\n",
name_ptr-name_dir,name_dir_end-name_dir,
xref_ptr-xmem,xmem_end-xmem);
printf("\t %d of %d bytes;",byte_ptr-byte_mem,byte_mem_end-byte_mem);
printf("\nParsing required %d of %d(%d) scraps, %d of %d(%d) texts,\n",
max_scr_ptr-scrap_info,1000,1000-50,
max_text_ptr-tok_start,2000,2000-50
);
printf("\t %d of %d(%d) tokens, %d of %d levels;\n",
max_tok_ptr-tok_mem,20000,20000-50,
max_stack_ptr-stack,stack_end-stack
);
printf("\nSorting required %d levels\n",max_sort_ptr-scrap_info);

/*:229*/
#line 3235 "weave.web"
;
#endif STAT
history= 3;wrap_up();
}

/*:230*/
