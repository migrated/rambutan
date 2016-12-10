@* Computing primes.  This is a Java applet that takes two numbers
|N1,N2| and prints out the |N1|-th prime to the |N2|-th prime.

Like all literate programs, this one consists of a series of numbered
{\bf sections}.  We are currently in section~\LP{1}.  (Any
material before section~\LP{1} is called {\bf limbo}; in this case, the
introduction.)
Most sections consist of a short {\bf text} part followed by a short
{\bf code} part.  Some sections (such as this one) contain only
text, some others contain only code.

Section~\LP{1} is always a {\bf starred section}. That just means it
has a title: `Computing primes' in this case.  The title is supposed
to describe a large group of consecutive sections, and gets printed at
the start and on the page headline.  Long programs have many starred
sections, which behave like chapter headings.

The source for this section begins
$$ \hbox{\.{@@* Computing primes. This is...}} $$
In the source, \.{@@*} begins a starred section, and any text up to
the first period makes up the title.

@ This is an ordinary (i.e., unstarred) section, and its source begins
$$ \hbox{\.{@@ This is an ordinary...}} $$
In the source, \.{@@} followed by space or tab or newline begins an
ordinary section.

In the next section things get more interesting.

@ @<Imported packages@>=
  import java.applet.*;
  import java.awt.*;
  import java.awt.event.*;
  import java.util.*;

@ The source for section~\LP{3} begins
$$ \vbox{\halign{\.{#}\cr
         @@ @@<Imported packages@@>= \cr
         \quad import java.applet... \cr
}} $$
The result is to make \.{@@<Imported packages@@>} an
abbreviation for four \java\ statements---note the \.{=} in the source.

The bit \X\LP{3}:Imported packages\X\ is called the {\bf section
name}, not to be confused with the title of a starred section.  Notice how
\web\ has attached the number~\LP{3} and inserted a forward reference to
section~\LP{5}.

@ Now we have a whole \java\ class in abbreviated form.  The section
\X\LP{3}:Imported packages\X\ is used here, as promised; so are
other sections that haven't been defined yet.
@(Primes.java@>=
  @<Imported packages@>
  public class Primes extends Applet
    implements ActionListener
    { @<Fields@>
      @<Code for initializing@>
      @<The event handler@>
    }

@ The source for section~\LP{5} is
$$ \vbox{\halign{\.{#} \hfil \cr
         @@ Now we have... \cr
         @@(Primes.java@@>= \cr
         \quad @@<Imported packages@@> \cr
         \quad public class Primes extends Applet \cr
         \qquad implements ActionListener \cr
         \qquad \rlap{\char'173}\quad @@<Fields@@> \cr
         \qquad \quad @@<Code for initializing@@> \cr
         \qquad \quad @@<The event handler@@> \cr
         \qquad \char'175  \cr
}} $$
Note the left parenthesis in \XF5:Primes.java\XF, in contrast with the angle
brackets used for other section names.  The source for the section name
\XF5:Primes.java\XF\ is
$$ \.{@@(Primes.java@@>=} $$
rather than
$$ \.{@@<Primes.java@@>=} $$
Because of this, section~\LP{5} is an {\bf output section}: its expansion
is output to the specified file \.{Primes.java}.

{\sl Aside:\/} The filename \.{Primes.java} has to be given by the
programmer; \web\ is not smart enough to figure out the correct
filename from context.

@ That's it for the really essential features of a literate
programming system: \tangle\ collects the code fragments into a
compilable program and \weave\ cross-references the sections.  The
remaining features of \web\ are basically refinements.  This example
will illustrate a few more features, but the full list can wait till
the next chapter of this manual.  Meanwhile we'll get on with
explaining the program.

@ The algorithmic job of this program is to produce a list of primes,
which it does inductively.

First, note that testing |p| for primeness is easy if we know all the
primes $<p$.  We set |pmul[j]| to consecutive odd multiples of
|prime[j]| and check whether we ever hit |p|. It is enough to try
multiples of primes $\leq\sqrt p$.

@<Set |factor=true| if |p| is a multiple of a prime@>=
  for (int j=2; psqr[j] <= p; j++)
    { while (pmul[j] < p) pmul[j] += 2*prime[j];
      if (pmul[j]==p) factor = true;
    }

@ Now suppose we have found |prime[1]| through |prime[k-1]|.  We then try
successive odd numbers |p > prime[k-1]| until we find a prime |p|.

@<Compute |prime[k]|@>=
  if (k==1) prime[k] = 2;
  else if (k==2) prime[k] = 3;
  else
    for (int p=prime[k-1]+2; ; p+=2)
      { boolean factor=false;
        @<Set |factor=true| if...@>
        if (!factor)
          { prime[k] = p;  break;
          }
      }
  pmul[k] = prime[k];  psqr[k] = prime[k]*prime[k];


@ @<Arrays for computing primes@>=
  int[] prime = new int[N2+1];  @/
  int[] pmul = new int[N2+1];
  int[] psqr = new int[N2+1];


@ When we use the code from section~\LP{8} in section~\LP{9}, the
source actually gives the section name as
$$ \hbox{\.{@@<Set \pb{factor=true} if...@@>=}} $$
with the three dots.  Once a section name has appeared in the source
\web\ can complete it from this kind of three-dot shorthand.  (And by
the way, \web\ sensibly collapses extra spaces or newlines in
section names.)

Another feature is the usage \pb{factor=true} which tells \weave\ to
typeset the enclosed text in code-style.

@ The rest of this program is the GUI.  Here are the elements for it.
(We restrict ourselves to \java\ 1.1, which more people's browsers
will interpret than \java\ 2.)

The code here includes some comments; literate programs usually need
comparatively few comments.  \web\ knows about the \.{//} comment
syntax in \java\ but not about \.{/*...*/} comments.

If you need to include strings in the \.{.java} file that \web\ can't
parse, enclose them in \.{@@=...@@>}. A \.{@@=/** javadoc comment
*/@@>} can be inserted in this way.

@<Fields@>=
  int N1=0,N2=0; TextField N1_txt,N2_txt;
  Button run; Panel panel;  // for input 
  TextArea disp;            // for output

@ This method makes a labelled |TextField| and attaches it to
|panel|.
@<Code for initializing@>=
  TextField new_tf(String str, int n)
    { Panel p = new Panel();  TextField t = new TextField(n);  @/
      p.add(new Label(str,Label.CENTER));
      p.add(t);
      p.add(new Label(" ",Label.CENTER));  @/
      panel.add(p);  @/
      return t;
    }

@ Section~\LP{15} has the same section name as section~\LP{13}.  When
two or more sections have the same name, \web\ automatically
concatenates them.  Note the forward reference in section~\LP{13} and
the continuation mark `${}+\S{}$' in section~\LP{15}.

