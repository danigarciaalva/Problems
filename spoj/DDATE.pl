# Sphere Online Judge
# Problema: DDATE - Dos Date
# Categoria: Challenge

@x=qw(January February March April May June July August September October November December);$n=<>;while($n){$d=$m=$y=0;$b=<>;for($i=9;$i<23;$i++){$j=$i-9;$y|=1<<$j if$b&1<<$i;$d|=1<<$j if$j<5&&$b&1<<$j;$m|=1<<$j-5 if$j<9&&$j>4&&$b&1<<$j;}print"$d $x[$m-1] $y\n";$n--}
