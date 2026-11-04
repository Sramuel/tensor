# Tensor

Simple implementation of integer *tensor* in C.

## Pré-requis

- CMake 3.16 ou plus récent
- Un compilateur C99

## Compiler

```bash
cmake -S . -B build
cmake --build build
```

## Utiliser l'exemple

```bash
./build/sample
```

L'exemple crée un tenseur, l'affiche et sauvegarde des données. Pour lancer les tests :

```bash
ctest --test-dir build --output-on-failure
```
