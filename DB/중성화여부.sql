SELECT animal_id, name, if((SEX_UPON_INTAKE like '%Neutered%' or sex_upon_intake like '%Spayed%'),'O', 'X') as 중성화
from animal_ins
