# 🎮 Adivina el Número — Proyecto en C

## 📌 Descripción  
*Adivina el Número* es un juego desarrollado en lenguaje **C**, donde el programa genera un número aleatorio entre 1 y 100 y el usuario debe adivinarlo.  
En cada intento, el programa indica si el número secreto es **mayor** o **menor**, hasta que el jugador acierta.

Este proyecto forma parte de mi portafolio como desarrollador y demuestra el uso de ciclos, condicionales, funciones de aleatoriedad y manejo básico de entrada/salida en consola.

---

## 🧠 Características  
- Generación de número aleatorio con `rand()`  
- Comparación dinámica de intentos  
- Contador de intentos realizados  
- Mensajes interactivos  
- Ejecución en consola  
- Código simple, claro y fácil de entender  

---

## 🛠️ Tecnologías utilizadas  
- Lenguaje **C**  
- Compilador **MinGW** (Dev‑C++)  
- Consola de Windows  

---

## 📂 Estructura del proyecto  
```
adivina-numero/
│── main.c
│── README.md
```

---

## ▶️ Cómo compilar y ejecutar

### **Compilar con GCC**
```
gcc main.c -o adivina
```

### **Ejecutar**
```
./adivina
```

### **En Dev‑C++**
- Compilar: **F9**  
- Ejecutar: **Ctrl + F10**

---

## 📜 Código principal

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, intento, contador = 0;

    srand(time(NULL)); 
    numeroSecreto = rand() % 100 + 1;

    printf("=== Juego: Adivina el Numero ===\n\n");

    do {
        printf("Ingresa un numero entre 1 y 100: ");
        scanf("%d", &intento);
        contador++;

        if (intento < numeroSecreto) {
            printf("El numero es MAYOR\n\n");
        } else if (intento > numeroSecreto) {
            printf("El numero es MENOR\n\n");
        }

    } while (intento != numeroSecreto);

    printf("¡Correcto! Lo adivinaste en %d intentos.\n", contador);

    return 0;
}
```

---

## 🚀 Mejoras futuras  
- Agregar niveles de dificultad  
- Establecer un límite de intentos  
- Guardar récords en un archivo `.txt`  
- Añadir colores en consola  
- Crear un menú de inicio  
- Implementar modo “competencia” entre dos jugadores  

---

## 👨‍💻 Autor  
**Rogelio Aguilar Alcántara**  
Estudiante de Ingeniería en Desarrollo de Software  
Ciudad de México, México  
