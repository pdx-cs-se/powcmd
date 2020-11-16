# powcmd: exponentiation command and library
Bart Massey

This codebase consists of a library containing a `pow(x, y)`
function for exponentiation, together with a `powcmd`
command-line program for calling this function.

The library `pow()` has been "formally proven" correct,
although the proof is sketchy and has not been audited.  See
the comments in the source for the proof.