@ The applet's |init()| method.  Because |disp| here is \.{Center} in
a |BorderLayout|, it will take up any spare space.

@<Code for initializing@>=
  public void init()
    { panel = new Panel();
      N1_txt = new_tf("N1",4); N2_txt = new_tf("N2",4);  @/
      run = new Button("run"); panel.add(run);
      run.addActionListener(this);  @/
      disp = new TextArea();  disp.setEditable(false);  @/
      setLayout(new BorderLayout());
      add("North",panel);  add("Center",disp);
    }


@ Some (very rare) sections have a {\bf definitions} part.

@d intN(i) = Integer.parseInt(N @& i @& _txt.getText())

@ In section~\LP{16} we have a macro. The \.{@@\&} removes any space
between its neighbors in the \.{java} file.  Accordingly, |intN(1)|
will do something with the variable |N1_txt|, and so on.

@ @<The event handler@>=
  public void actionPerformed(ActionEvent event)
    { run.setEnabled(false);
      try
        { int n1 = intN(1); int n2 = intN(2);
          if (n1>=1 && n2>=n1)
            { N1 = n1; N2 = n2;
              @<Compute and display primes@>
            }
          else
            { @<Restore old values of |N1,N2|@>
            }
        }
      catch (NumberFormatException ex)
        { @<Restore old values of |N1,N2|@>
        }
      run.setEnabled(true);
    }


@ @<Restore old values of |N1,N2|@>=
  if (N1==0)
    { N1_txt.setText(""); N1_txt.setText("");
    }
  else
    { N1_txt.setText(Integer.toString(N1));
      N2_txt.setText(Integer.toString(N2));
    }


@ @<Compute and display primes@>=
  @<If too extravagant |return|@>
  StringBuffer lyne = new StringBuffer(); disp.setText("");
  @<Arrays for computing primes@>
  for (int k=1; k<=N2; k++)
    { @<Compute |prime[k]|@>
      String num = new String(Integer.toString(prime[k])+" ");
      if (k >= N1)
        { lyne.append(num);
          if (lyne.length() < 64)
            disp.append(num);
          else
            { disp.append("\n"+num); lyne = new StringBuffer(num);
            }
        }
    }


@ @<If too extravagant |return|@>=
  if (N2-N1 >= 1000)
    { disp.setText("Printing more than ");
      disp.append("1000 primes ");
      disp.append("is too boring\n");
      disp.append("Try increasing N1");  @/
      run.setEnabled(true);  @/
      return;
    }

