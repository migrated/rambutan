% Run "javaweave -x Manual Manual" to get a TeX file,
% and "javatangle Manual Manual" to get java source.

\def\java{Java}
\def\web{{\sc Rambutan}}
\def\tangle{\.{javatangle}}
\def\weave{\.{javaweave}}
\def\spider{Spidery \.{WEB}}

\def\ccode#1{\smallskip\hangindent .25\hsize
             \noindent\hbox to \hangindent{\hfil#1\hfil}\ignorespaces}
\def\<#1>{$\langle$\\{#1}$\rangle$}
\def\pb#1{\.{|#1|}}
\def\lb{\char'173} \def\rb{\char'175}
\def\LaTeX{\leavevmode L\raise.42ex 
           \hbox{$\rm\scriptstyle\kern-.3em A$}\kern-.15em\TeX}
\def\nopar{\vskip-\parskip\noindent}

\def\title{RAMBUTAN MANUAL}

\contents

\centerline{\fourteenrm The {\fourteensc Rambutan} Manual}

\bigskip

\noindent \web\ is a literate programming system for \java\ with \TeX,
closely resembling \.{CWEB} and the original \.{WEB} system.%
\footnote*{\font\sevensc=cmcsc10 at 7pt \font\sevenit=cmti10 at 7pt
           \font\seventt=cmtt10 at 7pt \sevenrm
           \baselineskip=8pt
In other words, what you would expect to be called {\seventt JavaWEB}.
But since {\seventt JavaWEB} sounds too much like a Sun trademark and
is a clumsy word anyway, the system as a whole is called {\sevensc
Rambutan}.  But inside {\sevensc Rambutan} the usual naming
conventions apply: the preprocessors are called {\seventt javatangle}
and {\seventt javaweave} and the \TeX\ macro file is called {\seventt
javaweb.tex}.  (A rambutan, by the way, is a delicious fruit, not
unlike a lychee, widely enjoyed in Java and elsewhere.)\par}
I developed it using Norman Ramsey's \spider.

This manual is an example of a \web\ literate program; that is to
say, the file \.{Manual.w} consists of code and documentation written
together in the \web\ idiom.  From this common source, the
\web\ system does two things:
$$ \hbox{\.{javatangle Manual}} $$
extracts a compilable \java\ applet to compute the first $N$ primes,
and
$$ \hbox{\.{javaweave Manual}} $$
produces a \TeX\ file laying out code and documentation together,
including these words.

Actually, the above is a slight oversimplification: \.{Manual.w} {\it
could\/} have contained the whole source, but in fact I have
distributed the source between \.{Manual.w} and \.{Primes.w}, in order
to illustrate multiple source files---but more on that later.

The example code follows this preamble, and introduces the main ideas
of literate programming, as relevant to \web. (The reader is
assumed to be reasonably familiar with \java\ and \TeX.)  After the
program there are short explanations of all of \web's features.
The important features are few and simple and explained first; the
arcana for literate-programming experts come later.  A brief annotated
bibliography concludes.

@i Primes.w

@* Control codes. Following are the complete set of control codes
understood by \web.  Only the first two sections are really
important.

@ {\it Basic controls.}  These cover the essentials of a literate
programming system.

\ccode{\.{@@}\<space>} Begins a new section. (A tab or newline
is also read as \\{space} here.)

\ccode{\.{@@*}\<group title>\.{.}} Begins a starred section.

\ccode{\.{@@<}\<section name>\.{@@>=}} Section definition, which is
really the code-part definition.  A section can have at most one such
definition.  The code can be continued in later sections (see examples
in sections~\LP{13} and \LP{15}).

\ccode{\.{@@<}\<section name>\.{@@>}} Code-part of the named section
used.  A section can have any number of these. \hfil\break
After a section name has first appeared (whether as definition or use)
it can be abbreviated using three trailing dots.  (See example in
section~\LP{11}).

\ccode{\.{@@(}\<filename>\.{@@>=}} Output-section definition.
Written to the named file.

\ccode{\.{@@u}} Output-section; the filename is inferred by replacing
the main source file's extension with \.{java}.


@ {\it File controls.} These are for using multiple files

\ccode{\.{@@i} \<filename>} Includes the file.  Must be followed by a
newline.

\ccode{\.{@@x}\<\dots>\.{@@y}\<\dots>\.{@@z}} Valid only in change
files.  The control codes \.{@@x}, \.{@@y}, \.{@@z}, must appear at
the beginning of a line, and the rest of such a line is ignored.  Any
material outside the blocks \.{@@x}\<\dots>\.{@@y}\<\dots>\.{@@z} is
also ignored.

@ {\it Special tangle controls.} These are for getting special effects
in the output \.{java} file.  We have met the first three in the
prime-numbers example.

\ccode{\.{@@d} \<name> \.{=} \<defn>} Defines a macro.
[\.{@@D} is equivalent.]

\ccode{\<token1> \.{@@\&} \<token2>} \tangle\ outputs the two tokens without
intervening space.

\ccode{\.{@@=}\<code text>\.{@@>}} \tangle\ passes the \<code text>
verbatim into the \.{java} file.

\ccode{\.{@@'}\<digits>} An octal constant (must be positive). For
example, \.{@@'100} tangles to \.{64} and weaves to \O{\~100}.

\ccode{\.{@@"}\<digits>} A hexadecimal constant. For example,
\.{@@"D0D0} tangles to \.{53456} and weaves to \O{\^D0D0}.


@ {\it Special weave controls}. These are for fine-tuning the
typesetting. We have met the first one in the prime-numbers example.

\ccode{\.{\vert}\<code fragment>\.{\vert}} Used in text, or section
names, to format a code fragment in code-style. The \<code fragment>
must not contain section names. [This is the only \web\ control
code not involving \.{@@}.]

\ccode{\.{@@t}\<text>\.{@@>}} The \<text> is put into a \TeX\
\.{\\hbox}.  For example, \pb{size < @@t\$2\^\lb\relax15\rb \$@@>}
produces $\\{size}<2^{15}$.  The \<text> must not contain newlines.

\ccode{\.{@@f} \<id1> \<id2> } Format definition; an optional comment
enclosed in braces can follow. [\.{@@F} is equivalent.] Makes
\weave\ treat \<id1> as it currently treats \<id2>. Format definitions
appear between the text part and the code part of a section, together
with \.{@@d} macros (in any order).

\ccode{\.{@@/}} Produces a line break. [Should not be used inside
expressions.]

\ccode{\.{@@\#}} Like \.{@@/} but adds some extra vertical space.

\ccode{\.{@@-}} Like \.{@@/} but indents the next line, to show that it
is a continuation line.

\ccode{\.{@@\vert}} Recommends a line break, but does not force
one. [Can be used inside expressions.]

\ccode{\.{@@+}} Cancels a line break that might otherwise be
inserted by \weave.

\ccode{\.{@@,}} A thin space.

\ccode{\.{@@;}} Formats code as if there were a semicolon there.

\ccode{\.{@@@@}} \weave\ outputs a single \.{@@}.  This cannot be used
inside \.{@@<}\<text>\.{@@>} or similar contexts. An alternative is
\.{\\AT!} in text.

@ {\it Index controls.} These are for fine-tuning the index, and
ignored by \tangle.

\ccode{\.{@@\^}\<text>\.{@@>}} The \<text> will appear in the index in
roman type.

\ccode{\.{@@.}\<text>\.{@@>}} The \<text> will appear in the index in
\.{typewriter} type.

\ccode{\.{@@:}\<text>\.{@@>}} In the index, the \TeX\ file will have
\.{\\9\lb}\<text>\.{\rb} and the user can define \.{\\9} freely in \TeX.

\ccode{\.{@@!}\<token>} In the index entry for \<token> the section
number will be underlined. \hfil\break A reserved word or an
identifier of length one will not be indexed except for underlined
entries.

@* Other information.
The input syntax for \tangle\ is
$$ \hbox{\tangle\ \<source file> \<change file> \.{-I}\<path>} $$
The \<source file> has default extension \.{.w} while the optional
\<change file> has default extension \.{.ch} and the default \<path>
is the current directory.

The input syntax for \weave\ is similar:
$$ \hbox{\weave\ \<source file> \<change file> \.{-x} \.{-I}\<path>} $$
The additional \.{-x} option omits the index.

Both programs also implement the \.{--version} and \.{--help} options.

@ If you use \.{pdftex} on the output of \weave, section-number
cross-references will be clickable. Using \.{\\LP\lb}\<section
number>\.{\rb} in text will also give you a clickable link.

@ \TeX\ macros are in \.{javaweb.tex}, which is based on the original
\.{webmac.tex} but considerably modified and reorganized.  The default
format is a standalone Plain \TeX\ document, but if you want to use
\LaTeX, or embed within a larger document, minimal changes will be
necessary.

@ To get a table of contents (listing the starred sections), put
$$ \hbox{\.{\\contents}} $$
at the very top of the input file. 
Unlike in \.{WEB} and \.{CWEB}, the table of contents comes first. So
you will have to run \TeX\ twice to get an up-to-date list.

If you use \.{pdftex} the contents will also appear as bookmarks.

@ If you are using a change file and want to view only the
changed sections, put
$$ \hbox{\.{\\let\\maybe\\iffalse}} $$
in the source file or the change file, in the limbo part.

Using this option with \.{pdftex} will generally produce a lot of
clickable links to absent sections, but such links will behave sensibly.

@* Bibliography. The basic introductory reference on literate
programming in general is Knuth's article:
\item{} {\it Literate Programming,} in {\sl The Computer Journal} {\bf
27}, 97-111 (1984).
\nopar which is also reprinted in Knuth's anthology of the same
title.  (The prime-numbers example in this manual is adapted from the
Knuth article.)

For reviews and links on all aspects of literate programming,
see Daniel Mall's literate programming web site:
\item{} \url{www.literateprogramming.com}

Normal Ramsey's \spider\ (a generator for \.{tangle} and \.{weave}
programs) is described in:
\item{} {\it Literate programming: Weaving a language-independent
WEB,} {\sl Communications of the ACM,} {\bf 32}, 1051--1055 (1989)
\nopar and archived on CTAN.  I made a few modifications (such as
adding hyperlinks) to the \spider\ system itself; such modifications
are through change files, so Ramsey's original code is untouched.  The
change files are included in the \web\ distribution.  Ramsey
himself now deprecates \spider\ and favors the simpler \.{noweb}
system:
\item{} {\it Literate programming simplified,} {\sl IEEE Software,}
{\bf 11}, 97--105 (1994)
\nopar which is language independent but sacrifices many features,
including automatic cross-referencing.  See also Ramsey's web site:
\item{} \url{www.eecs.harvard.edu/~nr}
\nopar I use \.{noweb} too, but I think \spider\ still has a place.

Finally, the \web\ distribution is available from
\item{} \url{www.qgd.uzh.ch/projects/rambutan/}
\nopar and is also archived on CTAN.
