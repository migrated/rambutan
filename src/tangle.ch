@x line 57
  printf(banner); /* print a ``banner line'' */
@y
  /* printf(banner); skip the ``banner line'' */
@z

@x line 80 (really common.h)
#include <stdio.h>
@y
#include <stdio.h>
#include <@&str @&ing.h>
@z

@x line 498
			printf("\n! No parameters given for ");
@y
			printf("No parameters given for ");
@z

@x line 668
    printf("\n! Not present: <"); print_id(a+name_dir); err_print(">");
@y
    printf("! Not present: <"); print_id(a+name_dir); err_print(">");
@z

@x line 717
  if (cur_line % 100 == 0) {
@y
  if (cur_line % 100 < 0) {
@z

@x line 768
      printf("\n! No program text was specified."); mark_harmless;
@y
      printf("! No program text was specified."); mark_harmless;
@z

@x line 773
    printf("\nWriting the output files: (%s)",C_file_name); update_terminal;
@y
    printf("Output file: (%s)",C_file_name); update_terminal;
@z

@x line 780
       printf("\nWriting the output files: "); update_terminal;
@y
       printf("Output file(s):"); update_terminal;
@z

@x line 784
  printf("\nDone.");
@y
  printf("\n");
@z

@x line 1159
    printf("\n! String too long: ");
@y
    printf("! String too long: ");
@z

@x line 1258
  printf("\n! Section name too long: ");
@y
  printf("! Section name too long: ");
@z

@x line 1574
    err_print("! @@d, @@f and @@u are ignored in C text"); continue;
@.{\AT!}d, {\AT!}f and {\AT!}u are ignored in C text@>
@y
    err_print("! @@d, @@f and @@u are ignored in program text"); continue;
@.{\AT!}d, {\AT!}f and {\AT!}u are ignored in program text@>
@z

@x line 1704
    printf("*%d",module_count); fflush(stdout);
@y
    fflush(stdout);
@z

@x line 1753
  err_print("! C text flushed, = sign is missing");
@.C text flushed...@>
@y
  err_print("! Program text flushed, = sign is missing");
@.Program text flushed...@>
@z




