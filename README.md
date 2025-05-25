# Hiximai

> *A terminal-focused operating system for developers who like pain, caffeine, and dark mode.*

---

## 🧠 What is Hiximai?

Well... the correct word would be *"will be"*, because the project is just getting started.

**Hiximai** will be a CLI-based operating system, developed with a special focus on developers.  
It’ll include its own built-in text editor and a custom shell, because clearly, I enjoy reinventing wheels and battling compilers at 3 AM.

---

## ✏️ Built-in Text Editor: *Hagaxin Code*

This is the default editor in Hiximai. It will support around 15 languages, including:

1. C++
2. C
3. C#
4. JavaScript
5. HTML (Yes, we know it’s not a programming language)
6. CSS
7. Java
8. Rust
9. Go
10. Lua
11. Python
12. Luau (Yes, THAT Luau.)
13. Markdown
14. YAML  
15. *(And more, once I recover some mental stability and stop arguing with the compiler.)*

Also:  
✅ **Dark mode only.**  
❌ Light mode not allowed. What kind of monster even uses that?

---

## 🖥️ Beginner-Friendly Terminal

Yeah, terminals can be scary.  
But this is Hiximai, and if you're here, you're probably a developer. Hopefully. Maybe. 😅

Still, if you have no idea what HTML is and you *somehow* ended up here, don’t worry:  
You can always type:

```

help -list

```

To get a full list of terminal commands.  
Then, run:

```

help <command>

```

To get an explanation for any command.

Example:
```

user>hiximai help versionpls

> Shows currently installed system version.

user>hiximai help list

> Displays a list of everything inside the current directory (folder).

````

---

## 🧪 Scripting Language: Suhix

You’ve heard of PowerShell.  
Now meet its underachieving, minimalist cousin: **Suhix**.

Here’s what a Suhix script looks like:

```hix
:path = "$"
i (!sys.dir.isReal(path)) { s("Directory does not exist.") }
e {
 s("Directory found, deleting...")
 sys.dir.del(path)
}
````

Let’s break this beautiful crime against syntax down:

* `:path = "$"` → Defines a variable called `path` with the value "`$`" (don’t worry, we’ll explain what `$` means later).
* `i (!sys.dir.isReal(path))` → "If the directory doesn't exist, say so."
* `e { ... }` → "Otherwise, do this."

Yes. Keywords are **one or two letters**.
Because the fewer the keystrokes, the less time the compiler has to judge you.

## 📁 New Path system

Hiximai will count with its own unique path system, because `/` and `\` are too basic. Instead, it'll use `>` to separate directories.
Comparison:
Windows:
C:\Users\User\Desktop\Folder\SubFolder
Hiximai:
$:desktop>folder>subfolder

Very readable, ins't it?
And, yeah, I know what you're thiking, I'll tell you what the hell does `$` mean.

### Disks

Well, to make it short: `$` is the root disk, the one where the system is installed.
All additional disks other than `$` will recieve a numeric order, starting from one up to... Er... idk, 10? Why would you need more than ten disks?

---

## 🚧 Status

This project is in early development.
Bugs are expected. Sleep is not.

---

## 🙌 Contributions?

If you’re crazy enough to want to help, feel free to fork, star, or open issues.
Just don’t ask for a light mode.
Jokes aside, if you want to help me, reach out to my discord @wernasho. (Yeah, I love that username tbh)
Any help is really appreciated!

---

## 💬 Author

Made by [Wernasho (a.k.a. Wer)](https://github.com/Wernasho) — currently fighting compilers and summoning demons through Assembly.
Fun fact: I, as of writing this (25/5/2025 2:14 AM GMT-3), am only **13 years old**.
