
function up () {
    mypath=""
    if [[ ! -z "$1" ]]
    then
       for i in `seq $1`
       do
            mypath="${mypath}../"
       done
    else
       mypath="../"
    fi
    cd ${mypath}
    echo 'dossier courant: '+$(pwd)
}

function open(){
# utilise extra/kdebase-kdialog
echo 'openDialog'
echo 'existe /usr/local/bin/opend'
    repertoire=$2
    if [[ ! -d $repertoire ]] ; then
        echo "dossier $repertoire non trouvé"
        repertoire='/usr/share/applications/'
    fi
    FICHIER=$(kdialog --getopenfilename ${repertoire} '*.* |tous fichiers' 2>/dev/null)
    $1 $FICHIER
}


function erreurs(){
	#erreurs du jour(-b)
	echo -e "\e[00;32m journalctl -p err -rx \e[00m" 
	journalctl -p err -rxb --no-pager 
}

function rmE(){
    if [ -f $1 ] ; then
        sudo pacman -Qo $1 && sudo rm $1  || echo 'fichier indépendant non supprimé (utilisez rm)'
    else
        echo 'Erreur: fichier non trouvé'
    fi
    # sudo pacman -Qo "/usr/share/fonts/TTF/mal1-b.ttf"
}

function google() { xdg-open "http://www.google.fr/search?q=$*" ; }

#recherche dans rep courant par nom
function ff() 
{ 
	rep=${2:='.'}
	echo -e "params: file_name_to_find\t [directory]\recherche de \$1 dans rep courant ou \$2'$2'\nfind $rep -type f -iname '*'$1'*' -exec ls -l {} \;\n--------------------------------------------"
	find $rep -type f -iname '*'$1'*' -exec ls -l --color {} \; 
}
#recherche dans rep courant par contenu
function fff() 
{ 
	rep=${3:='.'}
	echo -e "params: file_name\t string_to_find\t [directory]\nrecherche de \$2 dans les fichiers \$1 dans rep courant ou \$3'$3'\nfind $rep -type f -iname '*'$1'*' -readable | xargs grep -sl "$2" \n------------------------------------------------------------------"
	find $rep -type f -iname '*'$1'*' -readable -exec grep -sl "$2" {} \;
}

# ex - archive extractor
# usage: ex <file>
function ex ()
{
  if [ -f $1 ] ; then
    case $1 in
      *.tar.bz2)   tar xjf $1   ;;
      *.tar.gz)    tar xzf $1   ;;
      *.bz2)       bunzip2 $1   ;;
      *.rar)       unrar x $1     ;;
      *.gz)        gunzip $1    ;;
      *.tar)       tar xf $1    ;;
      *.tbz2)      tar xjf $1   ;;
      *.tgz)       tar xzf $1   ;;
      *.zip)       unzip $1     ;;
      *.Z)         uncompress $1;;
      *.7z)        7z x $1      ;;
      *)           echo "'$1' cannot be extracted via ex()" ;;
    esac
  else
    echo "'$1' is not a valid file"
  fi
}

function jp() {
 case $1 in
   www) cd ~/www/ ;;
   log) cd /var/log/ ;;
   *) echo 'Jump vers ou?';;
 esac
}

function monAccueil()
{
screenfetch
#echo -e "\e[00;32m $(lsb_release -ds)\e[00;33m $(lsb_release -rs)\e[00m"
#echo -e "\e[00;32m $(uname -n) \e[00;33m $(uname -o)\e[00m"  
echo -e "\e[00;31m$(df -h -t ext4 |grep ^/) \e[00m"
#lsb_release -ds|toilet -f  smblock -F metal;
#espeak -s 160 -v fr+12 "yo patrick "
}





