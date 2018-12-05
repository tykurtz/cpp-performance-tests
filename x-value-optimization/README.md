Small test to see if behavior similar to copy-elision occurred when using push_back on a stack variable, or if a copy was required.

A copy does not get elided, but surprisingly (to me at least), there was almost zero overhead associated with an unncessary copy. The runtime is completely driven by heap allocation calls giving near identical performance in Release.


