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

## Avertissement

Ce dépôt contient un projet étudiant réalisé à des fins pédagogiques et académiques. Il peut contenir des limitations, des choix simplifiés ou des failles de sécurité ; il n est pas destiné à un usage professionnel, à la production ou au traitement de données réelles. Utilisez-le uniquement dans un environnement de test et adaptez-le avant toute réutilisation.

