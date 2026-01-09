# CPP Modules 00-04

Cursus C++ - Projet 42 Paris

## À propos

Ce repository regroupe les modules CPP 00 à 04 du cursus C++ de 42. Chaque module introduit progressivement les concepts du C++ moderne, de la programmation orientée objet aux templates et aux containers STL.

Ces modules m'ont permis de maîtriser le C++ et de comprendre les différences fondamentales avec le C, ainsi que les concepts avancés de la programmation orientée objet.

## Structure

```
cpp_modules/
├── module_00/    # Introduction au C++
├── module_01/    # Allocation mémoire, références, pointeurs
├── module_02/    # Polymorphisme ad-hoc, surcharge d'opérateurs
├── module_03/    # Héritage
└── module_04/    # Classes abstraites, interfaces
```

## Module 00 - Introduction

**Concepts abordés :**
- Namespaces
- Classes, membres, fonctions membres
- stdio streams
- Initialisation lists
- static, const
- Pointeurs et références

**Exercices :**
- `ex00` : Megaphone - Manipulation de chaînes
- `ex01` : PhoneBook - Création d'une classe simple

**Ce que j'ai appris :**
- Différences fondamentales entre C et C++
- Utilisation de `std::string`, `std::cout`, `std::cin`
- Création de classes avec membres privés et publics
- Constructeurs et destructeurs

## Module 01 - Mémoire, pointeurs, références, switch

**Concepts abordés :**
- Allocation mémoire (`new`/`delete`)
- Pointeurs vers membres
- Références
- Switch statement
- Fichiers

**Exercices :**
- `ex00` : BraiiiiiiinnnzzzZ - Création d'objets avec `new`
- `ex01` : Moar brainz! - Tableau d'objets
- `ex02` : HI THIS IS BRAIN - Pointeurs vs références
- `ex03` : Unnecessary violence - Références
- `ex04` : Sed is for losers - Manipulation de fichiers
- `ex05` : Harl 2.0 - Pointeurs vers fonctions membres
- `ex06` : Harl filter - Switch statement

**Ce que j'ai appris :**
- Gestion de la mémoire avec `new` et `delete`
- Différence entre pointeurs et références
- Pointeurs vers fonctions membres
- Manipulation de fichiers en C++
- Utilisation du switch avec strings

## Module 02 - Polymorphisme ad-hoc, surcharge d'opérateurs

**Concepts abordés :**
- Surcharge d'opérateurs
- Forme canonique orthodoxe
- Opérateurs d'affectation
- Streams
- Nombres à virgule fixe (Fixed Point)

**Exercices :**
- `ex00` : My First Canonical Form - Forme canonique de base
- `ex01` : Towards a more useful fixed-point number class - Classe Fixed améliorée
- `ex02` : Now we're talking - Surcharge d'opérateurs arithmétiques et de comparaison

**Ce que j'ai appris :**
- Surcharge des opérateurs arithmétiques (+, -, *, /)
- Surcharge des opérateurs de comparaison (==, !=, <, >, <=, >=)
- Forme canonique (constructeur de copie, opérateur d'affectation, destructeur)
- Surcharge de `<<` pour les streams
- Représentation des nombres à virgule fixe
- Gestion de la précision avec les bits fractionnaires

## Module 03 - Héritage

**Concepts abordés :**
- Héritage
- Protections d'accès
- Constructeurs et destructeurs dans l'héritage
- Redéfinition de fonctions membres

**Ce que j'ai appris :**
- Création de hiérarchies de classes
- Héritage simple et multiple
- Polymorphisme avec fonctions virtuelles
- Gestion des constructeurs/destructeurs dans l'héritage

## Module 04 - Classes abstraites, interfaces

**Concepts abordés :**
- Classes abstraites
- Interfaces
- Polymorphisme pur
- Classes abstraites vs interfaces

**Ce que j'ai appris :**
- Création de classes abstraites avec fonctions virtuelles pures
- Implémentation d'interfaces
- Polymorphisme avancé
- Design patterns avec interfaces

## Compilation

Chaque module et exercice a son propre Makefile :

```bash
cd module_00/ex00
make

cd module_01/ex00
make
```

## Ce que j'ai appris globalement

- **Programmation orientée objet** : Classes, encapsulation, héritage, polymorphisme
- **Gestion mémoire** : `new`/`delete`, pointeurs intelligents (plus tard)
- **STL** : Utilisation de la bibliothèque standard C++
- **Surcharge d'opérateurs** : Personnalisation du comportement des opérateurs
- **Templates** : Programmation générique (modules suivants)
- **Best practices** : Forme canonique, const-correctness, RAII

## Progression

Ces modules représentent une progression logique :
1. **Module 00** : Bases du C++
2. **Module 01** : Gestion mémoire et références
3. **Module 02** : Surcharge d'opérateurs
4. **Module 03** : Héritage et polymorphisme
5. **Module 04** : Classes abstraites et interfaces

Chaque module construit sur les précédents pour créer une compréhension complète du C++.

---

**Projets réalisés dans le cadre du cursus 42 Paris**
