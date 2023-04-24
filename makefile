SHELL = /bin/bash
cloneURL = https://github.com/nicogrv/

all: help promp

allforce: rmall all

rmall:
	@	echo "Clear";
	@	find . -maxdepth 1 -type d -name '[0-9]*' -exec rm -rf {} +

ssh: 
	$(MAKE) cloneURL=git@github.com:nicogrv/ all



help:
	clear
	@	echo -ne "\r\033[2K" $(LIGHTRED) "42 →  ALL\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "0  →  SuperLibft\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "1  →  Libft\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "2  →  ft_Printf\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "3  →  GetNextLine\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "4  →  Born2BeRoot\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "5  →  FdF\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "6  →  PushSwap\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "7  →  Pipex\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "8  →  Minishell\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "9  →  Philosophes\n\n"${NC}
	@	echo -ne "\r\033[2K" $(LIGHTRED) "10 →  Cpp\n\n"${NC}

promp:
	@	make $(shell bash -c 'read  -p "Project number: " pwd; echo $$pwd')




42 : 0 1 2 3 4 5 6 7 8 9 10



0 : 
	@	echo -ne "\r\033[2K"$(YELLOW) "SuperLibft";
	@	git clone --depth 1 $(cloneURL)0.SuperLibft.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "SuperLibft OK\n";

1 :
	@	echo -ne "\r\033[2K"$(YELLOW) "Libft";
	@	git clone --depth 1 $(cloneURL)1.Libft.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "Libft OK\n";

2 :
	@	echo -ne "\r\033[2K"$(YELLOW) "ft_Printf";
	@	git clone --depth 1 $(cloneURL)2.Printf.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "ft_Printf OK\n";

3 :
	@	echo -ne "\r\033[2K"$(YELLOW) "GetNextLine";
	@	git clone --depth 1 $(cloneURL)3.GetNextLine.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "GetNextLine OK\n";

4 :
	@	echo -ne "\r\033[2K"$(YELLOW) "Born2BeRoot";
	@	git clone --depth 1 $(cloneURL)4.Born2BeRoot.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "Born2BeRoot OK\n";

5 :
	@	echo -ne "\r\033[2K"$(YELLOW) "FdF";
	@	git clone --depth 1 $(cloneURL)5.Fdf.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "FdF OK\n";

6 :
	@	echo -ne "\r\033[2K"$(YELLOW) "PushSwap";
	@	git clone --depth 1 $(cloneURL)6.PushSwap.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "PushSwap OK\n";

7 :
	@	echo -ne "\r\033[2K"$(YELLOW) "Pipex";
	@	git clone --depth 1 $(cloneURL)7.Pipex.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "Pipex OK\n";

8:
	@	echo -ne "\r\033[2K"$(YELLOW) "Minishell";
	@	git clone --depth 1 $(cloneURL)8.Minishell.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "Minishell OK\n";

9:
	@	echo -ne "\r\033[2K"$(YELLOW) "Philosophes";
	@	git clone --depth 1 $(cloneURL)9.philosophes.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "Philosophes OK\n";
	
10:
	@	echo -ne "\r\033[2K"$(YELLOW) "Philosophes";
	@	git clone --depth 1 $(cloneURL)10.Cpp.git --quiet
	@	echo -ne "\r\033[2K"$(LIGHTGREEN) "Philosophes OK\n";




NC='\033[0m'
RED='\033[0;31m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
LIGHTGRAY='\033[0;37m'

DARKGRAY='\033[1;30m'
LIGHTRED='\033[1;31m'
LIGHTGREEN='\033[1;32m'
LIGHTBLUE='\033[1;34m'
LIGHTPURPLE='\033[1;35m'
LIGHTCYAN='\033[1;36m'
YELLOW='\033[1;33m'
WHITE='\033[1;37m'
