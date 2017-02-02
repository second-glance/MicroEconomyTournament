# MicroEconomyTournament
## Qu'est-ce que ce Repository?
J'ai eu une idée de tournoi d'algorithme et je la propose ici pour que les détails soient accessibles à tous.

## Pourquoi un Tournoi
Le fonctionnement de l'économie est perçue comme ésotérique par beaucoup de monde. Ce tournoi est en réalité plus un prétexte pour aider à la compréhension d'un marché que pour désigner un quelconque vainqueur.

L'idée serait de créer une petite économie virtuelle et de la simuler pour illustrer le fonctionnement d'une économie de marché. Plusieurs algorithmes (vraisemblablement des classes dans un langage donné) s'affronteraient pour réaliser le profit le plus élevé possible.

Ce tournoi a vocation à être "vivant" et mis à jour régulièrement. Tout le monde serait le bienvenu pour y participer, d'autant plus qu'il peut demander de bonnes connaissances en programmation. Le nombre de soumission par joueur serait a priori illimitée (sauf abus) et les algorithmes pourraient être modifiés directement dans le git pour améliorer la stratégie d'un alorithme.

Les résultats des tournois pourraient être utilisés pour illustrer certaines notions d'économies (voir tout en bas). En plus du classement des algorithmes (qui n'a pour seule vocation de stimuler l'envie de maximiser les profits des joueurs), un PIB/joueur et d'autres indicateurs économiques pourraient être calculés pour aider à la production d'articles.

## Fonctionnement de l'Economie
### Types de Bien
Dans ce monde virtuelle, seul trois types de bien existeraient:
<ul>
<li> Des matières premières</li>
<li> Des travaux en cours </li>
<li> Des biens de consommation</li>
</ul>

Le principe serait qu'un certain nombre de matières premières seraient nécessaires pour créer des WIP, qui eux même seraient consommés dans une certaine quantité pour réaliser des biens de consommation.

Les seules valeurs fournies par l'environnement ne serait pas les prix de ces biens, mais uniquement la demande biens de consommation et l'offre de matières premières. Toutes les autres variables seraient produites par les algorithmes des compétiteurs.

### Marchés
Les matières premières et les biens de consommation seront attribués à l'aide d'un processus de vente aux enchères. Les algorithmes des joueurs seront donc en compétition pour obtenir ces biens pour leur production et vendre leurs produits finis.
Un marché secondaire sera également disponible pour ces deux biens. Ainsi, si un joueur possède une trop grande quantité d'un bien, il pourra s'en déssaisir sur ce marché (ou spéculer, ou arbitrer).

Le WIP sera également échangé sur un marché secondaire.

Le dernier marché de ce jeu sera celui des capitaux: les joueur auront la possibilité d'emprunter ou de prêter de l'argent aux autres joueurs.

## Déroulement d'une Compétition
### Déroulement Global
Une compétition se déroule en un nombre donné de tours. A chaque tour, les joueurs peuvent simultanément effectuer des actions telles que produire, vendre, emprunter...
Le controlleur fournira une valeur aléatoire pour la demande de biens de consommation et l'offre de matières premières. Cette valeur sera aléatoire et suivra un mouvement brownien (le drift et la volatilité seront connus des joueurs). La valeur de départ sera également aléatoire et dépendra du nombre d'algorithmes en compétition.

Une comptabilité des joueurs est enregistrée et sert à effectuer le classement à la fin d'une simulation. Les biens de consommation en stock sont évalués à l'ask price median du dernier tour.

### Déroulement d'un Tour
Au début du tour, les décisions des joueurs sont enregistrées (e.g. produire n unités de WIP, acheter m unités de matières premières au prix K).
Ensuite, le controlleur choisi les valeurs d'offre et de demande.
Finalement les actions sont effectuées en réconciliant l'offre et la demande sur les différents marchés.

## Actions des Joueurs
(D'autres actions seront probablement ajoutées plus tard)
<ul>
<li> Fournir un bid/ask price et une quantité pour le marché des matières premières (primary et secondary)</li>
<li> Fournir un bid/ask price et une quantité pour le marché des biens de consommation (primary et secondary)</li>
<li> Fournir un bid/ask price et une quantité pour le marché du WIP</li>
<li> Produire n unités (avec un maximum dépendant de la capacité de production)</li>
<li> Investir (en actif) pour augmenter définitivement la capacité de production</li>
<li> Dépenser (en charge) pour augmenter temporairement la capacité de production</li>
<li> Emprunter/prêter à un concurrent </li>
</ul>

Les biens non consommés/vendus lors d'un tour sont stockés pour le tour suivant.

## Evolution Probable du Jeu
Les premiers algorithmes fournis seront probablement assez versatiles. Ce scénario pourra servir de référence pour les autres. Au fur et à mesure, certains algorithmes vont se spécialiser, ce qui sera un excellent moyen d'illustrer l'apport de la division du travail.
La suite devrait être que des algorithmes orientés uniquement vers le marché des capitaux vont apparaître, ce qui permettra de parler de taux d'intérêts et de démystifier ce concept.
Je tablerais sur l'apparition de delears, spéculateurs et arbitrageurs relativement relativement tard, mais ce sera de nouveau l'occasion d'écrire un article.
Finalement, les règles pourront être améliorées au fur et à mesure, pour créer des mécanismes de faillite, des prix plachers ou toutes autres limitations pour en montrer l'impact sur le fonctionnement de l'économie.
