# Rattrapage-option
Flanger

Epreuve rattrapage option musique

Projet : Effet Flanger

Vous pouvez retrouver ce  compte rendu en format pdf dans les dossiers du projet.

Notre objectif est de coder un effet flanger, d’ouvrir un fichier audio en entrée, de lui appliquer l’effet puis de créer un nouveau fichier avec l’effet appliqué en sortie.

La solution choisie fut de coder en C en utilisant Geany depuis la machine virtuelle VirtualBox proposée par l‘école.

Notre code se divise donc en 3 parties :

-Dans un premier temps nous cherchons à ouvrir un fichier audio pour pouvoir le traiter. Nous avons opté pour que le format du fichier soit .wav et non .mp3 comme proposé dans les ressources de l’énoncé. Il faudra donc penser à convertir le fichier audio en conséquence.

-Nous cherchons ensuite à appliquer l’effet. Nous codons à part l’effet Flanger que nous implémentons par la suite dans le code principal. Pour ce faire nous lisons 2 fois le fichier audio en décalant leur lecture ce qui résulte d’un effet delay basique.

-Enfin, nous cherchons à créer un fichier .wav de sortie que nous pouvons lire une fois le programme exécuté.

Bilan du projet : 

Malgré avoir compris la théorie du fonctionnement de l’effet flanger, je n’ai aboutit à rien niveau codage.
J’ai en premier lieu trouvé un code (testmain.c) permettant d’ouvrir un fichier .wav en faisant une décomposition binaire, ce qui m’arrangeait car je cherchais aussi à comprendre comment implémenter les valeurs du fichier dans le code pour les traiter.
J’ai ensuite essayé d’écrire un code basique (main.c) pour simplement tester l’ouverture du fichier et la création d’un nouveau où l’effet y aurait été appliqué.
Malheureusement aucun de ses codes n’a tourné sur ma machine et je n’ai pas réussi à comprendre les raisons. Je suis donc resté bloqué à cette étape.
