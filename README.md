# What is Hiximai?

Well, the correct word would be "will be," because the project is just getting started.
But in short, Hiximai will be a CLI-based operating system, developed with a focus on developers.
Hiximai will have its own text editor, which will support ≈15 languages.

# Features:

## Text editor:

"Hagaxin Code" is Hiximai's built-in editor.
It will support the following languages:
1. C++
2. C
3. C#
4. JavaScript
5. HTML (Even though it doesn't count as a programming language)
6. CSS
7. Java
8. Rust
9. Go
10. Lua
11. Python
12. Luau (Yes, THAT Luau.)
13. Markdown
14. YAML,
And even more when the developer has enough mental stability and fewer fights with the compiler. (A.K.A never because the compiler frigging hates me)

Will have a mandatory Dark Mode (Yes, DARK mode, what kind of psychopath uses light mode anyway?)

## beginner-friendly Terminal:

We know that using a terminal can be complicated. Still, knowing that Hiximai is specifically for developers, I don't think there's a problem with that.
But obviously, there will be people who don't understand what HTML is and still install the system for whatever reason.
So we tried (well, I tried, that's just me) to make the shell as understandable as possible.
And if you still don't understand anything, you can use `help -list` to get a list of all the terminal commands.
And there you can use `help command` to get a description of the command.
Example:
```
user/hiximai help versionpls
> Shows currently installed system version.
user/hiximai help list
> Displays a list of everything inside the current directory (folder) 
```
## Language
Since Windows has PowerShell, we have Suhix. It's the most minimalistic, lazy thing you'll ever see. Here's an example of a Suhix script:

```hix
:path = "$"
i (!sys.dir.isReal(path)) { s("Directory does not exist.") }
e {
 s("Directory found, deleting...")
 sys.dir.del(path)
}
```

Yes, key"words" are one or two letters. Mhm. Let me explain what this attack on programming languages ​​means:

`:path = "$"` -> Defines `path` variable as "$" (We'll get to what that means later)
`i (!sys.dir.isReal(path))` -> "Do this if the user inputs everything but a valid path"
`e {...}` -> "If nothing above was met, do this"
