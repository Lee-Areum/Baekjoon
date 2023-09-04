SELECT name, count(*) as count
from animal_ins
group by name
having count > 1 and name is not null
order by name
