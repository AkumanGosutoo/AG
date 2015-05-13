// Copyright (c) 2012 The Chromium Authors. All rights reserved. 
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
$("document").ready(function(){
  var test = {
  data:
  [
  {
    "q": "Que signifie UAL ?",
    "r": "Unité Arithmétique et Logique"
  },
  {
    "q": "Que ne fait pas l'unité de controle ?",
    "r": "Execute les instructions"
  },
  {
    "q": "Quel est le prototcole qui permet d'envoyer le courrier ?",
    "r": "SMTP"
  },
  {
    "q": "Parmi les types de mémoires suivantes quel est la plus lente d'acces ?",
    "r": "ROM"
  },
  {
    "q": "Quel est le systeme d'exploitation le plus ancien ?",
    "r": "Unix"
  },
  {
    "q": "Les transistors ont permis de remplacer quoi ?",
    "r": "Les tubes a vide"
  },
  {
    "q": "Comment s'appelait le precurseur d'internet ?",
    "r": "L'arpanet"
  },
  {
    "q": "A quoi correspond titi dans l'url suivante : telnet ://toto:titi@13.202.148.67:23 ?",
    "r": "Au mot de passe"
  },
  {
    "q": "Quel est le protocole dedie a la navigation WEB ?",
    "r": "HTTP"
  },
  {
    "q": "La logique informatique utilise la base ?",
    "r": "Binaire"
  },
  {
    "q": "A qui doit on les fonctions logiques ?",
    "r": "George Boole"
  },
  {
    "q": "Qu'est-ce qu'un processus ?",
    "r": "Un programme en cours d'execution"
  },
  {
    "q": "Quelle fonction n'est pas execute par le noyau d'un OS ?",
    "r": "La gestion de securite"
  },
  {
    "q": "Quelle est la topologie d'un reseau qui repond a cette description: Chaque ordinateur est relie a tous les autres",
    "r": "Maill"
  },
  {
    "q": "Qu'est-ce que le LAN ?",
    "r": "Un reseau local"
  },
  {
    "q": "Un octet c'est",
    "r": "8 bits"
  },
  {
    "q": "En quelle année a été inventé apple",
    "r": "1976"
  },
  {
    "q": "La loi de Moore dit",
    "r": "Le nombre de transistors sur une puce de circout intégré douvle tous les 18 mois"
  },
  {
    "q": "Une adresse IP (version 4) contient combien d'octet en tout ?",
    "r": "4 octets"
  },
  {
    "q": "Le nombre $10 est un nombre ?",
    "r": "Hexadecimal"
  },
  {
    "q": "Completer les trous dans la phrase suivante avec les bons mots: Un ordinateur: une machine qui saisit (), traite, et restitue () des informations",
    "r": "Peripheriques d'entrée, memoire en programme, Peripheriques de sorties"
  },
  {
    "q": "Comment se nomme l'organisme indépendant qui coordonne tout ce qui concerne l'internet au niveau mondia ?",
    "r": "W3C"
  },
  {
    "q": "Un systeme d'exploitation distribue est equivalent à un systeme",
    "r": "reparti, multi-processeur"
  },
  {
    "q": "Parmi les types de mémoires suivantes, quel est celle qui a la plus petite capacite",
    "r": "Registres"
  },
  {
    "q": "Quel etait la particularite de colossus",
    "r": "C'est la premiere machine totalement electronique"
  },
  {
    "q": "L'entreprise Lenovo s'est fait connaitre dans le monde de l'informatique en rachetant la division informatique de",
    "r": "IBM"
  },
  {
    "q": "Qu'est ce qui permet de synchroniser les composants d'une unite centrale ?",
    "r": "L'horloge"
  },
  {
    "q": "Dans la table ASCII a quoi correspond 10 en décimal ?",
    "r": "/n"
  },
  {
    "q": "Est-ce qu’il existe une porte logique ayant 4 entrées ?",
    "r": "oui"
  },
  {
    "q": "Dans quel genre de machines a-t-on peu de chance de trouver un système d’exploitation ",
    "r": "l'ordinateur central de la NASA"
  },
  {
    "q": "Une porte logique peut avoir combien de sorties ?",
    "r": "plusieurs"
  },
  {
    "q": "Comment s’appelle la partie qui permet de gérer plusieurs OS sur une machine ?",
    "r": "Moniteur de machine virtuelle"
  },
  {
    "q": "L’ordre correct des couches du modele OSI est ?",
    "r": "Physique / Liaison / Réseau / Transport / Session / Présentation / Application"
  },
  {
    "q": "De quand datent les premiers Windows ?",
    "r": "1978 et 1985"
  },
  {
    "q": "Quel est le support qui permet d’avoir le meilleur débit ?",
    "r": "La fibre optique"
  },
  {
    "q": "Quel élément de l’actualité de 2010 représente symboliquement la résurrection d’Apple ?",
    "r": "Ipad"
  },
  {
    "q": "Qu’est qu’un registre ?",
    "r": "Une memoire"
  },
  {
    "q": "Quel était le poids de l’ENIAC ?",
    "r": "30 tonnes"
  },
  {
    "q": "Un Mo vaut ?",
    "r": "2^20 octets"
  },
  {
    "q": "Que signifie WWW ?",
    "r": "World wide web"
  },
  {
    "q": "Internet est un réseau de type ?",
    "r": "WAN"
  },
  {
    "q": "Le nombre : 0x10 est un nombre ?0",
    "r": "Hexa"
  },
  {
    "q": "Qu’est-ce que le SSH ?",
    "r": "A la fois un protocole et un programme"
  },
  {
    "q": "Que signifie SSII ?",
    "r": "Société de Services et d’Ingénierie en Informatique"
  },
  {
    "q": "L’OS est une couche ?",
    "r": "Software"
  },
  {
    "q": "quel est le protocole dedie aux transferts de fichiers",
    "r": "FTP"
  },
  {
    "q": "MS-DOS est un systeme ?",
    "r": "mono-tache mono-utilisteur"
  },
  {
    "q": "Laquelle de ces affirmations concernant les peripheriques de blocs est fausse ?",
    "r": "on ne peux pas modifier un seul caractere"
  },
  {
    "q": "Dans un systeme decimal, la base est ?",
    "r": "10"
  },
  {
    "q": "En binaire signe sur un octet le nombre 11110111",
    "r": "ON SAIT PAS"
  },
  {
    "q": "Quelle indistrie a permis d'aborder la premiere fois la notion de programmation",
    "r": "l'industrie du textile"
  },
  {
    "q": "Le chiffre le plus a droite a toujours",
    "r": "ON NE SAIT PAS"
  },
  {
    "q": "Que vaut 10111111(2) en decimal si on travaille en systeme signe ?",
    "r": "ON NE SAIT PAS"
  },
  {
    "q": "Que vaut 10000000(2) en décimal si on travaille en système signe ?",
    "r": "0"
  },
  {
    "q": "Laquelle de ces affirmations concernant la RAM est vraie ?",
    "r": "son contenu est volatile"
  },
  {
    "q": "A quoi correspond la troisième colonne (en partant de la droite) sur un boulier ?",
    "r": "centaines"
  },
  {
    "q": "pour quantifier l’efficacité d’un microprocesseur on utilise en général ?",
    "r": "la fréquence"
  },
  {
    "q": "un téraoctet c’est ?",
    "r": "10^12 octets"
  },
  {
    "q": "Quel est le nom du système d’exploitation Windows destiné aux systèmes embarqués ?",
    "r": "Windows CE"
  },
  {
    "q": "un mot mémoire c’est ?",
    "r": "on sait pas"
  },
  {
    "q": "Dans le modèle OSI, la couche qui permet de gérer l’adressage et le routage est la couche ?",
    "r": "Reseau"
  },
  {
    "q": "Quel est le numéro de port dédié au HTTP ?",
    "r": "80"
  },
  {
    "q": "Quelle(s) erreur(s) se sont glissées dans la table de multiplication suivante ? TABLE DE MULTIPLICATION : Numéro 0 : 101 * 0 = 0 ...",
    "r": "1, 2 et 4 est fausse "
  },
  {
    "q": "Parmi les types de bus suivants lequel permet de faire circuler les adresses ?",
    "r": "bus de mémoire"
  },
  {
    "q": "les unités centrales de nos ordinateurs sont basés sur ?",
    "r": "l’architecture de Von Neumann"
  },
  {
    "q": "Quel est le nom de la premiere personne ayant fait de la programmation ?",
    "r": "Ada"
  },
  {
    "q": "Quel est le protocole permettant d’attribuer des adresses IP automatiquement et dynamiquement ?",
    "r": "DHCP"
  },
  {
    "q": "Quel est le nom de l'équipement de raccordement de la ligne ADSL chez l’opérateur téléphonique ?",
    "r": "Le DSLAM"
  },
  {
    "q": "La ROM c’est ?",
    "r": "La mémoire morte"
  },
  {
    "q": "Que signifie DNS ?",
    "r": "Domain name system"
  },
  {
    "q": "Comment s’appelle la machine de calcul inventée par Pascal ?",
    "r": "pascaline"
  },
  {
    "q": "Dans la table ASCII a quoi correspond le caractères ‘0’en héxadécimal ?",
    "r": "0"
  },
  {
    "q": "UDP correspond à une couche",
    "r": "Transport"
  },
  {
    "q": "Quel est le protocole utilise par internet au niveau de la couche reseau ?",
    "r": "disque dur"
  },
  {
    "q": "Quel est l’autre nom du bus systeme ?",
    "r": "prout"
  },
  {
    "q": "Parmi les types de memoires suivantes quel est celle qui a la plus petite capacité ?",
    "r": "registres"
  },
  {
    "q": "Completer les trous dans la phrase suivante avec les bons mots: ‘... extrait les instructions situées dans …  Sur l’ordre de …. , …. exécute ces instructions”.",
    "r": "l’UC, la memoire centrale, l’UC, l’UAL"
  },
  {
    "q": "A quoi sert le filtre que l’on doit installer sur sa prise telephonique",
    "r": "a separer la telephonie et la transmission internet"
  },
  {
    "q": "A quoi servent les systemes d’exploitation temps reels ?",
    "r": "a connaitre le temps d’execution d’un programme"
  },
  {
    "q": "Lequel de ces OS n’est pas un systeme a couches ?",
    "r": "MS-DOS"
  },
  {
    "q": "Quelle entreprise a inventée le Personnal Computer",
    "r": "IBM"
  },
  {
    "q": "A quand peut-on estimer environ la naissance de l’ordinateur ?",
    "r": "65 ans"
  },
  {
    "q": "De quand date le premier systeme d’exploitation",
    "r": "1965 - 1980"
  },
  {
    "q": "Quelle est l’entreprise qui ne fais pas partie des 5 premiers constructeurs informatiques mondiaux ?",
    "r": "Apple"
  },
  {
    "q": "Qu’est ce qu’une machine analytique ?",
    "r": "une machine qui est capable de prendre des decisions en fonction des resultats precedents ET une machine qui faire des additions, des soustrations"
  },
  {
    "q": "Dans quel but Colossus a t’il ete mis au point ?",
    "r": "pour dechiffrer les messages allamands"
  },
  {
    "q": "Quel est le protocole permettant la resolution des adressse IP en Noms d’hôtes",
    "r": "DHCP"
  },
  {
    "q": "Avec quoi fonctionnaient les premiers calculateurs électromécaniques ?",
    "r": "AUCUN !"
  },
  {
    "q": "La fonction XOR se représente par ?",
    "r": "rond avec un plus dedans"
  },
  {
    "q": "Une table de vérité sert a ?",
    "r": "donner les valeurs des variables de sorties en fonction des entrées"
  },
  {
    "q": "La fonction NOT se représente par ?",
    "r": "une / devant la variable"
  },
  {
    "q": "Laquelle de ces affirmations concernant la ROM est fausse ?",
    "r": "elle peut etre modifié par l’utilisateur"
  }
  ]
};

var ent = $("#ent");
$("#ent").focus();
$("body").keydown(function()
{
  $("#ent").focus();
});
$("body").mouseover(function()
{
  $("#ent").focus();
});
ent.keydown(function ()
{
  $("#res").empty();
  for (var i = test.data.length - 1; i >= 0; i--) {
    var tmp = test.data[i].q.toLowerCase();
    var sr = $(ent).val().toLowerCase();
    if(tmp.search(sr) != -1)
      $("#res").append('<div class="ques">Q: '+ test.data[i].q +'</div><div class="resp">R: '+ test.data[i].r +'</div>')
  };
})
});