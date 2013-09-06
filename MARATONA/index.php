<?php 
fscanf(STDIN,"%d %d", $postos, $distancia_media);

fscanf(STDIN,"%d", $posto); 
$percurso = 0;
$consegue = true;

if($posto > $distancia_media)
	$consegue = false;
else{
	$percurso = $posto;
	for($i=1;$i<$postos;$i++){
		fscanf(STDIN,"%d", $posto); 
		if($percurso+$distancia_media >= $posto){
			$percurso = $posto;
		}else{
			$consegue = false;
		} 
	} 
}
if($consegue)
	echo "S";
else
	echo "N";
?>