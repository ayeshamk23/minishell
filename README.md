# 🐚 minishell

> A simplified UNIX shell built in C with support for pipes, redirections, and environment variables.

## 📌 Description

**minishell** is a 42 School project that replicates core behavior of a real UNIX shell. It supports executing built-in and external commands, handling pipes, redirections, and managing environment variables — all within a controlled and memory-safe environment.

This project offers a deep dive into process control, terminal interaction, and string parsing in C, providing valuable experience in building a real-world system tool from scratch.

## 🔧 Features

- Command execution (`ls`, `echo`, etc.)
- Built-in commands: `cd`, `pwd`, `exit`, `env`, `export`, `unset`
- Environment variable expansion (e.g. `$HOME`)
- Pipes (`|`) and multiple chained commands
- Redirections: `>`, `>>`, `<`, `<<` (heredoc)
- Quote handling (single and double)
- Exit codes and error messages
- Signal handling (`ctrl + C`, `ctrl + D`, `ctrl + \`)
- No usage of `system()` or other shell functions

## 🚀 Getting Started

### 🧱 Compilation

```bash
make
```

### ▶️ Run the shell

```bash
./minishell
```

### 💡 Example

```bash
minishell$ echo Hello | cat -e
Hello$
```

## 📘 Concepts Learned

- Process creation and control using `fork`, `execve`, `wait`
- File descriptor duplication with `dup`, `dup2`
- Pipe management and redirection logic
- Environment variable manipulation
- Custom string parsing/tokenizing
- Signal handling (`SIGINT`, `SIGQUIT`)
- Error messaging and return codes
- Writing and debugging a command interpreter
