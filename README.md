/******************************************

█     █ █ █     █ █ ████  █████     █     █
█     █    █   █    █   ██    █    █ █    
███████ █   █ █   █ █   ██    █   █   █   █
█     █ █    █    █ █         █  █     █  █
█     █ █   █ █   █ █         █ █ █████ █ █
█     █ █  █   █  █ █         █ █       █ █

******************************************/

# ¿Qué es Hiximai?

Bueno, la palabra correcta sería "Será", porque el proyecto apenas está empezando.
Pero en resumen, Hiximai será un sistema operativo basado en CLI, desarrollado con foco en desarrolladores.
Hiximai contará con su propio editor de texto, el cual soportará ≈15 lenguajes.

# Caracterísiticas:

## Editor de texto: 

"Hagaxin Code" Es el editor integrado de Hiximai.
Soportará los siguientes lenguajes:
1. C++
2. C
3. C#
4. JavaScript
5. HTML (aunque no sea un lenguaje de programación)
6. CSS
7. Java
8. Rust
9. Go
10. Lua
11. Python
12. Luau (Sí, ESE Luau.)
13. Markdown
14. YAML,
Y más cuando el desarrollador tenga suficiente estabilidad mental y menos peleas con el compilador.

Contará con un Modo Oscuro forzado (Sí, modo OSCURO, ¿qué clase de psicópata usa modo claro de todas formas?)

## Terminal beginner-friendly:

Sabemos que usar una terminal puede ser complicado. Igual, sabiendo que Hiximai es para desarrolladores específicamente, no creo que haya problema con eso.
Pero obviamente que va a haber gente que no sepa que es HTML que aún así se instale el sistema por x motivo.
Así que intentamos (bueno, intenté, soy solo yo-) hacer el shell lo más comprensible posible.
Y si aún así no entendes ni corno, podes usar `help -list` para obtener una lista de todos los comandos de la terminal.
Y ahí podes usar `help comando` para obtener una descripción del comando.
Ejemplo:
user/hiximai help versionpls
> muestra la versión instalada del Sistema.
user/hiximai help list
> Muestra una lista de todo lo que esté dentro del directorio(carpeta) actual 

## Lenguaje

Como Windows Tiene a Powershell, nosotros tenemos a Suhix. Es la cosa más minimalisticamente floja que vas a ver en tu vida. Esto es un ejemplo de un script de suhix:

```hix
:path = "$"
i (!sys.dir.isReal(path)) { s("El directorio al que intentas acceder no existe.") }
e {
 s("Directorio encontrado, eliminando...")
 sys.dir.del(path)
}
```

Sí, las key'words' son una o dos letras. Mhm. A ver, les explico que significa este atentado contra los lenguajes de programación:

`:path = "$"` -> Define la variable "path" a  '$' (ya vamos a ver que significa eso)
`i (!sys.dir.isReal(path))` -> Hace esto si el usuario puso cualquier cosa menos una ruta válida
`e {...}` -> Si no se cumplió lo anterior, hacé esto (borrar el directorio).

## Estado Actual 🧪

- [x] Logo ASCII
- [x] Core del shell (básico)
- [ ] Sistema de comandos modular
- [ ] Configuración multilenguaje
- [ ] Editor "Hagaxin Code"
- [ ] Configuración General
- [ ] Lenguaje de scripting ligero.