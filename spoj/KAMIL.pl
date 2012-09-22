# Sphere Online Judge
# Problema: KAMIL - Kamil
# Categoria: Challenge

while(<>){$p=0;@s=split//,$_;for($i=0;$i<$#s;$i++){$p++if($s[$i]eq'T'||$s[$i]eq'D'||$s[$i]eq'L'||$s[$i]eq'F');}$p=1<<$p;print "$p\n"}
