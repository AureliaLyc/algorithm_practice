# Valid Sudoku
==
Determine if a Sudoku is valid, according to: ![Sudoku Puzzles - The Rules](http://sudoku.com.au/TheRules.aspx). <br>
The Sudoku board could b partially filled, where empty cells are filled with the character '.'.
![sudoku](http://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Sudoku-by-L2G-20050714.svg/250px-Sudoku-by-L2G-20050714.svg.png)
A partially filled sudoku which is valid. <br>

Note:<br>
A valid Sudoku board (partially filled) is not necessarily solvable. Only the filled cells need to be validated.
## 理解
按照题意，需要验证已经有的数字是满足数独规则的。三个规则：
* 横向没有重复数字
* 纵向没有重复数字
* 每个井字格内没有重复数字。
问题的关键是如何验证井字格，如何从j/i得到坐标。