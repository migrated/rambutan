@x line 60
  printf(banner); /* print a ``banner line'' */
@y
  /* printf(banner); skip the ``banner line'' */
@z

@x line 93 (really common.h)
#include <stdio.h>
@y
#include <stdio.h>
#include <@&str @&ing.h>
@z

@x line 255
      printf("\n! You can't use <"); print_id(p);
	printf("> both as a file and as a named module"); mark_harmless;
@y
      printf("! You can't use <"); print_id(p);
	printf("> both as a file and as a named module\n"); mark_harmless;
@z

@x line 657
    printf("\n! String too long: ");
@.String too long@>
    ASCII_write(mod_text+1,25);
    printf("..."); mark_error;
@y
    printf("! String too long: ");
@.String too long@>
    ASCII_write(mod_text+1,25);
    printf("...\n"); mark_error;
@z

@x line 730
  printf("\n! Section name too long: ");
@.Section name too long@>
  ASCII_write(mod_text+1,25);
  printf("..."); mark_harmless;
@y
  printf("! Section name too long: ");
@.Section name too long@>
  ASCII_write(mod_text+1,25);
  printf("...\n"); mark_harmless;
@z


@x line 798
changed_module[module_count]=change_exists;
  /* the index changes if anything does */
@y
@z

@x line 809
    printf("*%d",module_count);
    update_terminal; /* print a progress report */
@y
@z

@x line 964
      printf("\n! Never defined: <"); print_id(p); putchar('>'); mark_harmless;
@y
      printf("! Never defined: <"); print_id(p); printf(">\n"); mark_harmless;
@z

@x line 969
	      printf("\n! You can't use <"); print_id(p);
	      printf("> both as a file and as a named module"); mark_harmless;
@y
	      printf("\n! You can't use <"); print_id(p);
	      printf("> both as a file and as a named module"); mark_harmless;
@z

@x line 976
      printf("\n! Never used: <"); print_id(p); putchar('>'); mark_harmless;
@y
      printf("! Never used: <"); print_id(p); printf(">\n"); mark_harmless;
@z

@x line 980
      printf("\n! You can't use file module ("); print_id(p);
	putchar(')'); mark_harmless;
@y
      printf("! You can't use file module ("); print_id(p);
	printf(")\n"); mark_harmless;
@z

@x line 1115
  printf("\n! Line had to be broken (output l. %d):\n",out_line);
@y
  printf("! Line had to be broken (output l. %d):\n",out_line);
@z

@x lines 1130
  sprintf(s,"%d",n); out_str(s);
@y
  sprintf(s,"\\LP{%d}",n); out_str(s);
@z

@x line 2043
  case join: app_str("\\J"); app_scrap(SP_ignore_scrap,no_math); break;
@y
  case join: app_str("\\J"); app_scrap(SP_ignore_scrap,maybe_math); break;
@z

@x line 2121
  if (next_control!=vertical_bar) err_print("! Missing vertical_bar after C text");
@y
  if (next_control!=vertical_bar) err_print("! Missing vertical_bar after program text");
@z

@x line 2511
  printf("\n! Illegal control code in section name: <");
@.Illegal control code...@>
  print_id(cur_mod_name); printf("> "); mark_error;
@y
  printf("! Illegal control code in section name: <");
@.Illegal control code...@>
  print_id(cur_mod_name); printf(">\n"); mark_error;
@z

@x line 2526
    printf("\n! C text in section name didn't end: <");
@.C text...didn't end@>
@y
    printf("! Program Text in section name didn't end: <");
@.Program Text...didn't end@>
@z

@x line 2557
reset_input(); printf("\nWriting the output file...");
@y
reset_input();
@z

@x line 2603
  printf("*%d",module_count); update_terminal; /* print a progress report */
@y
@z

@x line 2624
        err_print("! TeX string should be in C text only"); break;
@y
        err_print("! TeX string should be in program text only"); break;
@z

@x line 2835
  err_print("! You can't do that in C text");
@y
  err_print("! You can't do that in program text");
@z

@x line 2922
q=cur_xref; if (q->xlink->num>flag) out('s'); /* plural */
@y
q=cur_xref;
while (q->num>flag)
  { if (q->xlink->num>flag && q->num==q->xlink->num)
      { q->xlink = q->xlink->xlink;
      }
    else q=q->xlink;
  }
q=cur_xref;
if (q->xlink->num>flag) out('s'); /* plural */
@z

@x line 2957
  phase=3; printf("\nWriting the index...");
@y
  phase=3;
@z

@x 2968
  out_str("\\con"); finish_line();
@y
  out_str("\\bye"); finish_line();
@z

@x line 2971
printf("Done.");
check_complete(); /* was all of the change file used? */
@y
check_complete(); /* was all of the change file used? */
@z

@x line 2982
  /* remember that the index is already marked as changed */
  k_module=0;
  while (!changed_module[++k_module]);
  out_str("\\ch ");
  out_mod(k_module);
  while (1) {
    while (!changed_module[++k_module]);
    out_str(", "); out_mod(k_module);
    if (k_module==module_count) break;
  }
@y
  out_str("\\ch ");
  k_module=0;
  while (!changed_module[++k_module]);
  out_mod(k_module);
  while (k_module<module_count)
    if (changed_module[++k_module]) {
        out_str(", "); out_mod(k_module);
    }
@z

@x line 3233
  printf("\n! Sorry, capacity exceeded: %s",s);
@y
  printf("! Sorry, capacity exceeded: %s\n",s);
@z

