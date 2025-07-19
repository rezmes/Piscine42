### Help-Desk Reference: Norminette Errors in ft_print_reverse_alphabet.c

| **Problem** | **Cause** | **Resolution** |
|-------------|-----------|----------------|
| `SPACE_REPLACE_TAB` (e.g., line 18, col 9) | Spaces used instead of tabs for indentation (e.g., `    char c;` instead of `^Ichar c;`). Likely due to Vim inserting spaces or copy-paste retaining spaces. | In Vim, set `:set noexpandtab` to use tabs. Use `:retab` to convert spaces to tabs. Ensure indentation uses tabs (`^I`) via `:set list`. |
| `SPACE_EMPTY_LINE` (e.g., line 19, col 1) | Empty line contains stray spaces (e.g., ` $` in `:set list`). | In Vim, navigate to the empty line (e.g., line 19), use `dd` to delete it, and ensure no spaces remain on empty lines. |
| `CONSECUTIVE_SPC` (e.g., line 15, col 5) | Multiple consecutive spaces before function declarations (e.g., `void    ft_putchar`). | Remove extra spaces before function declarations (e.g., `void ft_putchar(char c);`). Check with `:set list` for clean spacing. |
| `SPACE_BEFORE_FUNC` (e.g., line 17, col 8) | Spaces before function name in declaration (e.g., `void    ft_print_reverse_alphabet`). | Ensure no spaces before function name (e.g., `void ft_print_reverse_alphabet(void);`). |
| `LINE_TOO_LONG` (header lines) | Header lines exceeded 80 columns due to extra spaces or misalignment. | Use exact 42 header template, ensuring proper spacing (e.g., `###   .fr`). Check alignment with `:set list`. |
| `INVALID_HEADER` | Incorrect header formatting (e.g., extra spaces around `/*` or `*/`, wrong `.fr` spacing). | Copy-paste standard 42 header, verify with `:set list` for correct spacing. |

**Resolution Steps**:
1. Open file: `vim ft_print_reverse_alphabet.c`.
2. Clear content: `Esc`, `gg`, `dG`.
3. Paste corrected code with proper tabs and spacing.
4. In Vim: `:set noexpandtab`, `:set tabstop=4`, `:set shiftwidth=4`, `:set list`.
5. Convert spaces to tabs: `:%s/    /\t/g`.
6. Remove stray spaces on empty lines: Navigate to line (e.g., line 19), use `dd`.
7. Save and exit: `:wq`.
8. Verify: `norminette ft_print_reverse_alphabet.c` (should return `OK!`).

**Notes**:
- Use `:set list` to visually confirm tabs (`^I`) and no stray spaces (`$`).
- `:retab` was critical to convert spaces to tabs, aligning with 42 Norm.
- Always check header alignment and operator spacing (e.g., `c = 'z'`).