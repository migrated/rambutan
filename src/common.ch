@x 305
#include <stdio.h>
@y
#include <stdio.h>
#include <string.h>
@z

@x 305
@d max_file_name_length = 60
@y
@d max_file_name_length = 128
@z

@x line 945
  printf("\n%s",(s==(char *)0) ? "Bad error message!!!" : s);
  if (setting_up) {
printf("\nError occurred while scanning arguments or opening output files. ");
@y
  printf("%s\n",(s==(char *)0) ? "Bad error message!!!" : s);
  if (setting_up) {
printf("Error occurred while scanning arguments or opening output files.\n");
@z

@x line 1010
wrap_up() {
  putchar('\n');
@y
wrap_up() {
@z

@x line 1019
case spotless: printf("(No errors were found.)\n"); break;
case harmless_message:
  printf("(Did you see the warning message above?)\n"); break;
case error_message:
  printf("(Pardon me, but I think I spotted something wrong.)\n"); break;
case fatal_message: printf("(That was a fatal error, my friend.)\n");
@y
case harmless_message:
  printf("(Did you see the warning message above?)\n"); break;
case error_message:
  printf("(Pardon me, but I think I spotted something wrong.)\n"); break;
case fatal_message: printf("(That was a fatal error, my friend.)\n");
@z

@x line 1066
  while (--argc > 0) {
@y
  if (argc == 2)
    { if (strcmp (argv[1], "--version") == 0)
        { printf("This is %s from Rambutan version 1.32\n",argv[0]);
          exit(0);
        }
      if (strcmp (argv[1], "--help") == 0)
        { printf("This program is part of Rambutan, ");
          printf("a literate programming system for Java.\n");
          exit(0);
        }
    }
  while (--argc > 0) {
@z

@x line 1089
    sprintf(web_file_name,"%s.web",*argv);
@y
    sprintf(web_file_name,"%s.w",*argv);
@z

@x line 1150
fatal("! Usage: tangle webfile[.web] [changefile[.ch]] [-Ipathname ...]\n",0)@;
else
fatal("! Usage: weave webfile[.web] [changefile[.ch]] [-x] [-Ipathname ...]\n",
@y
fatal("! Usage: javatangle webfile[.w] [changefile[.ch]] [-Ipathname ...]\n",0)@;
else
fatal("! Usage: javaweave webfile[.w] [changefile[.ch]] [-x] [-Ipathname ...]\n",
@z


