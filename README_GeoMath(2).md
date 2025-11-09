GeoMath - Bibliothèque C++ de Géométrie 2D

Description du Projet
GeoMath est une bibliothèque C++ conçue à des fins pédagogiques pour illustrer les principes fondamentaux de la géométrie plane.  
Elle repose sur des structures simples pour représenter des points, vecteurs et transformations géométriques.  
Le but de ce projet est d’apprendre à modéliser des objets mathématiques tout en consolidant les bases du langage C++.

Contenu du Projet

 Structures Fondamentales
cpp
struct Point2D { float x, y; };     
struct Vector2D { float x, y; };    


Ces structures permettent de manipuler :
- des coordonnées (x, y)
- des directions et magnitudes
- des relations géométriques entre objets

Fonctions Implémentées

Opérations sur les Points
- point2f Makep2f( x, y) : Crée un point 2D
- point2f Makep2f( p, v) : creer un point a partir d' un vecteur 
- translate(const point2f&  dx, dy) : Translate un point
- Scale(p, kx, ky) : Mise à l’échelle
- Rotate(p, angle) : Rotation autour de l’origine
- Equal(a, b, tol) : Compare deux points avec tolérance

Opérations sur les Vecteurs
- Makev2f(x, y) : Crée un vecteur
-Makev2f(A, B) : Calcule le vecteur a partir de deux point
- Add(a, b) : Somme vectorielle
- Sub(a, b) : Différence
_ scale(v, scalar): mise en echelle d'un vecteur par un scalaire
- Dot(a, b) : Produit scalaire
- Norm(v) : Norme du vecteur
- Normalize(v) : Normalisation unitaire
- Lerp(a, b, t) : Interpolation linéaire
- Determinant(a, b) : Déterminant (aire orientée)

 Structure du Projet

GeoMath/
│
├── geometry/
│   ├── point.h
│   ├── vector.h
│   └── utils.h
│
├── tests/
│   └── main.cpp
│
└── README.md

Chaque fichier est indépendant, mais conçu pour fonctionner de manière modulaire et cohérente.

Tests Unitaires
Le fichier main.cpp comprend des tests unitaires pour vérifier le comportement de toutes les fonctions.  
Chaque test affiche un message de réussite ou d’échec clair.

Exemple de test :
cpp
Point2D p = Makep2f(2.0f, 3.0f);
Point2D q = Makev2f(p, 1.0f, -1.0f);
TEST("Translation correcte", Equal(q, Makep2f(3.0f, 2.0f)));


Concepts Abordés

Mathématiques
- Algèbre vectorielle (somme, produit scalaire, norme)
- Transformations géométriques (rotation, mise à l’échelle)
- Interpolation et proportionnalité
- Précision numérique et erreurs d’arrondi

Programmation
- Structures et passage par valeur
- Fonctions pures et modularité
- Tests unitaires maison
- Organisation hiérarchique du code

 Objectifs Pédagogiques
En réalisant GeoMath, vous apprenez à :
1. Structurer un projet C++ modulaire  
2. Appliquer les mathématiques à la programmation  
3. Écrire un code clair, documenté et testable  
4. Développer votre rigueur logique et mathématique  

 Avantages des Struct
| Attribut | Avantage |
|-----------|-----------|
| Données publiques | Accès direct sans accesseurs |
| Sémantique de valeur | Manipulation simple et sûre |
| Interopérabilité | Compatible avec le C et autres langages |
| Performance | Pas de surcharge inutile |

Bonnes Pratiques
- Toujours vérifier la tolérance lors des comparaisons flottantes  
- Tester chaque fonction individuellement  
- Isoler les fichiers par fonctionnalité  
- Ajouter des assertions dans les tests unitaires  

Conclusion
GeoMath est une base solide pour explorer la géométrie numérique.  
Ce projet pose les fondations pour des domaines plus avancés :
- Graphisme 2D/3D  
- Physique du jeu vidéo  
- Vision par ordinateur  

Comprendre les fondations, c’est construire l’avenir.
