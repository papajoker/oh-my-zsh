alias -s txt=kate
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

alias pac-info='pacman -Si'
alias pac-info-local='pacman -Qi'
alias pac-info-files='pacman -Ql'
alias pac-supp='pacman -Rn'
alias pac-erase='pacman -Rsn'
alias pac-up='maj'

