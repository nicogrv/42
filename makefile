
all: 0 1 2 3 4 5 6 7 8 9

allforce: rmrmrm all

rmrmrm:
	@	echo $(ORANGE) "Clear\n";
	@rm -rf *.*

0 : 
	@	echo $(ORANGE) "SuperLibft";
	@	git clone --depth 1 git@github.com:xXNicoloXx/0.SuperLibft.git --quiet
SuperLibft : 
	@	echo $(ORANGE) "SuperLibft";
	@	git clone --depth 1 git@github.com:xXNicoloXx/0.SuperLibft.git --quiet

1 :
	@	echo $(ORANGE) "Libft";
	@	git clone --depth 1 git@github.com:xXNicoloXx/1.Libft.git --quiet
libft :
	@	echo $(ORANGE) "Libft";
	@	git clone --depth 1 git@github.com:xXNicoloXx/1.Libft.git --quiet

ft_printf :
	@	echo $(ORANGE) "ft_Printf";
	@	git clone --depth 1 git@github.com:xXNicoloXx/2.Printf.git --quiet
2 :
	@	echo $(ORANGE) "ft_Printf";
	@	git clone --depth 1 git@github.com:xXNicoloXx/2.Printf.git --quiet

GetNextLine :
	@	echo $(ORANGE) "GetNextLine";
	@	git clone --depth 1 git@github.com:xXNicoloXx/3.GetNextLine.git --quiet
3 :
	@	echo $(ORANGE) "GetNextLine";
	@	git clone --depth 1 git@github.com:xXNicoloXx/3.GetNextLine.git --quiet

Born2BeRoot :
	@	echo $(ORANGE) "Born2BeRoot";
	@	git clone --depth 1 git@github.com:xXNicoloXx/4.Born2BeRoot.git --quiet
4 :
	@	echo $(ORANGE) "Born2BeRoot";
	@	git clone --depth 1 git@github.com:xXNicoloXx/4.Born2BeRoot.git --quiet

fdf :
	@	echo $(ORANGE) "FdF";
	@	git clone --depth 1 git@github.com:xXNicoloXx/5.Fdf.git --quiet
5 :
	@	echo $(ORANGE) "FdF";
	@	git clone --depth 1 git@github.com:xXNicoloXx/5.Fdf.git --quiet
5.5 :
	@	echo $(ORANGE) "SuperLibft";
	@	git clone --depth 1 git@github.com:xXNicoloXx/5.5Fdf_Libs-Maps.git --quiet

PushSwap :
	@	echo $(ORANGE) "PushSwap";
	@	git clone --depth 1 git@github.com:xXNicoloXx/6.PushSwap.git --quiet
6 :
	@	echo $(ORANGE) "PushSwap";
	@	git clone --depth 1 git@github.com:xXNicoloXx/6.PushSwap.git --quiet

Pipex :
	@	echo $(ORANGE) "Pipex";
	@	git clone --depth 1 git@github.com:xXNicoloXx/7.Pipex.git --quiet
7 :
	@	echo $(ORANGE) "Pipex";
	@	git clone --depth 1 git@github.com:xXNicoloXx/7.Pipex.git --quiet

Minishell:
	@	echo $(ORANGE) "Minishell";
	@	git clone --depth 1 git@github.com:xXNicoloXx/8.Minishell.git --quiet
8:
	@	echo $(ORANGE) "Minishell";
	@	git clone --depth 1 git@github.com:xXNicoloXx/8.Minishell.git --quiet

Philosophes:
	@	echo $(ORANGE) "Philosophes";
	@	git clone --depth 1 git@github.com:xXNicoloXx/9.philosophes.git --quiet
9:
	@	echo $(ORANGE) "Philosophes";
	@	git clone --depth 1 git@github.com:xXNicoloXx/9.philosophes.git --quiet




NOCOLOR='\033[0m'
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