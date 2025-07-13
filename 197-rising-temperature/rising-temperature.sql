# Write your MySQL query statement below
select w.id from weather w 
inner join weather r 
on  DATEDIFF(w.recordDate, r.recordDate) = 1 
where w.temperature > r.temperature;