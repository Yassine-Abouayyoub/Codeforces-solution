# A. Way Too Long Words

Solution for **A. Way Too Long Words** from Codeforces.

## Problem Idea

Some words are too long to write normally.
If a word contains more than **10 characters**, we shorten it using:

* First letter
* Number of letters between first and last
* Last letter

### Example

```text
localization → l10n
internationalization → i18n
word → word
```

## Approach

1. Read the number of words `n`
2. For each word:

   * If length > 10:

     * Build shortened version
   * Otherwise keep it unchanged
3. Print all results

## Algorithm Used

* String manipulation
* Conditional statements
* Loops

## Time Complexity

* **O(n × m)**
  Where:

* `n` = number of words

* `m` = average word length

## Space Complexity

* **O(n)**

## Language

* Python

## File

```text
solution.py
```

## Author

Created by Yassine Abouayyoub.
