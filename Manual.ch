@x
distributed the source between \.{Manual.w} and \.{Primes.w}, in order
@y
distributed the source between \.{Manual.w}, \.{Primes.w}, and
\.{Manual.ch}, in order
@z

@x
bibliography concludes.
@y
bibliography concludes.

\vfill
\noindent {\eightrm Version 1.32 (Dec 2007)}
@z

@x
  if (N2-N1 >= 1000)
    { disp.setText("Printing more than ");
      disp.append("1000 primes ");
@y
  if (N2-N1 >= 2000)
    { disp.setText("Printing more than ");
      disp.append("2000 primes ");
@z


@x
      return;
    }
@y
      return;
    }

@ The source of this program is actually in the file \.{Primes.w},
while \.{Manual.w} says
$$ \vbox{\halign{\.{#} \hfil \cr
  @@i Primes.w \cr
}} $$
to include that file.

\smallskip

If you look in \.{Primes.w}, you will find that it considers printing
$>1000$ primes as already too boring, rather than $>2000$ primes.  The
relevant lines of code have been overridden by the {\bf change file}
\.{Manual.ch}.  This last file contains
$$ \vbox{\halign{\.{#} \hfil \cr
  @@x \cr
  \quad if (N2-N1 >= 1000) \cr
  \quad\quad \rlap{\char'173}\quad disp.setText("Printing more than ");\cr
  \quad\quad \rlap{\char'173}\quad disp.setText("1000 primes ");\cr
  @@y \cr
  \quad if (N2-N1 >= 2000) \cr
  \quad\quad \rlap{\char'173}\quad disp.setText("Printing more than ");\cr
  \quad\quad \rlap{\char'173}\quad disp.setText("2000 primes ");\cr
  @@z \cr
}} $$
and continues with a similar construction containing this section.
The section numbers~\LP{21} and \LP{22} have daggers attached to indicate
that a change file is involved.

A change file consists of constructions of the type
$$ \vbox{\halign{#\hfil \cr
  \.{@@x} \cr
  $\langle$Lines quoted from the source file$\rangle$ \cr
  \.{@@y} \cr
  $\langle$Replacement lines$\rangle$ \cr
  \.{@@z} \cr
}} $$
The change-file name is an optional second input parameter on the
command line. Thus
$$ \hbox{\.{javatangle Manual.w Manual.ch}} $$
or simply
$$ \hbox{\.{javatangle Manual Manual}} $$
and similarly for \.{javaweave}.
@z

