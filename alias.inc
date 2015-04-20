alias -s txt=kate
alias write=kate
alias -s sh=/bin/bash


alias ls='ls --group-directories-first --time-style=+"%d.%m.%Y %H:%M" --color=auto -F'
#alias ll='ls -l --group-directories-first --time-style=+"%d.%m.%Y %H:%M" --color=auto -F'
alias ll='ls -alFh --group-directories-first'
#alias la='ls -la --group-directories-first --time-style=+"%d.%m.%Y %H:%M" --color=auto -F'
alias grep='grep --color=tty -d skip'
#alias cp="cp -i"                          # confirm before overwriting something
alias df='df -h'                          # human-readable sizes
alias free='free -m'                      # show sizes in MB
alias maj='sudo pacman-mirrors -g -c France,Germany,Netherlands,United_Kingdom && sudo pacman -Syu'
alias ifconfig='ip addr show|grep "inet ";ip route show'
alias ippublique='curl ipecho.net/plain'
alias info='inxi -Fxz'
alias wedit="subl3"

#alias "-"='cd -'
alias ".."='cd ..'
alias "cd.."='cd ..'

alias pac-info_Si='yaourt -Si'
alias pac-info-local_Qi='pacman -Qi'
alias pac-info-files_Ql='pacman -Ql'
alias pac-install_S='yaourt -S'
alias pac-supp_Rn='yaourt -Rn'
alias pac-erase_Rsn='yaourt -Rsn'
alias pac-update_Syu='maj'
alias pac-chercher_Ss='yaourt -Ss'
alias pac-cherche-install_Qs='yaourt -Qs'
alias pac-orphelins_Qdt='pacman -Qdt'
alias pac-miroirs-update='sudo pacman-mirrors -g -c France,Germany,Netherlands,United_Kingdom'
alias pac-nb-install='pacman -Q|wc -l'
alias pac-nb-install-user='pacman -Qqet|wc -l'
alias pac-cache-clear_Sc='echo "nettoyage du cache pacman";sudo pacman -Sc'
alias pac-cache-erase_Scc='echo "Suppression complète du cache pacman";sudo pacman -Scc'
alias pac-cherche-pacnew='echo "Recherche des fichiers de configuration a gérer manuellement";sudo find /etc -regextype posix-extended -regex ".+\.pac(new|save|orig)"|grep "pac" 2> /dev/null'

alias sysd-journal-services-failes='systemctl --state=failed'
alias sysd-journal-erreurs='echo "journalctl -r -p err";journalctl -r -p err'
alias sysd-journal-depuis-le-boot='journalctl -b -r |less'
alias sysd-analyze-blame='systemd-analyze blame'
alias sysd-timers='echo "systemctl list-timers"; systemctl list-timers'
alias sysd-poweroff='echo "Eteindre la machine";sudo systemctl poweroff'

alias git-history='git log --decorate --oneline --graph --all --date=short --pretty=format:"%C(auto)%d%Creset %C(auto)%h%Creset - %C(cyan)%an%Creset %Cgreen(%ad)%Creset : %s" '

alias grub-update='sudo grub-mkconfig -o /boot/grub/grub.cfg'
alias pacman-mirrors='sudo reflector --verbose -l 30 -p http --sort rate --threads 1 --save /etc/pacman.d/mirrorlist'


