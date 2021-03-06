# Chapter 5 - Languages

In the 1950s, Noam Chomsky noted that natural langauges are built up of recursive and repeated substructures. This is true in programming as well. For example, *Sentences* must contain a *verb phrase* which can be either a *verb* or an *adverb and verb*. An *if statement* has a block of code that executes if true, which can also contain another *if statement*.

> What are some more examples of strings that `Doge` language contains.

```
› An Adjective is either "wow", "many", "so" or "such".
› A Noun is either "lisp", "language", "c", "book" or "build".
› A Phrase is an Adjective followed by a Noun.
› A Doge is zero or more Phrases.
```

More doges include: "such lisp so book wow c such language" and "".

> Why are there `\` in from of `"`? At the end of lines?

A backslash is an escape character for special characters that have meaning in strings. It retains its special meaning inside a quote when followed by `$`, `*`, `"`, `\`, or `newline`.

At the end of a line, it allows you to continue a the same string onto another line.

> Describe textually a grammar for decimal numbers such as 0.01 or 52.221.

```
A whole number is a arithmetic whole number.
A partial number is a `whole number` that can be preceeded by zeros.
A decimal number is a `whole number` followed by `.` followed by a `partial number`.
```

> Describe textually a grammar for web URLs such as http://www.buildyourownlisp.com.

```
A domain is a phrase that contains alphanumeric characters, no  spaces, and `_` or `-`
A TLD (Top-level domain) is either ".com" or ".net" or ".ai" or ".me" or ".gg"
A host is either "www." or ""
A protocol is either "https://" or "ftp://" or "http://"
A web url is a protocol followed host followed by a domain followed by a TLD.
```
